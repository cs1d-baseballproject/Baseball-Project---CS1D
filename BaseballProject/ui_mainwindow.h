/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QToolButton *teamsButton;
    QToolButton *stadiumsButton;
    QToolButton *tripButton;
    QToolButton *loginButton;
    QToolButton *cartButton;
    QStackedWidget *stackedWidget;
    QWidget *homePage;
    QLabel *stadiumIcon;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *adminPage;
    QPushButton *initDB;
    QPushButton *signOut;
    QListWidget *adminStadiumList;
    QStackedWidget *adminStackedWidget;
    QWidget *adminBlank;
    QWidget *modifySouvenirs;
    QListWidget *adminPriceList;
    QListWidget *adminSVList;
    QLabel *label_14;
    QPushButton *saveSouvenirModification;
    QPushButton *addNewSouvenir;
    QLabel *label_15;
    QWidget *modifyStadiums;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_16;
    QLineEdit *lineEdit;
    QLabel *label_17;
    QLineEdit *lineEdit_2;
    QLabel *label_18;
    QLineEdit *lineEdit_3;
    QLabel *label_19;
    QLineEdit *lineEdit_4;
    QLabel *label_20;
    QLineEdit *lineEdit_5;
    QLabel *label_21;
    QLineEdit *lineEdit_6;
    QLabel *label_22;
    QLineEdit *lineEdit_7;
    QLabel *label_23;
    QLineEdit *lineEdit_8;
    QPushButton *saveStadiumModification;
    QPushButton *editStadiumsButton;
    QPushButton *editSouvenirsButton;
    QLabel *label_12;
    QLabel *adminStadiumModified;
    QLabel *label_13;
    QWidget *loginPage;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *password;
    QLineEdit *user;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *signIn;
    QPushButton *cancelLogin;
    QLabel *invalidInput;
    QWidget *teamsPage;
    QListWidget *teamTList;
    QListWidget *stadiumTList;
    QListWidget *leagueTList;
    QPushButton *sortAllStadium;
    QPushButton *sortAllTeam;
    QLabel *label_6;
    QWidget *stadiumsPage;
    QListWidget *stadiumList;
    QListWidget *stadiumTeamList;
    QListWidget *stadiumTypeList;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *stadiumListType;
    QLabel *stadiumAdditionalInfoLabel;
    QLabel *stadiumAdditionalInfo;
    QWidget *cartPage;
    QLabel *label_26;
    QLabel *label_28;
    QLineEdit *grandTotal;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_27;
    QLabel *label_32;
    QListWidget *listWidget_receipt_stadiums;
    QListWidget *listWidget_stadiumTotals;
    QListWidget *listWidget_receipt_souvenirs;
    QListWidget *listWidget_receipt_price;
    QListWidget *listWidget_receipt_quantity;
    QListWidget *listWidget_totals;
    QWidget *tripPage;
    QWidget *infoPage;
    QLabel *infoTeam;
    QPushButton *returnToTeamList;
    QListWidget *infoSVList;
    QListWidget *infoSVPriceList;
    QLabel *label_10;
    QLabel *label_11;
    QListWidget *labels;
    QLabel *infoStadium;
    QLabel *infoLocation;
    QLabel *infoCapacity;
    QLabel *infoDate;
    QLabel *infoSurface;
    QLabel *infoTypology;
    QLabel *infoDist2C;
    QLabel *infoRoof;
    QLabel *infoLeague;
    QToolButton *homeButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        MainWindow->setBaseSize(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(35, 33, 39, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(25, 23, 28, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(8, 8, 8, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        QBrush brush5(QColor(137, 131, 149, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush5);
        QBrush brush6(QColor(177, 157, 216, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush6);
        QBrush brush7(QColor(155, 137, 188, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush7);
        QBrush brush8(QColor(219, 163, 148, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        QBrush brush10(QColor(25, 23, 28, 128));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush7);
        QBrush brush11(QColor(183, 71, 42, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        MainWindow->setPalette(palette);
        MainWindow->setWindowOpacity(1.000000000000000);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 800, 40));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("QLabel {background-color: rgb(75, 54, 124)}"));
        teamsButton = new QToolButton(centralWidget);
        teamsButton->setObjectName(QString::fromUtf8("teamsButton"));
        teamsButton->setGeometry(QRect(60, 0, 70, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft JhengHei"));
        font.setPointSize(10);
        teamsButton->setFont(font);
        teamsButton->setStyleSheet(QString::fromUtf8("QToolButton {background-color: rgb(75, 54, 124); color: rgb(167, 157, 210); border: none;}\n"
"\n"
"QToolButton::menu-indicator {image: none}\n"
"\n"
"QToolButton:hover {background-color: rgb(106, 76, 175); color: rgb(255, 255, 255);}\n"
"\n"
"QToolButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(88, 63, 145), stop: 1 rgb(106, 76, 175));  color: rgb(137, 131, 149);}\n"
"\n"
""));
        stadiumsButton = new QToolButton(centralWidget);
        stadiumsButton->setObjectName(QString::fromUtf8("stadiumsButton"));
        stadiumsButton->setGeometry(QRect(130, 0, 75, 40));
        stadiumsButton->setFont(font);
        stadiumsButton->setStyleSheet(QString::fromUtf8("QToolButton {background-color: rgb(75, 54, 124); color: rgb(167, 157, 210); border: none;}\n"
"\n"
"QToolButton::menu-indicator {image: none}\n"
"\n"
"QToolButton:hover {background-color: rgb(106, 76, 175); color: rgb(255, 255, 255);}\n"
"\n"
"QToolButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(88, 63, 145), stop: 1 rgb(106, 76, 175));  color: rgb(137, 131, 149);}\n"
"\n"
""));
        tripButton = new QToolButton(centralWidget);
        tripButton->setObjectName(QString::fromUtf8("tripButton"));
        tripButton->setGeometry(QRect(205, 0, 50, 40));
        tripButton->setFont(font);
        tripButton->setStyleSheet(QString::fromUtf8("QToolButton {background-color: rgb(75, 54, 124); color: rgb(167, 157, 210); border: none;}\n"
"\n"
"QToolButton::menu-indicator {image: none}\n"
"\n"
"QToolButton:hover {background-color: rgb(106, 76, 175); color: rgb(255, 255, 255);}\n"
"\n"
"QToolButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(88, 63, 145), stop: 1 rgb(106, 76, 175));  color: rgb(137, 131, 149);}\n"
"\n"
""));
        loginButton = new QToolButton(centralWidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(730, 0, 50, 40));
        loginButton->setFont(font);
        loginButton->setStyleSheet(QString::fromUtf8("QToolButton {background-color: rgb(75, 54, 124); color: rgb(167, 157, 210); border: none;}\n"
"\n"
"QToolButton:hover {background-color: rgb(106, 76, 175); color: rgb(255, 255, 255);}\n"
"\n"
"QToolButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(88, 63, 145), stop: 1 rgb(106, 76, 175));  color: rgb(137, 131, 149);}\n"
"\n"
""));
        cartButton = new QToolButton(centralWidget);
        cartButton->setObjectName(QString::fromUtf8("cartButton"));
        cartButton->setGeometry(QRect(680, 0, 50, 40));
        cartButton->setFont(font);
        cartButton->setStyleSheet(QString::fromUtf8("QToolButton {background-color: rgb(75, 54, 124); color: rgb(167, 157, 210); border: none;}\n"
"\n"
"QToolButton:hover {background-color: rgb(106, 76, 175); color: rgb(255, 255, 255);}\n"
"\n"
"QToolButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(88, 63, 145), stop: 1 rgb(106, 76, 175));  color: rgb(137, 131, 149);}\n"
"\n"
""));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 40, 800, 560));
        homePage = new QWidget();
        homePage->setObjectName(QString::fromUtf8("homePage"));
        stadiumIcon = new QLabel(homePage);
        stadiumIcon->setObjectName(QString::fromUtf8("stadiumIcon"));
        stadiumIcon->setGeometry(QRect(3, 10, 793, 349));
        label_7 = new QLabel(homePage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(150, 10, 455, 171));
        QFont font1;
        font1.setPointSize(120);
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(homePage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(270, 130, 281, 171));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(100);
        font2.setBold(true);
        font2.setWeight(75);
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(homePage);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(300, 290, 301, 171));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font3.setPointSize(36);
        font3.setBold(true);
        font3.setWeight(75);
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        stackedWidget->addWidget(homePage);
        adminPage = new QWidget();
        adminPage->setObjectName(QString::fromUtf8("adminPage"));
        initDB = new QPushButton(adminPage);
        initDB->setObjectName(QString::fromUtf8("initDB"));
        initDB->setGeometry(QRect(610, 530, 81, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Nirmala UI"));
        font4.setPointSize(9);
        font4.setBold(false);
        font4.setWeight(50);
        initDB->setFont(font4);
        initDB->setAutoFillBackground(false);
        initDB->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        signOut = new QPushButton(adminPage);
        signOut->setObjectName(QString::fromUtf8("signOut"));
        signOut->setGeometry(QRect(710, 530, 81, 21));
        signOut->setFont(font4);
        signOut->setAutoFillBackground(false);
        signOut->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        adminStadiumList = new QListWidget(adminPage);
        adminStadiumList->setObjectName(QString::fromUtf8("adminStadiumList"));
        adminStadiumList->setGeometry(QRect(50, 20, 275, 491));
        adminStadiumList->setStyleSheet(QString::fromUtf8("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        adminStadiumList->setFrameShape(QFrame::NoFrame);
        adminStadiumList->setFrameShadow(QFrame::Plain);
        adminStadiumList->setAlternatingRowColors(true);
        adminStackedWidget = new QStackedWidget(adminPage);
        adminStackedWidget->setObjectName(QString::fromUtf8("adminStackedWidget"));
        adminStackedWidget->setGeometry(QRect(400, 39, 381, 481));
        adminBlank = new QWidget();
        adminBlank->setObjectName(QString::fromUtf8("adminBlank"));
        adminStackedWidget->addWidget(adminBlank);
        modifySouvenirs = new QWidget();
        modifySouvenirs->setObjectName(QString::fromUtf8("modifySouvenirs"));
        adminPriceList = new QListWidget(modifySouvenirs);
        adminPriceList->setObjectName(QString::fromUtf8("adminPriceList"));
        adminPriceList->setGeometry(QRect(201, 70, 101, 351));
        adminPriceList->setStyleSheet(QString::fromUtf8("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        adminPriceList->setFrameShape(QFrame::NoFrame);
        adminPriceList->setFrameShadow(QFrame::Plain);
        adminPriceList->setAlternatingRowColors(true);
        adminSVList = new QListWidget(modifySouvenirs);
        adminSVList->setObjectName(QString::fromUtf8("adminSVList"));
        adminSVList->setGeometry(QRect(30, 70, 171, 351));
        adminSVList->setStyleSheet(QString::fromUtf8("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        adminSVList->setFrameShape(QFrame::NoFrame);
        adminSVList->setFrameShadow(QFrame::Plain);
        adminSVList->setAlternatingRowColors(true);
        label_14 = new QLabel(modifySouvenirs);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(70, 20, 221, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Nirmala UI"));
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setWeight(75);
        label_14->setFont(font5);
        label_14->setStyleSheet(QString::fromUtf8("QLabel {color: rgb(137, 131, 149)}"));
        label_14->setAlignment(Qt::AlignCenter);
        saveSouvenirModification = new QPushButton(modifySouvenirs);
        saveSouvenirModification->setObjectName(QString::fromUtf8("saveSouvenirModification"));
        saveSouvenirModification->setGeometry(QRect(230, 440, 81, 21));
        saveSouvenirModification->setFont(font4);
        saveSouvenirModification->setAutoFillBackground(false);
        saveSouvenirModification->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        addNewSouvenir = new QPushButton(modifySouvenirs);
        addNewSouvenir->setObjectName(QString::fromUtf8("addNewSouvenir"));
        addNewSouvenir->setGeometry(QRect(30, 49, 31, 21));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Nirmala UI"));
        font6.setPointSize(11);
        font6.setBold(true);
        font6.setWeight(75);
        addNewSouvenir->setFont(font6);
        addNewSouvenir->setAutoFillBackground(false);
        addNewSouvenir->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        label_15 = new QLabel(modifySouvenirs);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(65, 53, 91, 16));
        adminStackedWidget->addWidget(modifySouvenirs);
        modifyStadiums = new QWidget();
        modifyStadiums->setObjectName(QString::fromUtf8("modifyStadiums"));
        formLayoutWidget_2 = new QWidget(modifyStadiums);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(50, 20, 291, 244));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(formLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_16);

        lineEdit = new QLineEdit(formLayoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{ color: rgb(0, 0, 0)}"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_17 = new QLabel(formLayoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_17);

        lineEdit_2 = new QLineEdit(formLayoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{ color: rgb(0, 0, 0)}"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_18 = new QLabel(formLayoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_18);

        lineEdit_3 = new QLineEdit(formLayoutWidget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{ color: rgb(0, 0, 0)}"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_19 = new QLabel(formLayoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_19);

        lineEdit_4 = new QLineEdit(formLayoutWidget_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit{ color: rgb(0, 0, 0)}"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        label_20 = new QLabel(formLayoutWidget_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_20);

        lineEdit_5 = new QLineEdit(formLayoutWidget_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit{ color: rgb(0, 0, 0)}"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, lineEdit_5);

        label_21 = new QLabel(formLayoutWidget_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_21);

        lineEdit_6 = new QLineEdit(formLayoutWidget_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setStyleSheet(QString::fromUtf8("QLineEdit{ color: rgb(0, 0, 0)}"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, lineEdit_6);

        label_22 = new QLabel(formLayoutWidget_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_22);

        lineEdit_7 = new QLineEdit(formLayoutWidget_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setStyleSheet(QString::fromUtf8("QLineEdit{ color: rgb(0, 0, 0)}"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, lineEdit_7);

        label_23 = new QLabel(formLayoutWidget_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_23);

        lineEdit_8 = new QLineEdit(formLayoutWidget_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setStyleSheet(QString::fromUtf8("QLineEdit{ color: rgb(0, 0, 0)}"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, lineEdit_8);

        saveStadiumModification = new QPushButton(modifyStadiums);
        saveStadiumModification->setObjectName(QString::fromUtf8("saveStadiumModification"));
        saveStadiumModification->setGeometry(QRect(230, 440, 81, 21));
        saveStadiumModification->setFont(font4);
        saveStadiumModification->setAutoFillBackground(false);
        saveStadiumModification->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        adminStackedWidget->addWidget(modifyStadiums);
        editStadiumsButton = new QPushButton(adminPage);
        editStadiumsButton->setObjectName(QString::fromUtf8("editStadiumsButton"));
        editStadiumsButton->setGeometry(QRect(250, 520, 75, 21));
        editStadiumsButton->setFont(font4);
        editStadiumsButton->setAutoFillBackground(false);
        editStadiumsButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        editSouvenirsButton = new QPushButton(adminPage);
        editSouvenirsButton->setObjectName(QString::fromUtf8("editSouvenirsButton"));
        editSouvenirsButton->setGeometry(QRect(176, 520, 75, 21));
        editSouvenirsButton->setFont(font4);
        editSouvenirsButton->setAutoFillBackground(false);
        editSouvenirsButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        label_12 = new QLabel(adminPage);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(150, 520, 51, 21));
        adminStadiumModified = new QLabel(adminPage);
        adminStadiumModified->setObjectName(QString::fromUtf8("adminStadiumModified"));
        adminStadiumModified->setGeometry(QRect(520, 10, 251, 21));
        label_13 = new QLabel(adminPage);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(430, 10, 81, 21));
        stackedWidget->addWidget(adminPage);
        loginPage = new QWidget();
        loginPage->setObjectName(QString::fromUtf8("loginPage"));
        label_2 = new QLabel(loginPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(390, 50, 311, 101));
        QFont font7;
        font7.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font7.setPointSize(72);
        font7.setBold(true);
        font7.setWeight(75);
        label_2->setFont(font7);
        label_3 = new QLabel(loginPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(510, 120, 191, 111));
        QFont font8;
        font8.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font8.setPointSize(60);
        font8.setBold(false);
        font8.setWeight(50);
        label_3->setFont(font8);
        formLayoutWidget = new QWidget(loginPage);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(500, 280, 191, 64));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(30);
        formLayout->setContentsMargins(0, 0, 0, 0);
        password = new QLineEdit(formLayoutWidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setStyleSheet(QString::fromUtf8("QLineEdit {color: rgb(25, 23, 28)}"));
        password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, password);

        user = new QLineEdit(formLayoutWidget);
        user->setObjectName(QString::fromUtf8("user"));
        user->setStyleSheet(QString::fromUtf8("QLineEdit {color: rgb(25, 23, 28)}"));

        formLayout->setWidget(1, QFormLayout::FieldRole, user);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font9;
        font9.setPointSize(10);
        label_4->setFont(font9);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font9);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        signIn = new QPushButton(loginPage);
        signIn->setObjectName(QString::fromUtf8("signIn"));
        signIn->setGeometry(QRect(610, 360, 81, 21));
        signIn->setFont(font4);
        signIn->setAutoFillBackground(false);
        signIn->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        cancelLogin = new QPushButton(loginPage);
        cancelLogin->setObjectName(QString::fromUtf8("cancelLogin"));
        cancelLogin->setGeometry(QRect(500, 360, 81, 21));
        cancelLogin->setFont(font4);
        cancelLogin->setAutoFillBackground(false);
        cancelLogin->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        invalidInput = new QLabel(loginPage);
        invalidInput->setObjectName(QString::fromUtf8("invalidInput"));
        invalidInput->setGeometry(QRect(370, 390, 331, 21));
        QPalette palette1;
        QBrush brush12(QColor(180, 37, 44, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        invalidInput->setPalette(palette1);
        stackedWidget->addWidget(loginPage);
        teamsPage = new QWidget();
        teamsPage->setObjectName(QString::fromUtf8("teamsPage"));
        teamTList = new QListWidget(teamsPage);
        teamTList->setObjectName(QString::fromUtf8("teamTList"));
        teamTList->setGeometry(QRect(50, 50, 150, 481));
        teamTList->setStyleSheet(QString::fromUtf8("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        teamTList->setFrameShape(QFrame::NoFrame);
        teamTList->setFrameShadow(QFrame::Plain);
        teamTList->setAlternatingRowColors(true);
        stadiumTList = new QListWidget(teamsPage);
        stadiumTList->setObjectName(QString::fromUtf8("stadiumTList"));
        stadiumTList->setGeometry(QRect(300, 50, 275, 481));
        stadiumTList->setStyleSheet(QString::fromUtf8("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        stadiumTList->setFrameShape(QFrame::NoFrame);
        stadiumTList->setFrameShadow(QFrame::Plain);
        stadiumTList->setAlternatingRowColors(true);
        leagueTList = new QListWidget(teamsPage);
        leagueTList->setObjectName(QString::fromUtf8("leagueTList"));
        leagueTList->setGeometry(QRect(200, 50, 100, 481));
        leagueTList->setStyleSheet(QString::fromUtf8("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        leagueTList->setFrameShape(QFrame::NoFrame);
        leagueTList->setFrameShadow(QFrame::Plain);
        leagueTList->setAlternatingRowColors(true);
        sortAllStadium = new QPushButton(teamsPage);
        sortAllStadium->setObjectName(QString::fromUtf8("sortAllStadium"));
        sortAllStadium->setGeometry(QRect(300, 19, 275, 31));
        sortAllStadium->setFont(font5);
        sortAllStadium->setAutoFillBackground(false);
        sortAllStadium->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        sortAllTeam = new QPushButton(teamsPage);
        sortAllTeam->setObjectName(QString::fromUtf8("sortAllTeam"));
        sortAllTeam->setGeometry(QRect(50, 19, 150, 31));
        sortAllTeam->setFont(font5);
        sortAllTeam->setAutoFillBackground(false);
        sortAllTeam->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        label_6 = new QLabel(teamsPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(200, 19, 100, 31));
        label_6->setFont(font5);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {color: rgb(137, 131, 149)}"));
        label_6->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(teamsPage);
        stadiumsPage = new QWidget();
        stadiumsPage->setObjectName(QString::fromUtf8("stadiumsPage"));
        stadiumList = new QListWidget(stadiumsPage);
        stadiumList->setObjectName(QString::fromUtf8("stadiumList"));
        stadiumList->setGeometry(QRect(40, 40, 271, 491));
        stadiumList->setStyleSheet(QString::fromUtf8("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        stadiumList->setFrameShape(QFrame::NoFrame);
        stadiumList->setFrameShadow(QFrame::Plain);
        stadiumList->setAlternatingRowColors(true);
        stadiumTeamList = new QListWidget(stadiumsPage);
        stadiumTeamList->setObjectName(QString::fromUtf8("stadiumTeamList"));
        stadiumTeamList->setGeometry(QRect(310, 40, 171, 491));
        stadiumTeamList->setStyleSheet(QString::fromUtf8("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        stadiumTeamList->setFrameShape(QFrame::NoFrame);
        stadiumTeamList->setFrameShadow(QFrame::Plain);
        stadiumTeamList->setAlternatingRowColors(true);
        stadiumTypeList = new QListWidget(stadiumsPage);
        stadiumTypeList->setObjectName(QString::fromUtf8("stadiumTypeList"));
        stadiumTypeList->setGeometry(QRect(481, 40, 141, 491));
        stadiumTypeList->setStyleSheet(QString::fromUtf8("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        stadiumTypeList->setFrameShape(QFrame::NoFrame);
        stadiumTypeList->setFrameShadow(QFrame::Plain);
        stadiumTypeList->setAlternatingRowColors(true);
        label_24 = new QLabel(stadiumsPage);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(310, 10, 171, 31));
        label_24->setFont(font5);
        label_24->setStyleSheet(QString::fromUtf8("QLabel {color: rgb(137, 131, 149)}"));
        label_24->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(stadiumsPage);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(40, 9, 271, 31));
        label_25->setFont(font5);
        label_25->setStyleSheet(QString::fromUtf8("QLabel {color: rgb(137, 131, 149)}"));
        label_25->setAlignment(Qt::AlignCenter);
        stadiumListType = new QLabel(stadiumsPage);
        stadiumListType->setObjectName(QString::fromUtf8("stadiumListType"));
        stadiumListType->setGeometry(QRect(480, 10, 141, 31));
        stadiumListType->setFont(font5);
        stadiumListType->setStyleSheet(QString::fromUtf8("QLabel {color: rgb(137, 131, 149)}"));
        stadiumListType->setAlignment(Qt::AlignCenter);
        stadiumAdditionalInfoLabel = new QLabel(stadiumsPage);
        stadiumAdditionalInfoLabel->setObjectName(QString::fromUtf8("stadiumAdditionalInfoLabel"));
        stadiumAdditionalInfoLabel->setGeometry(QRect(640, 450, 111, 31));
        QFont font10;
        font10.setPointSize(10);
        font10.setBold(true);
        font10.setWeight(75);
        stadiumAdditionalInfoLabel->setFont(font10);
        stadiumAdditionalInfoLabel->setWordWrap(true);
        stadiumAdditionalInfo = new QLabel(stadiumsPage);
        stadiumAdditionalInfo->setObjectName(QString::fromUtf8("stadiumAdditionalInfo"));
        stadiumAdditionalInfo->setGeometry(QRect(640, 480, 111, 31));
        QFont font11;
        font11.setPointSize(14);
        font11.setBold(true);
        font11.setWeight(75);
        stadiumAdditionalInfo->setFont(font11);
        stadiumAdditionalInfo->setAlignment(Qt::AlignCenter);
        stadiumAdditionalInfo->setWordWrap(false);
        stackedWidget->addWidget(stadiumsPage);
        cartPage = new QWidget();
        cartPage->setObjectName(QString::fromUtf8("cartPage"));
        label_26 = new QLabel(cartPage);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(230, 30, 91, 20));
        QFont font12;
        font12.setFamily(QString::fromUtf8("Nirmala UI"));
        font12.setPointSize(9);
        font12.setBold(true);
        font12.setWeight(75);
        label_26->setFont(font12);
        label_28 = new QLabel(cartPage);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(540, 500, 81, 21));
        QFont font13;
        font13.setFamily(QString::fromUtf8("Nirmala UI"));
        font13.setPointSize(10);
        label_28->setFont(font13);
        grandTotal = new QLineEdit(cartPage);
        grandTotal->setObjectName(QString::fromUtf8("grandTotal"));
        grandTotal->setGeometry(QRect(620, 500, 151, 21));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        grandTotal->setPalette(palette2);
        grandTotal->setFrame(false);
        label_29 = new QLabel(cartPage);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(410, 30, 121, 20));
        label_29->setFont(font12);
        label_30 = new QLabel(cartPage);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(690, 30, 81, 20));
        label_30->setFont(font12);
        label_31 = new QLabel(cartPage);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(610, 30, 41, 20));
        label_31->setFont(font12);
        label_27 = new QLabel(cartPage);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(20, 30, 91, 20));
        label_27->setFont(font12);
        label_32 = new QLabel(cartPage);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(140, 30, 51, 20));
        label_32->setFont(font12);
        listWidget_receipt_stadiums = new QListWidget(cartPage);
        listWidget_receipt_stadiums->setObjectName(QString::fromUtf8("listWidget_receipt_stadiums"));
        listWidget_receipt_stadiums->setGeometry(QRect(230, 50, 181, 411));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush4);
        QBrush brush13(QColor(81, 81, 81, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        listWidget_receipt_stadiums->setPalette(palette3);
        listWidget_receipt_stadiums->setFrameShape(QFrame::NoFrame);
        listWidget_receipt_stadiums->setAlternatingRowColors(true);
        listWidget_stadiumTotals = new QListWidget(cartPage);
        listWidget_stadiumTotals->setObjectName(QString::fromUtf8("listWidget_stadiumTotals"));
        listWidget_stadiumTotals->setGeometry(QRect(20, 50, 121, 411));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        listWidget_stadiumTotals->setPalette(palette4);
        listWidget_stadiumTotals->setFrameShape(QFrame::NoFrame);
        listWidget_stadiumTotals->setAlternatingRowColors(true);
        listWidget_receipt_souvenirs = new QListWidget(cartPage);
        listWidget_receipt_souvenirs->setObjectName(QString::fromUtf8("listWidget_receipt_souvenirs"));
        listWidget_receipt_souvenirs->setGeometry(QRect(410, 50, 201, 411));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        listWidget_receipt_souvenirs->setPalette(palette5);
        listWidget_receipt_souvenirs->setFrameShape(QFrame::NoFrame);
        listWidget_receipt_souvenirs->setAlternatingRowColors(true);
        listWidget_receipt_price = new QListWidget(cartPage);
        listWidget_receipt_price->setObjectName(QString::fromUtf8("listWidget_receipt_price"));
        listWidget_receipt_price->setGeometry(QRect(610, 50, 81, 411));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        listWidget_receipt_price->setPalette(palette6);
        listWidget_receipt_price->setFrameShape(QFrame::NoFrame);
        listWidget_receipt_price->setAlternatingRowColors(true);
        listWidget_receipt_quantity = new QListWidget(cartPage);
        listWidget_receipt_quantity->setObjectName(QString::fromUtf8("listWidget_receipt_quantity"));
        listWidget_receipt_quantity->setGeometry(QRect(690, 50, 91, 411));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        listWidget_receipt_quantity->setPalette(palette7);
        listWidget_receipt_quantity->setFrameShape(QFrame::NoFrame);
        listWidget_receipt_quantity->setAlternatingRowColors(true);
        listWidget_totals = new QListWidget(cartPage);
        listWidget_totals->setObjectName(QString::fromUtf8("listWidget_totals"));
        listWidget_totals->setGeometry(QRect(140, 50, 81, 411));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        listWidget_totals->setPalette(palette8);
        listWidget_totals->setFrameShape(QFrame::NoFrame);
        listWidget_totals->setAlternatingRowColors(true);
        stackedWidget->addWidget(cartPage);
        label_26->raise();
        label_28->raise();
        grandTotal->raise();
        label_29->raise();
        label_30->raise();
        label_31->raise();
        label_27->raise();
        label_32->raise();
        listWidget_stadiumTotals->raise();
        listWidget_receipt_stadiums->raise();
        listWidget_receipt_souvenirs->raise();
        listWidget_receipt_price->raise();
        listWidget_receipt_quantity->raise();
        listWidget_totals->raise();
        tripPage = new QWidget();
        tripPage->setObjectName(QString::fromUtf8("tripPage"));
        stackedWidget->addWidget(tripPage);
        infoPage = new QWidget();
        infoPage->setObjectName(QString::fromUtf8("infoPage"));
        infoTeam = new QLabel(infoPage);
        infoTeam->setObjectName(QString::fromUtf8("infoTeam"));
        infoTeam->setGeometry(QRect(10, 0, 781, 71));
        QFont font14;
        font14.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font14.setPointSize(48);
        font14.setBold(true);
        font14.setWeight(75);
        infoTeam->setFont(font14);
        infoTeam->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        returnToTeamList = new QPushButton(infoPage);
        returnToTeamList->setObjectName(QString::fromUtf8("returnToTeamList"));
        returnToTeamList->setGeometry(QRect(20, 520, 81, 21));
        returnToTeamList->setFont(font4);
        returnToTeamList->setAutoFillBackground(false);
        returnToTeamList->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        infoSVList = new QListWidget(infoPage);
        infoSVList->setObjectName(QString::fromUtf8("infoSVList"));
        infoSVList->setGeometry(QRect(510, 120, 150, 371));
        infoSVList->setStyleSheet(QString::fromUtf8("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        infoSVList->setFrameShape(QFrame::NoFrame);
        infoSVList->setFrameShadow(QFrame::Plain);
        infoSVList->setAlternatingRowColors(true);
        infoSVPriceList = new QListWidget(infoPage);
        infoSVPriceList->setObjectName(QString::fromUtf8("infoSVPriceList"));
        infoSVPriceList->setGeometry(QRect(660, 120, 111, 371));
        infoSVPriceList->setStyleSheet(QString::fromUtf8("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        infoSVPriceList->setFrameShape(QFrame::NoFrame);
        infoSVPriceList->setFrameShadow(QFrame::Plain);
        infoSVPriceList->setAlternatingRowColors(true);
        label_10 = new QLabel(infoPage);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(510, 90, 171, 31));
        label_10->setFont(font5);
        label_10->setStyleSheet(QString::fromUtf8("QLabel {color: rgb(137, 131, 149)}"));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(infoPage);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(64, 90, 191, 31));
        label_11->setFont(font5);
        label_11->setStyleSheet(QString::fromUtf8("QLabel {color: rgb(137, 131, 149)}"));
        label_11->setAlignment(Qt::AlignCenter);
        labels = new QListWidget(infoPage);
        new QListWidgetItem(labels);
        new QListWidgetItem(labels);
        new QListWidgetItem(labels);
        new QListWidgetItem(labels);
        new QListWidgetItem(labels);
        new QListWidgetItem(labels);
        new QListWidgetItem(labels);
        new QListWidgetItem(labels);
        labels->setObjectName(QString::fromUtf8("labels"));
        labels->setGeometry(QRect(60, 120, 121, 381));
        labels->setFont(font5);
        labels->setStyleSheet(QString::fromUtf8("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(137, 131, 149)}"));
        labels->setFrameShape(QFrame::NoFrame);
        labels->setFrameShadow(QFrame::Plain);
        labels->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        labels->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        labels->setAlternatingRowColors(false);
        labels->setSpacing(2);
        labels->setWordWrap(true);
        infoStadium = new QLabel(infoPage);
        infoStadium->setObjectName(QString::fromUtf8("infoStadium"));
        infoStadium->setGeometry(QRect(200, 120, 291, 30));
        infoStadium->setFont(font5);
        infoStadium->setStyleSheet(QString::fromUtf8("QLabel {color: rgb(255, 255, 255)}"));
        infoStadium->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        infoLocation = new QLabel(infoPage);
        infoLocation->setObjectName(QString::fromUtf8("infoLocation"));
        infoLocation->setGeometry(QRect(200, 150, 291, 31));
        infoLocation->setFont(font5);
        infoLocation->setStyleSheet(QString::fromUtf8("QLabel {color: rgb(255, 255, 255)}"));
        infoLocation->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        infoCapacity = new QLabel(infoPage);
        infoCapacity->setObjectName(QString::fromUtf8("infoCapacity"));
        infoCapacity->setGeometry(QRect(200, 210, 291, 31));
        infoCapacity->setFont(font5);
        infoCapacity->setStyleSheet(QString::fromUtf8("QLabel {color: rgb(255, 255, 255)}"));
        infoCapacity->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        infoDate = new QLabel(infoPage);
        infoDate->setObjectName(QString::fromUtf8("infoDate"));
        infoDate->setGeometry(QRect(200, 260, 291, 31));
        infoDate->setFont(font5);
        infoDate->setStyleSheet(QString::fromUtf8("QLabel {color: rgb(255, 255, 255)}"));
        infoDate->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        infoSurface = new QLabel(infoPage);
        infoSurface->setObjectName(QString::fromUtf8("infoSurface"));
        infoSurface->setGeometry(QRect(200, 320, 291, 31));
        infoSurface->setFont(font5);
        infoSurface->setStyleSheet(QString::fromUtf8("QLabel {color: rgb(255, 255, 255)}"));
        infoSurface->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        infoTypology = new QLabel(infoPage);
        infoTypology->setObjectName(QString::fromUtf8("infoTypology"));
        infoTypology->setGeometry(QRect(200, 380, 291, 31));
        infoTypology->setFont(font5);
        infoTypology->setStyleSheet(QString::fromUtf8("QLabel {color: rgb(255, 255, 255)}"));
        infoTypology->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        infoDist2C = new QLabel(infoPage);
        infoDist2C->setObjectName(QString::fromUtf8("infoDist2C"));
        infoDist2C->setGeometry(QRect(200, 430, 291, 31));
        infoDist2C->setFont(font5);
        infoDist2C->setStyleSheet(QString::fromUtf8("QLabel {color: rgb(255, 255, 255)}"));
        infoDist2C->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        infoRoof = new QLabel(infoPage);
        infoRoof->setObjectName(QString::fromUtf8("infoRoof"));
        infoRoof->setGeometry(QRect(200, 470, 291, 21));
        infoRoof->setFont(font5);
        infoRoof->setStyleSheet(QString::fromUtf8("QLabel {color: rgb(255, 255, 255)}"));
        infoRoof->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        infoLeague = new QLabel(infoPage);
        infoLeague->setObjectName(QString::fromUtf8("infoLeague"));
        infoLeague->setGeometry(QRect(10, 59, 781, 51));
        infoLeague->setFont(font5);
        infoLeague->setStyleSheet(QString::fromUtf8("QLabel {color: rgb(255, 255, 255)}"));
        infoLeague->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(infoPage);
        homeButton = new QToolButton(centralWidget);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(10, 2, 40, 36));
        homeButton->setFont(font);
        homeButton->setStyleSheet(QString::fromUtf8("QToolButton {background-color: rgb(75, 54, 124); color: rgb(167, 157, 210); border: none;}\n"
"\n"
"QToolButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(88, 63, 145), stop: 1 rgb(106, 76, 175));  color: rgb(137, 131, 149);}\n"
"\n"
""));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);
        adminStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Baseball", nullptr));
        label->setText(QString());
        teamsButton->setText(QApplication::translate("MainWindow", "Teams", nullptr));
        stadiumsButton->setText(QApplication::translate("MainWindow", "Stadiums", nullptr));
        tripButton->setText(QApplication::translate("MainWindow", "Trip", nullptr));
        loginButton->setText(QApplication::translate("MainWindow", "Login", nullptr));
        cartButton->setText(QApplication::translate("MainWindow", "Cart", nullptr));
        stadiumIcon->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "MLB", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Trip", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "PLANNER", nullptr));
        initDB->setText(QApplication::translate("MainWindow", "Load File", nullptr));
        signOut->setText(QApplication::translate("MainWindow", "Sign Out", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Souvenirs", nullptr));
        saveSouvenirModification->setText(QApplication::translate("MainWindow", "Save", nullptr));
        addNewSouvenir->setText(QApplication::translate("MainWindow", "+", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Add New Souvenir", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Stadium Name", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Capacity", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Playing Surface", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "Roof Type", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "Ball-Park Typology", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "Date Opened", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "Distance to CF", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "Location", nullptr));
        saveStadiumModification->setText(QApplication::translate("MainWindow", "Save", nullptr));
        editStadiumsButton->setText(QApplication::translate("MainWindow", "Stadiums", nullptr));
        editSouvenirsButton->setText(QApplication::translate("MainWindow", "Souvenirs", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Edit:", nullptr));
        adminStadiumModified->setText(QApplication::translate("MainWindow", "Current Stadium", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Editing Stadium:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Admin", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Login", nullptr));
        password->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Username", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Password", nullptr));
        signIn->setText(QApplication::translate("MainWindow", "Sign In", nullptr));
        cancelLogin->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        invalidInput->setText(QApplication::translate("MainWindow", "The account name or password that you have entered is incorrect.", nullptr));
        sortAllStadium->setText(QApplication::translate("MainWindow", "Stadium", nullptr));
        sortAllTeam->setText(QApplication::translate("MainWindow", "Team", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "League", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "Team", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "Stadium", nullptr));
        stadiumListType->setText(QApplication::translate("MainWindow", "Type", nullptr));
        stadiumAdditionalInfoLabel->setText(QApplication::translate("MainWindow", "Total Capacity:", nullptr));
        stadiumAdditionalInfo->setText(QApplication::translate("MainWindow", "300000", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "STADIUMS", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "Grand Total:", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "SOUVENIRS", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "QUANTITY", nullptr));
        label_31->setText(QApplication::translate("MainWindow", "PRICE", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "STADIUMS", nullptr));
        label_32->setText(QApplication::translate("MainWindow", "TOTAL", nullptr));
        infoTeam->setText(QApplication::translate("MainWindow", "Team Name", nullptr));
        returnToTeamList->setText(QApplication::translate("MainWindow", "Back", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Available Souvenirs", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Stadium Information", nullptr));

        const bool __sortingEnabled = labels->isSortingEnabled();
        labels->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = labels->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "Stadium:", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = labels->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "Location:", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = labels->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "Seating Capacity:", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = labels->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "Date Opened:", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = labels->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "Playing Surface:", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = labels->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "Ball Park Typology:", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = labels->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "Distance to Center Field:", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = labels->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "Roof Type:", nullptr));
        labels->setSortingEnabled(__sortingEnabled);

        infoStadium->setText(QApplication::translate("MainWindow", "Name", nullptr));
        infoLocation->setText(QApplication::translate("MainWindow", "Location", nullptr));
        infoCapacity->setText(QApplication::translate("MainWindow", "100", nullptr));
        infoDate->setText(QApplication::translate("MainWindow", "1907", nullptr));
        infoSurface->setText(QApplication::translate("MainWindow", "Grass", nullptr));
        infoTypology->setText(QApplication::translate("MainWindow", "modern", nullptr));
        infoDist2C->setText(QApplication::translate("MainWindow", "400", nullptr));
        infoRoof->setText(QApplication::translate("MainWindow", "retractable", nullptr));
        infoLeague->setText(QApplication::translate("MainWindow", "American League", nullptr));
        homeButton->setText(QApplication::translate("MainWindow", "home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
