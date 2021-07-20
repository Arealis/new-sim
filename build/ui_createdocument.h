/********************************************************************************
** Form generated from reading UI file 'createdocument.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEDOCUMENT_H
#define UI_CREATEDOCUMENT_H

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

class Ui_CreateDocument
{
public:
    QVBoxLayout *mainLayout;
    QWidget *header;
    QHBoxLayout *horizontalLayout;
    QWidget *headerLeft;
    QHBoxLayout *horizontalLayout_2;
    QLabel *logo;
    QLabel *companyInfo;
    QWidget *headerRight;
    QVBoxLayout *verticalLayout_2;
    QLabel *companyName;
    QWidget *docW;
    QHBoxLayout *horizontalLayout_5;
    QLabel *doctype;
    QLineEdit *docNumber;
    QWidget *Spacer;
    QWidget *info;
    QHBoxLayout *infoLayout;
    QWidget *extraWidgetContainer;
    QVBoxLayout *verticalLayout_7;
    QWidget *details;
    QGridLayout *detailsGrid;
    QLabel *customLabel;
    QLabel *detailsNames;
    QLabel *detailsValues;
    QPushButton *addCustom;
    QWidget *spacer;
    QWidget *internalDetails;
    QVBoxLayout *verticalLayout_6;
    QLabel *internalLabel;
    QWidget *internalWidget;
    QGridLayout *internalDetailsGrid;
    QWidget *spacer_2;
    QWidget *spacer_3;
    QWidget *tableWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *footer;
    QHBoxLayout *horizontalLayout_4;
    QPlainTextEdit *notes;
    QWidget *totalsWidget;
    QGridLayout *totalsGridLayout;
    QWidget *buttons;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *update;
    QPushButton *save;
    QPushButton *saveDraft;
    QPushButton *cancel;
    QPushButton *deleteDraft;

    void setupUi(QDialog *CreateDocument)
    {
        if (CreateDocument->objectName().isEmpty())
            CreateDocument->setObjectName(QString::fromUtf8("CreateDocument"));
        CreateDocument->resize(879, 800);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CreateDocument->sizePolicy().hasHeightForWidth());
        CreateDocument->setSizePolicy(sizePolicy);
        mainLayout = new QVBoxLayout(CreateDocument);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        header = new QWidget(CreateDocument);
        header->setObjectName(QString::fromUtf8("header"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(header->sizePolicy().hasHeightForWidth());
        header->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(header);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        headerLeft = new QWidget(header);
        headerLeft->setObjectName(QString::fromUtf8("headerLeft"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(headerLeft->sizePolicy().hasHeightForWidth());
        headerLeft->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QHBoxLayout(headerLeft);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, -1, 0);
        logo = new QLabel(headerLeft);
        logo->setObjectName(QString::fromUtf8("logo"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy3);
        logo->setMinimumSize(QSize(75, 75));

        horizontalLayout_2->addWidget(logo);

        companyInfo = new QLabel(headerLeft);
        companyInfo->setObjectName(QString::fromUtf8("companyInfo"));

        horizontalLayout_2->addWidget(companyInfo);


        horizontalLayout->addWidget(headerLeft);

        headerRight = new QWidget(header);
        headerRight->setObjectName(QString::fromUtf8("headerRight"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(3);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(headerRight->sizePolicy().hasHeightForWidth());
        headerRight->setSizePolicy(sizePolicy4);
        verticalLayout_2 = new QVBoxLayout(headerRight);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        companyName = new QLabel(headerRight);
        companyName->setObjectName(QString::fromUtf8("companyName"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(1);
        sizePolicy5.setHeightForWidth(companyName->sizePolicy().hasHeightForWidth());
        companyName->setSizePolicy(sizePolicy5);
        QFont font;
        font.setFamilies({QString::fromUtf8("Consolas")});
        font.setPointSize(16);
        font.setBold(true);
        companyName->setFont(font);
        companyName->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        verticalLayout_2->addWidget(companyName);

        docW = new QWidget(headerRight);
        docW->setObjectName(QString::fromUtf8("docW"));
        sizePolicy5.setHeightForWidth(docW->sizePolicy().hasHeightForWidth());
        docW->setSizePolicy(sizePolicy5);
        horizontalLayout_5 = new QHBoxLayout(docW);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 6, 2, 0);
        doctype = new QLabel(docW);
        doctype->setObjectName(QString::fromUtf8("doctype"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(5);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(doctype->sizePolicy().hasHeightForWidth());
        doctype->setSizePolicy(sizePolicy6);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Consolas")});
        font1.setPointSize(12);
        doctype->setFont(font1);
        doctype->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        horizontalLayout_5->addWidget(doctype);

        docNumber = new QLineEdit(docW);
        docNumber->setObjectName(QString::fromUtf8("docNumber"));
        QSizePolicy sizePolicy7(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(1);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(docNumber->sizePolicy().hasHeightForWidth());
        docNumber->setSizePolicy(sizePolicy7);

        horizontalLayout_5->addWidget(docNumber);


        verticalLayout_2->addWidget(docW);

        Spacer = new QWidget(headerRight);
        Spacer->setObjectName(QString::fromUtf8("Spacer"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(10);
        sizePolicy8.setHeightForWidth(Spacer->sizePolicy().hasHeightForWidth());
        Spacer->setSizePolicy(sizePolicy8);

        verticalLayout_2->addWidget(Spacer);


        horizontalLayout->addWidget(headerRight);


        mainLayout->addWidget(header);

        info = new QWidget(CreateDocument);
        info->setObjectName(QString::fromUtf8("info"));
        sizePolicy1.setHeightForWidth(info->sizePolicy().hasHeightForWidth());
        info->setSizePolicy(sizePolicy1);
        info->setLayoutDirection(Qt::RightToLeft);
        infoLayout = new QHBoxLayout(info);
        infoLayout->setObjectName(QString::fromUtf8("infoLayout"));
        extraWidgetContainer = new QWidget(info);
        extraWidgetContainer->setObjectName(QString::fromUtf8("extraWidgetContainer"));
        verticalLayout_7 = new QVBoxLayout(extraWidgetContainer);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 9, 9, -1);
        details = new QWidget(extraWidgetContainer);
        details->setObjectName(QString::fromUtf8("details"));
        sizePolicy.setHeightForWidth(details->sizePolicy().hasHeightForWidth());
        details->setSizePolicy(sizePolicy);
        details->setLayoutDirection(Qt::LeftToRight);
        detailsGrid = new QGridLayout(details);
        detailsGrid->setObjectName(QString::fromUtf8("detailsGrid"));
        detailsGrid->setSizeConstraint(QLayout::SetDefaultConstraint);
        detailsGrid->setHorizontalSpacing(8);
        detailsGrid->setVerticalSpacing(2);
        detailsGrid->setContentsMargins(0, 0, 0, 0);
        customLabel = new QLabel(details);
        customLabel->setObjectName(QString::fromUtf8("customLabel"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(customLabel->sizePolicy().hasHeightForWidth());
        customLabel->setSizePolicy(sizePolicy9);
        customLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        detailsGrid->addWidget(customLabel, 1, 0, 1, 1);

        detailsNames = new QLabel(details);
        detailsNames->setObjectName(QString::fromUtf8("detailsNames"));
        sizePolicy.setHeightForWidth(detailsNames->sizePolicy().hasHeightForWidth());
        detailsNames->setSizePolicy(sizePolicy);
        detailsNames->setTextFormat(Qt::AutoText);
        detailsNames->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        detailsGrid->addWidget(detailsNames, 0, 0, 1, 1);

        detailsValues = new QLabel(details);
        detailsValues->setObjectName(QString::fromUtf8("detailsValues"));
        sizePolicy.setHeightForWidth(detailsValues->sizePolicy().hasHeightForWidth());
        detailsValues->setSizePolicy(sizePolicy);
        detailsValues->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        detailsGrid->addWidget(detailsValues, 0, 1, 1, 1);

        addCustom = new QPushButton(details);
        addCustom->setObjectName(QString::fromUtf8("addCustom"));
        QSizePolicy sizePolicy10(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(addCustom->sizePolicy().hasHeightForWidth());
        addCustom->setSizePolicy(sizePolicy10);
        addCustom->setMaximumSize(QSize(16777215, 16));
        addCustom->setBaseSize(QSize(25, 16));
        addCustom->setLayoutDirection(Qt::RightToLeft);
        addCustom->setAutoDefault(false);
        addCustom->setFlat(false);

        detailsGrid->addWidget(addCustom, 1, 1, 1, 1);


        verticalLayout_7->addWidget(details);

        spacer = new QWidget(extraWidgetContainer);
        spacer->setObjectName(QString::fromUtf8("spacer"));
        QSizePolicy sizePolicy11(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(1);
        sizePolicy11.setHeightForWidth(spacer->sizePolicy().hasHeightForWidth());
        spacer->setSizePolicy(sizePolicy11);
        spacer->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_7->addWidget(spacer);


        infoLayout->addWidget(extraWidgetContainer);

        internalDetails = new QWidget(info);
        internalDetails->setObjectName(QString::fromUtf8("internalDetails"));
        QSizePolicy sizePolicy12(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(internalDetails->sizePolicy().hasHeightForWidth());
        internalDetails->setSizePolicy(sizePolicy12);
        verticalLayout_6 = new QVBoxLayout(internalDetails);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        internalLabel = new QLabel(internalDetails);
        internalLabel->setObjectName(QString::fromUtf8("internalLabel"));
        sizePolicy.setHeightForWidth(internalLabel->sizePolicy().hasHeightForWidth());
        internalLabel->setSizePolicy(sizePolicy);
        internalLabel->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_6->addWidget(internalLabel);

        internalWidget = new QWidget(internalDetails);
        internalWidget->setObjectName(QString::fromUtf8("internalWidget"));
        sizePolicy.setHeightForWidth(internalWidget->sizePolicy().hasHeightForWidth());
        internalWidget->setSizePolicy(sizePolicy);
        internalWidget->setLayoutDirection(Qt::LeftToRight);
        internalDetailsGrid = new QGridLayout(internalWidget);
        internalDetailsGrid->setObjectName(QString::fromUtf8("internalDetailsGrid"));

        verticalLayout_6->addWidget(internalWidget);

        spacer_2 = new QWidget(internalDetails);
        spacer_2->setObjectName(QString::fromUtf8("spacer_2"));
        sizePolicy11.setHeightForWidth(spacer_2->sizePolicy().hasHeightForWidth());
        spacer_2->setSizePolicy(sizePolicy11);
        spacer_2->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_6->addWidget(spacer_2);


        infoLayout->addWidget(internalDetails);

        spacer_3 = new QWidget(info);
        spacer_3->setObjectName(QString::fromUtf8("spacer_3"));
        QSizePolicy sizePolicy13(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy13.setHorizontalStretch(1);
        sizePolicy13.setVerticalStretch(0);
        sizePolicy13.setHeightForWidth(spacer_3->sizePolicy().hasHeightForWidth());
        spacer_3->setSizePolicy(sizePolicy13);
        spacer_3->setLayoutDirection(Qt::LeftToRight);

        infoLayout->addWidget(spacer_3);


        mainLayout->addWidget(info);

        tableWidget = new QWidget(CreateDocument);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy14(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy14.setHorizontalStretch(0);
        sizePolicy14.setVerticalStretch(40);
        sizePolicy14.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy14);
        verticalLayout_3 = new QVBoxLayout(tableWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        mainLayout->addWidget(tableWidget);

        footer = new QWidget(CreateDocument);
        footer->setObjectName(QString::fromUtf8("footer"));
        QSizePolicy sizePolicy15(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy15.setHorizontalStretch(0);
        sizePolicy15.setVerticalStretch(16);
        sizePolicy15.setHeightForWidth(footer->sizePolicy().hasHeightForWidth());
        footer->setSizePolicy(sizePolicy15);
        horizontalLayout_4 = new QHBoxLayout(footer);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        notes = new QPlainTextEdit(footer);
        notes->setObjectName(QString::fromUtf8("notes"));
        QSizePolicy sizePolicy16(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy16.setHorizontalStretch(10);
        sizePolicy16.setVerticalStretch(0);
        sizePolicy16.setHeightForWidth(notes->sizePolicy().hasHeightForWidth());
        notes->setSizePolicy(sizePolicy16);
        notes->setBaseSize(QSize(0, 200));

        horizontalLayout_4->addWidget(notes);

        totalsWidget = new QWidget(footer);
        totalsWidget->setObjectName(QString::fromUtf8("totalsWidget"));
        QSizePolicy sizePolicy17(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy17.setHorizontalStretch(1);
        sizePolicy17.setVerticalStretch(0);
        sizePolicy17.setHeightForWidth(totalsWidget->sizePolicy().hasHeightForWidth());
        totalsWidget->setSizePolicy(sizePolicy17);
        totalsGridLayout = new QGridLayout(totalsWidget);
        totalsGridLayout->setObjectName(QString::fromUtf8("totalsGridLayout"));
        totalsGridLayout->setVerticalSpacing(2);
        totalsGridLayout->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_4->addWidget(totalsWidget);


        mainLayout->addWidget(footer);

        buttons = new QWidget(CreateDocument);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        horizontalLayout_6 = new QHBoxLayout(buttons);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        update = new QPushButton(buttons);
        update->setObjectName(QString::fromUtf8("update"));
        QSizePolicy sizePolicy18(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy18.setHorizontalStretch(2);
        sizePolicy18.setVerticalStretch(0);
        sizePolicy18.setHeightForWidth(update->sizePolicy().hasHeightForWidth());
        update->setSizePolicy(sizePolicy18);

        horizontalLayout_6->addWidget(update);

        save = new QPushButton(buttons);
        save->setObjectName(QString::fromUtf8("save"));
        QSizePolicy sizePolicy19(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy19.setHorizontalStretch(1);
        sizePolicy19.setVerticalStretch(0);
        sizePolicy19.setHeightForWidth(save->sizePolicy().hasHeightForWidth());
        save->setSizePolicy(sizePolicy19);

        horizontalLayout_6->addWidget(save);

        saveDraft = new QPushButton(buttons);
        saveDraft->setObjectName(QString::fromUtf8("saveDraft"));
        sizePolicy19.setHeightForWidth(saveDraft->sizePolicy().hasHeightForWidth());
        saveDraft->setSizePolicy(sizePolicy19);

        horizontalLayout_6->addWidget(saveDraft);

        cancel = new QPushButton(buttons);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        sizePolicy18.setHeightForWidth(cancel->sizePolicy().hasHeightForWidth());
        cancel->setSizePolicy(sizePolicy18);

        horizontalLayout_6->addWidget(cancel);

        deleteDraft = new QPushButton(buttons);
        deleteDraft->setObjectName(QString::fromUtf8("deleteDraft"));
        sizePolicy18.setHeightForWidth(deleteDraft->sizePolicy().hasHeightForWidth());
        deleteDraft->setSizePolicy(sizePolicy18);

        horizontalLayout_6->addWidget(deleteDraft);


        mainLayout->addWidget(buttons);


        retranslateUi(CreateDocument);

        addCustom->setDefault(false);


        QMetaObject::connectSlotsByName(CreateDocument);
    } // setupUi

    void retranslateUi(QDialog *CreateDocument)
    {
        CreateDocument->setWindowTitle(QCoreApplication::translate("CreateDocument", "Dialog", nullptr));
        logo->setText(QString());
        companyInfo->setText(QCoreApplication::translate("CreateDocument", "[billing address]\n"
"[company contact info]", nullptr));
        companyName->setText(QCoreApplication::translate("CreateDocument", "[COMPANY NAME]", nullptr));
        doctype->setText(QCoreApplication::translate("CreateDocument", "[DOCTYPE] #", nullptr));
        customLabel->setText(QCoreApplication::translate("CreateDocument", "Add Detail", nullptr));
        detailsNames->setText(QCoreApplication::translate("CreateDocument", "[Default Values]\n"
"[Date]\n"
"[Created by]\n"
"[etc...]", nullptr));
        detailsValues->setText(QCoreApplication::translate("CreateDocument", "\n"
"[today]\n"
"[name]\n"
"[.........]", nullptr));
        addCustom->setText(QCoreApplication::translate("CreateDocument", "+", nullptr));
        internalLabel->setText(QCoreApplication::translate("CreateDocument", "Internal Details", nullptr));
        notes->setPlaceholderText(QCoreApplication::translate("CreateDocument", "Notes / Instructions", nullptr));
        update->setText(QCoreApplication::translate("CreateDocument", "Update", nullptr));
        save->setText(QCoreApplication::translate("CreateDocument", "Save As Final", nullptr));
        saveDraft->setText(QCoreApplication::translate("CreateDocument", "Save As Draft", nullptr));
        cancel->setText(QCoreApplication::translate("CreateDocument", "Cancel", nullptr));
        deleteDraft->setText(QCoreApplication::translate("CreateDocument", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateDocument: public Ui_CreateDocument {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEDOCUMENT_H
