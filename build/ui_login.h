/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *topWidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *nameWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QWidget *privelageWidget;
    QVBoxLayout *verticalLayout_6;
    QLabel *privelageLabel;
    QComboBox *privelageComboBox;
    QWidget *emailWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QWidget *userpassWidget;
    QVBoxLayout *verticalLayout_7;
    QWidget *userWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *userLabel;
    QLineEdit *userLineEdit;
    QWidget *passWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *passLabel;
    QLineEdit *passLineEdit;
    QWidget *buttonW;
    QHBoxLayout *horizontalLayout;
    QPushButton *acceptButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(342, 281);
        verticalLayout = new QVBoxLayout(LoginWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        topWidget = new QWidget(LoginWindow);
        topWidget->setObjectName(QString::fromUtf8("topWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(topWidget->sizePolicy().hasHeightForWidth());
        topWidget->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(topWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        nameWidget = new QWidget(topWidget);
        nameWidget->setObjectName(QString::fromUtf8("nameWidget"));
        verticalLayout_5 = new QVBoxLayout(nameWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(nameWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        verticalLayout_5->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(nameWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        verticalLayout_5->addWidget(nameLineEdit);


        horizontalLayout_2->addWidget(nameWidget);

        privelageWidget = new QWidget(topWidget);
        privelageWidget->setObjectName(QString::fromUtf8("privelageWidget"));
        verticalLayout_6 = new QVBoxLayout(privelageWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, 0, -1, 0);
        privelageLabel = new QLabel(privelageWidget);
        privelageLabel->setObjectName(QString::fromUtf8("privelageLabel"));

        verticalLayout_6->addWidget(privelageLabel);

        privelageComboBox = new QComboBox(privelageWidget);
        privelageComboBox->addItem(QString());
        privelageComboBox->addItem(QString());
        privelageComboBox->addItem(QString());
        privelageComboBox->addItem(QString());
        privelageComboBox->addItem(QString());
        privelageComboBox->setObjectName(QString::fromUtf8("privelageComboBox"));

        verticalLayout_6->addWidget(privelageComboBox);


        horizontalLayout_2->addWidget(privelageWidget);


        verticalLayout->addWidget(topWidget);

        emailWidget = new QWidget(LoginWindow);
        emailWidget->setObjectName(QString::fromUtf8("emailWidget"));
        sizePolicy.setHeightForWidth(emailWidget->sizePolicy().hasHeightForWidth());
        emailWidget->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(emailWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(9, 0, 9, 0);
        emailLabel = new QLabel(emailWidget);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        verticalLayout_4->addWidget(emailLabel);

        emailLineEdit = new QLineEdit(emailWidget);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));

        verticalLayout_4->addWidget(emailLineEdit);


        verticalLayout->addWidget(emailWidget);

        userpassWidget = new QWidget(LoginWindow);
        userpassWidget->setObjectName(QString::fromUtf8("userpassWidget"));
        sizePolicy.setHeightForWidth(userpassWidget->sizePolicy().hasHeightForWidth());
        userpassWidget->setSizePolicy(sizePolicy);
        verticalLayout_7 = new QVBoxLayout(userpassWidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        userWidget = new QWidget(userpassWidget);
        userWidget->setObjectName(QString::fromUtf8("userWidget"));
        sizePolicy.setHeightForWidth(userWidget->sizePolicy().hasHeightForWidth());
        userWidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(userWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        userLabel = new QLabel(userWidget);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(userLabel->sizePolicy().hasHeightForWidth());
        userLabel->setSizePolicy(sizePolicy1);
        userLabel->setMinimumSize(QSize(0, 0));

        verticalLayout_2->addWidget(userLabel);

        userLineEdit = new QLineEdit(userWidget);
        userLineEdit->setObjectName(QString::fromUtf8("userLineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(userLineEdit->sizePolicy().hasHeightForWidth());
        userLineEdit->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(userLineEdit);


        verticalLayout_7->addWidget(userWidget);

        passWidget = new QWidget(userpassWidget);
        passWidget->setObjectName(QString::fromUtf8("passWidget"));
        sizePolicy.setHeightForWidth(passWidget->sizePolicy().hasHeightForWidth());
        passWidget->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(passWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        passLabel = new QLabel(passWidget);
        passLabel->setObjectName(QString::fromUtf8("passLabel"));
        sizePolicy1.setHeightForWidth(passLabel->sizePolicy().hasHeightForWidth());
        passLabel->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(passLabel);

        passLineEdit = new QLineEdit(passWidget);
        passLineEdit->setObjectName(QString::fromUtf8("passLineEdit"));
        sizePolicy2.setHeightForWidth(passLineEdit->sizePolicy().hasHeightForWidth());
        passLineEdit->setSizePolicy(sizePolicy2);
        passLineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(passLineEdit);


        verticalLayout_7->addWidget(passWidget);


        verticalLayout->addWidget(userpassWidget);

        buttonW = new QWidget(LoginWindow);
        buttonW->setObjectName(QString::fromUtf8("buttonW"));
        sizePolicy.setHeightForWidth(buttonW->sizePolicy().hasHeightForWidth());
        buttonW->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(buttonW);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        acceptButton = new QPushButton(buttonW);
        acceptButton->setObjectName(QString::fromUtf8("acceptButton"));

        horizontalLayout->addWidget(acceptButton);

        cancelButton = new QPushButton(buttonW);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addWidget(buttonW);


        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Dialog", nullptr));
        nameLabel->setText(QCoreApplication::translate("LoginWindow", "Full Name", nullptr));
        privelageLabel->setText(QCoreApplication::translate("LoginWindow", "Privelage", nullptr));
        privelageComboBox->setItemText(0, QCoreApplication::translate("LoginWindow", "Viewer", nullptr));
        privelageComboBox->setItemText(1, QCoreApplication::translate("LoginWindow", "Mechanic", nullptr));
        privelageComboBox->setItemText(2, QCoreApplication::translate("LoginWindow", "Purchasing", nullptr));
        privelageComboBox->setItemText(3, QCoreApplication::translate("LoginWindow", "Inventory Manager", nullptr));
        privelageComboBox->setItemText(4, QCoreApplication::translate("LoginWindow", "Admin", nullptr));

        emailLabel->setText(QCoreApplication::translate("LoginWindow", "Email", nullptr));
        userLabel->setText(QCoreApplication::translate("LoginWindow", "Username", nullptr));
        passLabel->setText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
        acceptButton->setText(QCoreApplication::translate("LoginWindow", "Accept", nullptr));
        cancelButton->setText(QCoreApplication::translate("LoginWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
