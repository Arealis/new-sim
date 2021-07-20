/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionImport_From_Existing_Database;
    QAction *actionItems_Table_Default;
    QAction *actionBackup_Database;
    QAction *actionPurchase_Orders;
    QAction *actionGenerate_Report_For_Current_Table;
    QAction *actionProjects;
    QAction *actionReceived;
    QAction *actionRequested_Items;
    QAction *actionPrint_Current_Table;
    QAction *actionItem_History;
    QAction *actionDistribute_Inventory;
    QAction *actionReceive_Items;
    QAction *actionPing_Databse;
    QAction *actionChange_Current_User;
    QAction *actionCreate_New_User;
    QAction *actionSuppliers;
    QAction *actionPurchase_Requisitions;
    QAction *actionEdit_Current_Userdata;
    QAction *actionCreate_Purchase_Requisition;
    QAction *actionEdit_Company_Information;
    QAction *actionCreate_Quotation_Request;
    QAction *actionCreate_Purchase_Order;
    QAction *actionQuotation_Requests;
    QAction *actionClean_Database;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QWidget *TopWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *Search;
    QVBoxLayout *verticalLayout;
    QLabel *SearchBoxLabel;
    QLineEdit *SearchBox;
    QWidget *ClearSearch;
    QVBoxLayout *verticalLayout_5;
    QWidget *Spacer_2;
    QPushButton *ClearSearchButton;
    QWidget *SearchFor;
    QVBoxLayout *verticalLayout_2;
    QLabel *SearchForLabel;
    QComboBox *SearchForDropdown;
    QWidget *Spacer_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QWidget *ExtraDetailsWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ExtraDetails1;
    QLabel *ExtraDetails2;
    QWidget *TableWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *tableLabel;
    QLabel *tableLabel2;
    QTableView *table;
    QWidget *FooterWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Notes;
    QLabel *Totals;
    QMenuBar *menubar;
    QMenu *menuSimple_Inventory_Manager;
    QMenu *menuTables;
    QMenu *menuActions;
    QMenu *menuDebug;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(655, 621);
        MainWindow->setMinimumSize(QSize(100, 25));
        MainWindow->setBaseSize(QSize(600, 400));
        MainWindow->setMouseTracking(false);
        MainWindow->setWindowOpacity(1.000000000000000);
        actionImport_From_Existing_Database = new QAction(MainWindow);
        actionImport_From_Existing_Database->setObjectName(QString::fromUtf8("actionImport_From_Existing_Database"));
        actionItems_Table_Default = new QAction(MainWindow);
        actionItems_Table_Default->setObjectName(QString::fromUtf8("actionItems_Table_Default"));
        actionBackup_Database = new QAction(MainWindow);
        actionBackup_Database->setObjectName(QString::fromUtf8("actionBackup_Database"));
        actionPurchase_Orders = new QAction(MainWindow);
        actionPurchase_Orders->setObjectName(QString::fromUtf8("actionPurchase_Orders"));
        actionGenerate_Report_For_Current_Table = new QAction(MainWindow);
        actionGenerate_Report_For_Current_Table->setObjectName(QString::fromUtf8("actionGenerate_Report_For_Current_Table"));
        actionProjects = new QAction(MainWindow);
        actionProjects->setObjectName(QString::fromUtf8("actionProjects"));
        actionReceived = new QAction(MainWindow);
        actionReceived->setObjectName(QString::fromUtf8("actionReceived"));
        actionRequested_Items = new QAction(MainWindow);
        actionRequested_Items->setObjectName(QString::fromUtf8("actionRequested_Items"));
        actionPrint_Current_Table = new QAction(MainWindow);
        actionPrint_Current_Table->setObjectName(QString::fromUtf8("actionPrint_Current_Table"));
        actionItem_History = new QAction(MainWindow);
        actionItem_History->setObjectName(QString::fromUtf8("actionItem_History"));
        actionDistribute_Inventory = new QAction(MainWindow);
        actionDistribute_Inventory->setObjectName(QString::fromUtf8("actionDistribute_Inventory"));
        actionReceive_Items = new QAction(MainWindow);
        actionReceive_Items->setObjectName(QString::fromUtf8("actionReceive_Items"));
        actionPing_Databse = new QAction(MainWindow);
        actionPing_Databse->setObjectName(QString::fromUtf8("actionPing_Databse"));
        actionChange_Current_User = new QAction(MainWindow);
        actionChange_Current_User->setObjectName(QString::fromUtf8("actionChange_Current_User"));
        actionCreate_New_User = new QAction(MainWindow);
        actionCreate_New_User->setObjectName(QString::fromUtf8("actionCreate_New_User"));
        actionSuppliers = new QAction(MainWindow);
        actionSuppliers->setObjectName(QString::fromUtf8("actionSuppliers"));
        actionPurchase_Requisitions = new QAction(MainWindow);
        actionPurchase_Requisitions->setObjectName(QString::fromUtf8("actionPurchase_Requisitions"));
        actionEdit_Current_Userdata = new QAction(MainWindow);
        actionEdit_Current_Userdata->setObjectName(QString::fromUtf8("actionEdit_Current_Userdata"));
        actionCreate_Purchase_Requisition = new QAction(MainWindow);
        actionCreate_Purchase_Requisition->setObjectName(QString::fromUtf8("actionCreate_Purchase_Requisition"));
        actionEdit_Company_Information = new QAction(MainWindow);
        actionEdit_Company_Information->setObjectName(QString::fromUtf8("actionEdit_Company_Information"));
        actionCreate_Quotation_Request = new QAction(MainWindow);
        actionCreate_Quotation_Request->setObjectName(QString::fromUtf8("actionCreate_Quotation_Request"));
        actionCreate_Purchase_Order = new QAction(MainWindow);
        actionCreate_Purchase_Order->setObjectName(QString::fromUtf8("actionCreate_Purchase_Order"));
        actionQuotation_Requests = new QAction(MainWindow);
        actionQuotation_Requests->setObjectName(QString::fromUtf8("actionQuotation_Requests"));
        actionClean_Database = new QAction(MainWindow);
        actionClean_Database->setObjectName(QString::fromUtf8("actionClean_Database"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        TopWidget = new QWidget(centralwidget);
        TopWidget->setObjectName(QString::fromUtf8("TopWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(TopWidget->sizePolicy().hasHeightForWidth());
        TopWidget->setSizePolicy(sizePolicy1);
        TopWidget->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(TopWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Search = new QWidget(TopWidget);
        Search->setObjectName(QString::fromUtf8("Search"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(30);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Search->sizePolicy().hasHeightForWidth());
        Search->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(Search);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        SearchBoxLabel = new QLabel(Search);
        SearchBoxLabel->setObjectName(QString::fromUtf8("SearchBoxLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(SearchBoxLabel->sizePolicy().hasHeightForWidth());
        SearchBoxLabel->setSizePolicy(sizePolicy3);
        QFont font;
        font.setFamilies({QString::fromUtf8("Yu Gothic UI Semibold")});
        font.setPointSize(9);
        SearchBoxLabel->setFont(font);

        verticalLayout->addWidget(SearchBoxLabel);

        SearchBox = new QLineEdit(Search);
        SearchBox->setObjectName(QString::fromUtf8("SearchBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(SearchBox->sizePolicy().hasHeightForWidth());
        SearchBox->setSizePolicy(sizePolicy4);
        SearchBox->setEchoMode(QLineEdit::Normal);

        verticalLayout->addWidget(SearchBox);


        horizontalLayout->addWidget(Search);

        ClearSearch = new QWidget(TopWidget);
        ClearSearch->setObjectName(QString::fromUtf8("ClearSearch"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(4);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(ClearSearch->sizePolicy().hasHeightForWidth());
        ClearSearch->setSizePolicy(sizePolicy5);
        verticalLayout_5 = new QVBoxLayout(ClearSearch);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_5->setContentsMargins(0, -1, 0, -1);
        Spacer_2 = new QWidget(ClearSearch);
        Spacer_2->setObjectName(QString::fromUtf8("Spacer_2"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(16);
        sizePolicy6.setHeightForWidth(Spacer_2->sizePolicy().hasHeightForWidth());
        Spacer_2->setSizePolicy(sizePolicy6);
        Spacer_2->setMinimumSize(QSize(0, 16));
        Spacer_2->setBaseSize(QSize(0, 16));

        verticalLayout_5->addWidget(Spacer_2);

        ClearSearchButton = new QPushButton(ClearSearch);
        ClearSearchButton->setObjectName(QString::fromUtf8("ClearSearchButton"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(22);
        sizePolicy7.setHeightForWidth(ClearSearchButton->sizePolicy().hasHeightForWidth());
        ClearSearchButton->setSizePolicy(sizePolicy7);
        ClearSearchButton->setMaximumSize(QSize(24, 22));
        ClearSearchButton->setAutoDefault(false);

        verticalLayout_5->addWidget(ClearSearchButton);


        horizontalLayout->addWidget(ClearSearch);

        SearchFor = new QWidget(TopWidget);
        SearchFor->setObjectName(QString::fromUtf8("SearchFor"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(7);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(SearchFor->sizePolicy().hasHeightForWidth());
        SearchFor->setSizePolicy(sizePolicy8);
        SearchFor->setMaximumSize(QSize(1348, 238));
        verticalLayout_2 = new QVBoxLayout(SearchFor);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, -1, -1);
        SearchForLabel = new QLabel(SearchFor);
        SearchForLabel->setObjectName(QString::fromUtf8("SearchForLabel"));
        sizePolicy3.setHeightForWidth(SearchForLabel->sizePolicy().hasHeightForWidth());
        SearchForLabel->setSizePolicy(sizePolicy3);
        SearchForLabel->setFont(font);

        verticalLayout_2->addWidget(SearchForLabel);

        SearchForDropdown = new QComboBox(SearchFor);
        SearchForDropdown->addItem(QString());
        SearchForDropdown->addItem(QString());
        SearchForDropdown->addItem(QString());
        SearchForDropdown->addItem(QString());
        SearchForDropdown->setObjectName(QString::fromUtf8("SearchForDropdown"));
        sizePolicy4.setHeightForWidth(SearchForDropdown->sizePolicy().hasHeightForWidth());
        SearchForDropdown->setSizePolicy(sizePolicy4);
        SearchForDropdown->setEditable(false);
        SearchForDropdown->setIconSize(QSize(16, 16));

        verticalLayout_2->addWidget(SearchForDropdown);


        horizontalLayout->addWidget(SearchFor);

        Spacer_3 = new QWidget(TopWidget);
        Spacer_3->setObjectName(QString::fromUtf8("Spacer_3"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(40);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(Spacer_3->sizePolicy().hasHeightForWidth());
        Spacer_3->setSizePolicy(sizePolicy9);

        horizontalLayout->addWidget(Spacer_3);

        widget = new QWidget(TopWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy10.setHorizontalStretch(5);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy10);
        verticalLayout_6 = new QVBoxLayout(widget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, -1, 0, -1);
        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy4.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy4);
        pushButton->setBaseSize(QSize(0, 0));

        verticalLayout_6->addWidget(pushButton);


        horizontalLayout->addWidget(widget);


        verticalLayout_4->addWidget(TopWidget);

        ExtraDetailsWidget = new QWidget(centralwidget);
        ExtraDetailsWidget->setObjectName(QString::fromUtf8("ExtraDetailsWidget"));
        sizePolicy1.setHeightForWidth(ExtraDetailsWidget->sizePolicy().hasHeightForWidth());
        ExtraDetailsWidget->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(ExtraDetailsWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 0);
        ExtraDetails1 = new QLabel(ExtraDetailsWidget);
        ExtraDetails1->setObjectName(QString::fromUtf8("ExtraDetails1"));

        horizontalLayout_3->addWidget(ExtraDetails1);

        ExtraDetails2 = new QLabel(ExtraDetailsWidget);
        ExtraDetails2->setObjectName(QString::fromUtf8("ExtraDetails2"));
        ExtraDetails2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(ExtraDetails2);


        verticalLayout_4->addWidget(ExtraDetailsWidget);

        TableWidget = new QWidget(centralwidget);
        TableWidget->setObjectName(QString::fromUtf8("TableWidget"));
        QSizePolicy sizePolicy11(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(20);
        sizePolicy11.setHeightForWidth(TableWidget->sizePolicy().hasHeightForWidth());
        TableWidget->setSizePolicy(sizePolicy11);
        verticalLayout_3 = new QVBoxLayout(TableWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(TableWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        tableLabel = new QLabel(widget_2);
        tableLabel->setObjectName(QString::fromUtf8("tableLabel"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Yu Gothic UI Semibold")});
        font1.setPointSize(11);
        tableLabel->setFont(font1);

        horizontalLayout_2->addWidget(tableLabel);

        tableLabel2 = new QLabel(widget_2);
        tableLabel2->setObjectName(QString::fromUtf8("tableLabel2"));
        tableLabel2->setFont(font1);
        tableLabel2->setLayoutDirection(Qt::LeftToRight);
        tableLabel2->setScaledContents(false);
        tableLabel2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(tableLabel2);


        verticalLayout_3->addWidget(widget_2);

        table = new QTableView(TableWidget);
        table->setObjectName(QString::fromUtf8("table"));
        table->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Source Code Pro Semibold")});
        table->setFont(font2);
        table->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        table->setDefaultDropAction(Qt::IgnoreAction);
        table->setAlternatingRowColors(false);
        table->setSelectionMode(QAbstractItemView::ContiguousSelection);
        table->setSortingEnabled(true);

        verticalLayout_3->addWidget(table);


        verticalLayout_4->addWidget(TableWidget);

        FooterWidget = new QWidget(centralwidget);
        FooterWidget->setObjectName(QString::fromUtf8("FooterWidget"));
        sizePolicy1.setHeightForWidth(FooterWidget->sizePolicy().hasHeightForWidth());
        FooterWidget->setSizePolicy(sizePolicy1);
        horizontalLayout_4 = new QHBoxLayout(FooterWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        Notes = new QLabel(FooterWidget);
        Notes->setObjectName(QString::fromUtf8("Notes"));
        sizePolicy10.setHeightForWidth(Notes->sizePolicy().hasHeightForWidth());
        Notes->setSizePolicy(sizePolicy10);

        horizontalLayout_4->addWidget(Notes);

        Totals = new QLabel(FooterWidget);
        Totals->setObjectName(QString::fromUtf8("Totals"));
        QSizePolicy sizePolicy12(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy12.setHorizontalStretch(3);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(Totals->sizePolicy().hasHeightForWidth());
        Totals->setSizePolicy(sizePolicy12);
        Totals->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        horizontalLayout_4->addWidget(Totals);


        verticalLayout_4->addWidget(FooterWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 655, 23));
        menubar->setMinimumSize(QSize(0, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Yu Gothic UI Semibold")});
        font3.setPointSize(10);
        font3.setBold(true);
        menubar->setFont(font3);
        menubar->setDefaultUp(false);
        menubar->setNativeMenuBar(false);
        menuSimple_Inventory_Manager = new QMenu(menubar);
        menuSimple_Inventory_Manager->setObjectName(QString::fromUtf8("menuSimple_Inventory_Manager"));
        menuTables = new QMenu(menubar);
        menuTables->setObjectName(QString::fromUtf8("menuTables"));
        menuActions = new QMenu(menubar);
        menuActions->setObjectName(QString::fromUtf8("menuActions"));
        menuDebug = new QMenu(menubar);
        menuDebug->setObjectName(QString::fromUtf8("menuDebug"));
        MainWindow->setMenuBar(menubar);
#if QT_CONFIG(shortcut)
        SearchForLabel->setBuddy(SearchForDropdown);
#endif // QT_CONFIG(shortcut)

        menubar->addAction(menuSimple_Inventory_Manager->menuAction());
        menubar->addAction(menuTables->menuAction());
        menubar->addAction(menuActions->menuAction());
        menubar->addAction(menuDebug->menuAction());
        menuSimple_Inventory_Manager->addAction(actionCreate_New_User);
        menuSimple_Inventory_Manager->addAction(actionEdit_Current_Userdata);
        menuSimple_Inventory_Manager->addAction(actionChange_Current_User);
        menuSimple_Inventory_Manager->addSeparator();
        menuSimple_Inventory_Manager->addAction(actionEdit_Company_Information);
        menuSimple_Inventory_Manager->addAction(actionClean_Database);
        menuSimple_Inventory_Manager->addAction(actionBackup_Database);
        menuSimple_Inventory_Manager->addAction(actionGenerate_Report_For_Current_Table);
        menuSimple_Inventory_Manager->addAction(actionPrint_Current_Table);
        menuTables->addAction(actionItem_History);
        menuTables->addSeparator();
        menuTables->addAction(actionItems_Table_Default);
        menuTables->addAction(actionProjects);
        menuTables->addAction(actionSuppliers);
        menuTables->addSeparator();
        menuTables->addAction(actionPurchase_Requisitions);
        menuTables->addAction(actionQuotation_Requests);
        menuTables->addAction(actionPurchase_Orders);
        menuTables->addAction(actionReceived);
        menuTables->addAction(actionRequested_Items);
        menuActions->addAction(actionCreate_Purchase_Requisition);
        menuActions->addAction(actionCreate_Quotation_Request);
        menuActions->addAction(actionCreate_Purchase_Order);
        menuActions->addAction(actionReceive_Items);
        menuActions->addAction(actionDistribute_Inventory);
        menuDebug->addAction(actionPing_Databse);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Simple Inventory Manager", nullptr));
        actionImport_From_Existing_Database->setText(QCoreApplication::translate("MainWindow", "Import From Existing Database", nullptr));
        actionItems_Table_Default->setText(QCoreApplication::translate("MainWindow", "Items", nullptr));
#if QT_CONFIG(shortcut)
        actionItems_Table_Default->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBackup_Database->setText(QCoreApplication::translate("MainWindow", "Backup Database", nullptr));
        actionPurchase_Orders->setText(QCoreApplication::translate("MainWindow", "Purchase Orders", nullptr));
#if QT_CONFIG(shortcut)
        actionPurchase_Orders->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGenerate_Report_For_Current_Table->setText(QCoreApplication::translate("MainWindow", "Generate Report For Current Table", nullptr));
        actionProjects->setText(QCoreApplication::translate("MainWindow", "Projects", nullptr));
#if QT_CONFIG(shortcut)
        actionProjects->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReceived->setText(QCoreApplication::translate("MainWindow", "Receiving Reports", nullptr));
#if QT_CONFIG(shortcut)
        actionReceived->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRequested_Items->setText(QCoreApplication::translate("MainWindow", "Material Requisitions", nullptr));
#if QT_CONFIG(shortcut)
        actionRequested_Items->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint_Current_Table->setText(QCoreApplication::translate("MainWindow", "Print Current Table", nullptr));
        actionItem_History->setText(QCoreApplication::translate("MainWindow", "Ledger (Inventory History)", nullptr));
#if QT_CONFIG(shortcut)
        actionItem_History->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDistribute_Inventory->setText(QCoreApplication::translate("MainWindow", "Create Material Requisition", nullptr));
#if QT_CONFIG(shortcut)
        actionDistribute_Inventory->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReceive_Items->setText(QCoreApplication::translate("MainWindow", "Create Receiving Report", nullptr));
#if QT_CONFIG(shortcut)
        actionReceive_Items->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl++", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPing_Databse->setText(QCoreApplication::translate("MainWindow", "Ping Database", nullptr));
        actionChange_Current_User->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        actionCreate_New_User->setText(QCoreApplication::translate("MainWindow", "Create New User", nullptr));
        actionSuppliers->setText(QCoreApplication::translate("MainWindow", "Suppliers", nullptr));
#if QT_CONFIG(shortcut)
        actionSuppliers->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPurchase_Requisitions->setText(QCoreApplication::translate("MainWindow", "Purchase Requisitions", nullptr));
#if QT_CONFIG(shortcut)
        actionPurchase_Requisitions->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEdit_Current_Userdata->setText(QCoreApplication::translate("MainWindow", "Edit User Data", nullptr));
        actionCreate_Purchase_Requisition->setText(QCoreApplication::translate("MainWindow", "Create Purchase Requisition", nullptr));
        actionEdit_Company_Information->setText(QCoreApplication::translate("MainWindow", "Edit Company Information", nullptr));
        actionCreate_Quotation_Request->setText(QCoreApplication::translate("MainWindow", "Create Request For Quotation", nullptr));
        actionCreate_Purchase_Order->setText(QCoreApplication::translate("MainWindow", "Create Purchase Order", nullptr));
        actionQuotation_Requests->setText(QCoreApplication::translate("MainWindow", "Quotation Requests", nullptr));
        actionClean_Database->setText(QCoreApplication::translate("MainWindow", "Clean Database", nullptr));
        SearchBoxLabel->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        SearchBox->setText(QString());
        ClearSearchButton->setText(QCoreApplication::translate("MainWindow", "Del", nullptr));
        SearchForLabel->setText(QCoreApplication::translate("MainWindow", "Search For", nullptr));
        SearchForDropdown->setItemText(0, QCoreApplication::translate("MainWindow", "Item ID", nullptr));
        SearchForDropdown->setItemText(1, QCoreApplication::translate("MainWindow", "Description", nullptr));
        SearchForDropdown->setItemText(2, QCoreApplication::translate("MainWindow", "Category", nullptr));
        SearchForDropdown->setItemText(3, QCoreApplication::translate("MainWindow", "Project (Used For)", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "Add new", nullptr));
        ExtraDetails1->setText(QCoreApplication::translate("MainWindow", "ExtraDetails1", nullptr));
        ExtraDetails2->setText(QCoreApplication::translate("MainWindow", "ExtraDetails2d", nullptr));
        tableLabel->setText(QCoreApplication::translate("MainWindow", "Table Name", nullptr));
        tableLabel2->setText(QCoreApplication::translate("MainWindow", "Creator", nullptr));
        Notes->setText(QCoreApplication::translate("MainWindow", "Notes", nullptr));
        Totals->setText(QCoreApplication::translate("MainWindow", "Totals", nullptr));
        menuSimple_Inventory_Manager->setTitle(QCoreApplication::translate("MainWindow", "Simple Inventory Manager", nullptr));
        menuTables->setTitle(QCoreApplication::translate("MainWindow", "Tables", nullptr));
        menuActions->setTitle(QCoreApplication::translate("MainWindow", "Actions", nullptr));
        menuDebug->setTitle(QCoreApplication::translate("MainWindow", "Debug", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
