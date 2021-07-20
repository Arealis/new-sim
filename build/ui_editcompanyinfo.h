/********************************************************************************
** Form generated from reading UI file 'editcompanyinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCOMPANYINFO_H
#define UI_EDITCOMPANYINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditCompanyInfo
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *extraW;
    QGridLayout *gridLayout;
    QPlainTextEdit *billing;
    QLabel *logoLabel;
    QPlainTextEdit *shipping;
    QLabel *infoLabel;
    QPushButton *logoButton;
    QLabel *nameLabel;
    QLineEdit *name;
    QLabel *billingLabel;
    QLabel *shippingLabel;
    QPlainTextEdit *info;
    QLabel *infoNote;
    QWidget *savecancelWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *saveButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *EditCompanyInfo)
    {
        if (EditCompanyInfo->objectName().isEmpty())
            EditCompanyInfo->setObjectName(QString::fromUtf8("EditCompanyInfo"));
        EditCompanyInfo->resize(557, 383);
        QPalette palette;
        QBrush brush(QColor(18, 18, 18, 135));
        brush.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        EditCompanyInfo->setPalette(palette);
        verticalLayout = new QVBoxLayout(EditCompanyInfo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        extraW = new QWidget(EditCompanyInfo);
        extraW->setObjectName(QString::fromUtf8("extraW"));
        gridLayout = new QGridLayout(extraW);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        billing = new QPlainTextEdit(extraW);
        billing->setObjectName(QString::fromUtf8("billing"));

        gridLayout->addWidget(billing, 8, 1, 1, 1);

        logoLabel = new QLabel(extraW);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));

        gridLayout->addWidget(logoLabel, 4, 0, 1, 1);

        shipping = new QPlainTextEdit(extraW);
        shipping->setObjectName(QString::fromUtf8("shipping"));

        gridLayout->addWidget(shipping, 8, 0, 1, 1);

        infoLabel = new QLabel(extraW);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));

        gridLayout->addWidget(infoLabel, 4, 1, 1, 1);

        logoButton = new QPushButton(extraW);
        logoButton->setObjectName(QString::fromUtf8("logoButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logoButton->sizePolicy().hasHeightForWidth());
        logoButton->setSizePolicy(sizePolicy);
        logoButton->setIconSize(QSize(200, 100));

        gridLayout->addWidget(logoButton, 5, 0, 1, 1);

        nameLabel = new QLabel(extraW);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(nameLabel, 1, 0, 1, 2);

        name = new QLineEdit(extraW);
        name->setObjectName(QString::fromUtf8("name"));
        name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(name, 3, 0, 1, 2);

        billingLabel = new QLabel(extraW);
        billingLabel->setObjectName(QString::fromUtf8("billingLabel"));

        gridLayout->addWidget(billingLabel, 7, 1, 1, 1);

        shippingLabel = new QLabel(extraW);
        shippingLabel->setObjectName(QString::fromUtf8("shippingLabel"));

        gridLayout->addWidget(shippingLabel, 7, 0, 1, 1);

        info = new QPlainTextEdit(extraW);
        info->setObjectName(QString::fromUtf8("info"));

        gridLayout->addWidget(info, 5, 1, 1, 1);

        infoNote = new QLabel(extraW);
        infoNote->setObjectName(QString::fromUtf8("infoNote"));
        infoNote->setScaledContents(false);
        infoNote->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        infoNote->setWordWrap(true);

        gridLayout->addWidget(infoNote, 6, 1, 1, 1);


        verticalLayout->addWidget(extraW);

        savecancelWidget = new QWidget(EditCompanyInfo);
        savecancelWidget->setObjectName(QString::fromUtf8("savecancelWidget"));
        horizontalLayout_2 = new QHBoxLayout(savecancelWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        saveButton = new QPushButton(savecancelWidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        horizontalLayout_2->addWidget(saveButton);

        cancelButton = new QPushButton(savecancelWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout->addWidget(savecancelWidget);

        QWidget::setTabOrder(shipping, billing);
        QWidget::setTabOrder(billing, saveButton);
        QWidget::setTabOrder(saveButton, cancelButton);

        retranslateUi(EditCompanyInfo);

        QMetaObject::connectSlotsByName(EditCompanyInfo);
    } // setupUi

    void retranslateUi(QDialog *EditCompanyInfo)
    {
        EditCompanyInfo->setWindowTitle(QCoreApplication::translate("EditCompanyInfo", "Dialog", nullptr));
        logoLabel->setText(QCoreApplication::translate("EditCompanyInfo", "Logo", nullptr));
        shipping->setPlainText(QString());
        infoLabel->setText(QCoreApplication::translate("EditCompanyInfo", "Company Info", nullptr));
        logoButton->setText(QString());
        nameLabel->setText(QCoreApplication::translate("EditCompanyInfo", "Company Name", nullptr));
        name->setText(QString());
        billingLabel->setText(QCoreApplication::translate("EditCompanyInfo", "Billing Address", nullptr));
        shippingLabel->setText(QCoreApplication::translate("EditCompanyInfo", "Shipping Address", nullptr));
        infoNote->setText(QCoreApplication::translate("EditCompanyInfo", "*The company info is the text that appears next to the logo when you create a document..", nullptr));
        saveButton->setText(QCoreApplication::translate("EditCompanyInfo", "Save Changes", nullptr));
        cancelButton->setText(QCoreApplication::translate("EditCompanyInfo", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditCompanyInfo: public Ui_EditCompanyInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCOMPANYINFO_H
