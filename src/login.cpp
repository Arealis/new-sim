#include "login.h"
#include "ui_login.h"
#include "sha256.h"
#include "global.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <string>

LoginWindow::LoginWindow(uint8_t windowType, User *user, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginWindow)
{
    WindowType = windowType;
    CurrentUser = user;
    Parent = parent;

    ui->setupUi(this);
    if (windowType == Login) {
        ui->topWidget->hide();
        ui->emailWidget->hide();
    }
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

User login()
{
    User user;
    LoginWindow lw(Login, &user);
    lw.open();
    return user;
}

void User::clear()
{
    id.clear();
    username.clear();
    name.clear();
    email.clear();
    passwordHash = "";
    privelage_flags = (uint8_t)0;
}

User LoginWindow::getTypedText()
{
    User user = {
        0,
        escapeSql(ui->nameLineEdit->text()),
        escapeSql(ui->userLineEdit->text()),
        hashString(ui->passLineEdit->text()),
        escapeSql(ui->emailLineEdit->text()),
        static_cast<uint8_t>(ui->privelageComboBox->currentIndex())
    };
    return user;
}

char *hashString(const QString &stringToHash)
{
    QByteArray tempByteArray = stringToHash.toLatin1();
    unsigned char *unsignedPassword = reinterpret_cast<unsigned char*>(tempByteArray.data());
    SHA256_CTX ctx;
    sha256_init(&ctx);
    sha256_final(&ctx, unsignedPassword);
    return (char*)unsignedPassword;
}

void LoginWindow::on_acceptButton_clicked()
{
    bool ok;
    QString message;

    switch(WindowType) {
        case Login: {
            //TODO: This hashing function is just a placeholder for minimal security, and should be replaced.
            QSqlDatabase db = QSqlDatabase::database("sim");
            QSqlQuery qry(db);
            db.open();
            qry.exec("SELECT id, user, name, pass, privelage, email, theme FROM userdata WHERE user = "%escapeSql(ui->userLineEdit->text()));
            qry.next();
            const char *storedHash = hashString(qry.value(0).toString());
            const char *typedHash = hashString(ui->passLineEdit->text());
            if (strcmp(storedHash, typedHash) != 0) {
                ok = false;
                message = "Username or password is incorrect.";
            } else {
                ok = true;
            }
            db.close();
        } break;

        case NewUser: {
            QSqlDatabase db = QSqlDatabase::database("sim");
            QSqlQuery qry(db);
            db.open();
            qry.exec("SELECT EXISTS (SELECT username FROM userdata WHERE user = "%escapeSql(ui->userLineEdit->text())%")");
            qry.next();
            if (qry.value(0).toBool()) {
                ok = false;
                message = "The entered username is already in use.";
            } else {
                ok = true;
                message = "Missing Information:";
                if (ui->nameLineEdit->isVisible() && ui->nameLineEdit->text().isNull()) {
                    ok = false;
                    message.append("\n\tName");
                }
                if (ui->passLineEdit->isVisible() && ui->passLineEdit->text().isNull()) {
                    ok = false;
                    message.append("\n\tPassword");
                }
                if (ui->emailLineEdit->isVisible() && ui->emailLineEdit->text().isEmpty()) {
                    ok = false;
                    message.append("\n\tEmail");
                }
            }
            if (!ok) {
                QMessageBox messageBox(this);
                messageBox.setWindowTitle("Alert");
                messageBox.setText(message);
                messageBox.open();
            } else {
                User tempUser = getTypedText();
                QString queryString = "INSERT INTO userdata (name, username, password, email, privelage_flags) VALUES ("%
                 tempUser.name%","%
                 tempUser.username%","%
                 tempUser.passwordHash%","%
                 tempUser.email%","%
                 QString::number(tempUser.privelage_flags)%")";
                if (!qry.exec(queryString)) {
                    QMessageBox messageBox(this);
                    messageBox.setWindowTitle("Error Inserting Data");
                    messageBox.setText("Unable to insert new user into the database for unknown reason.");
                    messageBox.open();
                } else {
                    qry.exec("SELECT id FROM userdata WHERE username = "%tempUser.username);
                    qry.next();
                    *CurrentUser = tempUser;
                    CurrentUser->id = qry.value(0).toString();
                }
            }
        }
    }

    if (ok) {
        emit accepted();
    }
}

