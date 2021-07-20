#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QSqlDatabase>

enum Permissions : uint16_t  {View};
enum class UserGroup : uint8_t {None, Viewer, Mechanic, Purchasing, InventoryManager, Admin};
enum WindowType : uint8_t {Login, NewUser, EditUser};

/*
enum UserFlags : uint8_t
{
    ID = 0x1,
    Name = 0x2,
    Username = 0x4,
    PasswordHash = 0x8,
    Email = 0x10,
    Privelage = 0x20
};
*/


struct User {
    QString id; //Is a QString instead of an int for convenience when inserting into sql statements
    QString name;
    QString username;
    const char* passwordHash;
    QString email;
    uint8_t privelage_flags;
    void clear();
};

User login();
char *hashString(const QString &stringToHash);

namespace Ui {
    class LoginWindow;
}

class LoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LoginWindow(uint8_t windowType, User *user = nullptr, QWidget *parent = nullptr);
    ~LoginWindow();

    uint8_t WindowType;
    User *CurrentUser;
    QWidget *Parent;


private slots:
    void on_acceptButton_clicked();
    User getTypedText();

private:
    Ui::LoginWindow *ui;
};



#endif // LOGIN_H
