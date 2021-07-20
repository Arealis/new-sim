/********************************************************************************
** Form generated from reading UI file 'userlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGIN_H
#define UI_USERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserLogin
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
    QGridLayout *gridLayout;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QWidget *userpassWidget;
    QHBoxLayout *horizontalLayout_3;
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

    void setupUi(QDialog *UserLogin)
    {
        if (UserLogin->objectName().isEmpty())
            UserLogin->setObjectName(QString::fromUtf8("UserLogin"));
        UserLogin->resize(302, 256);
        verticalLayout = new QVBoxLayout(UserLogin);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        topWidget = new QWidget(UserLogin);
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
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
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

        emailWidget = new QWidget(UserLogin);
        emailWidget->setObjectName(QString::fromUtf8("emailWidget"));
        sizePolicy.setHeightForWidth(emailWidget->sizePolicy().hasHeightForWidth());
        emailWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(emailWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        emailLabel = new QLabel(emailWidget);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        gridLayout->addWidget(emailLabel, 0, 0, 1, 1);

        emailLineEdit = new QLineEdit(emailWidget);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));

        gridLayout->addWidget(emailLineEdit, 1, 0, 1, 1);


        verticalLayout->addWidget(emailWidget);

        userpassWidget = new QWidget(UserLogin);
        userpassWidget->setObjectName(QString::fromUtf8("userpassWidget"));
        sizePolicy.setHeightForWidth(userpassWidget->sizePolicy().hasHeightForWidth());
        userpassWidget->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(userpassWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
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


        horizontalLayout_3->addWidget(userWidget);

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


        horizontalLayout_3->addWidget(passWidget);


        verticalLayout->addWidget(userpassWidget);

        buttonW = new QWidget(UserLogin);
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


        retranslateUi(UserLogin);

        QMetaObject::connectSlotsByName(UserLogin);
    } // setupUi

    void retranslateUi(QDialog *UserLogin)
    {
        UserLogin->setWindowTitle(QCoreApplication::translate("UserLogin", "Dialog", nullptr));
        nameLabel->setText(QCoreApplication::translate("UserLogin", "Full Name", nullptr));
        privelageLabel->setText(QCoreApplication::translate("UserLogin", "Privelage", nullptr));
        privelageComboBox->setItemText(0, QCoreApplication::translate("UserLogin", "Viewer", nullptr));
        privelageComboBox->setItemText(1, QCoreApplication::translate("UserLogin", "Mechanic", nullptr));
        privelageComboBox->setItemText(2, QCoreApplication::translate("UserLogin", "Purchasing", nullptr));
        privelageComboBox->setItemText(3, QCoreApplication::translate("UserLogin", "Inventory Manager", nullptr));
        privelageComboBox->setItemText(4, QCoreApplication::translate("UserLogin", "Admin", nullptr));

        emailLabel->setText(QCoreApplication::translate("UserLogin", "Email", nullptr));
        userLabel->setText(QCoreApplication::translate("UserLogin", "Username", nullptr));
        passLabel->setText(QCoreApplication::translate("UserLogin", "Password", nullptr));
        acceptButton->setText(QCoreApplication::translate("UserLogin", "Accept", nullptr));
        cancelButton->setText(QCoreApplication::translate("UserLogin", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserLogin: public Ui_UserLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGIN_H
