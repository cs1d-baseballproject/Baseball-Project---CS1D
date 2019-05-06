/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
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
    QTableView *productsTable;
    QListView *stadiumListCheckout;
    QLabel *label_26;
    QLabel *label_27;
    QLineEdit *stadiumTotal;
    QLabel *label_28;
    QLineEdit *grandTotal;
    QPushButton *cancelOrder;
    QPushButton *confirmOrder;
    QLabel *label_29;
    QLabel *label_30;
    QWidget *tripPage;
    QListWidget *tripStadiumList;
    QListWidget *tripSTVList;
    QPushButton *tripConfirm;
    QCheckBox *tripUserOrder;
    QPushButton *tripAdd;
    QLabel *label_31;
    QLabel *label_32;
    QPushButton *tripRemove;
    QWidget *laTripPage;
    QLabel *label_33;
    QListWidget *laTripStadiumList;
    QPushButton *laTripConfirm;
    QWidget *tripResultPage;
    QListWidget *resultFrom;
    QListWidget *resultTo;
    QListWidget *resultDist;
    QLabel *resultFromLabel;
    QLabel *resultToLabel;
    QLabel *resultDistLabel;
    QPushButton *resultContinue;
    QLabel *resultTitle;
    QLabel *resultTDistLabel;
    QLabel *resultTDist;
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
    QPushButton *addToCart;
    QPushButton *tripContinue_2;
    QProgressBar *progressBar;
    QToolButton *homeButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
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
        palette.setBrush(QPalette::Active, QPalette::NoRole, brush10);
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
        palette.setBrush(QPalette::Inactive, QPalette::NoRole, brush10);
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
        palette.setBrush(QPalette::Disabled, QPalette::NoRole, brush10);
        MainWindow->setPalette(palette);
        MainWindow->setWindowOpacity(1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 800, 40));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QStringLiteral("QLabel {background-color: rgb(75, 54, 124)}"));
        teamsButton = new QToolButton(centralWidget);
        teamsButton->setObjectName(QStringLiteral("teamsButton"));
        teamsButton->setGeometry(QRect(60, 0, 70, 40));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft JhengHei"));
        font.setPointSize(10);
        teamsButton->setFont(font);
        teamsButton->setStyleSheet(QLatin1String("QToolButton {background-color: rgb(75, 54, 124); color: rgb(167, 157, 210); border: none;}\n"
"\n"
"QToolButton::menu-indicator {image: none}\n"
"\n"
"QToolButton:hover {background-color: rgb(106, 76, 175); color: rgb(255, 255, 255);}\n"
"\n"
"QToolButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(88, 63, 145), stop: 1 rgb(106, 76, 175));  color: rgb(137, 131, 149);}\n"
"\n"
""));
        stadiumsButton = new QToolButton(centralWidget);
        stadiumsButton->setObjectName(QStringLiteral("stadiumsButton"));
        stadiumsButton->setGeometry(QRect(130, 0, 75, 40));
        stadiumsButton->setFont(font);
        stadiumsButton->setStyleSheet(QLatin1String("QToolButton {background-color: rgb(75, 54, 124); color: rgb(167, 157, 210); border: none;}\n"
"\n"
"QToolButton::menu-indicator {image: none}\n"
"\n"
"QToolButton:hover {background-color: rgb(106, 76, 175); color: rgb(255, 255, 255);}\n"
"\n"
"QToolButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(88, 63, 145), stop: 1 rgb(106, 76, 175));  color: rgb(137, 131, 149);}\n"
"\n"
""));
        tripButton = new QToolButton(centralWidget);
        tripButton->setObjectName(QStringLiteral("tripButton"));
        tripButton->setGeometry(QRect(205, 0, 50, 40));
        tripButton->setFont(font);
        tripButton->setStyleSheet(QLatin1String("QToolButton {background-color: rgb(75, 54, 124); color: rgb(167, 157, 210); border: none;}\n"
"\n"
"QToolButton::menu-indicator {image: none}\n"
"\n"
"QToolButton:hover {background-color: rgb(106, 76, 175); color: rgb(255, 255, 255);}\n"
"\n"
"QToolButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(88, 63, 145), stop: 1 rgb(106, 76, 175));  color: rgb(137, 131, 149);}\n"
"\n"
""));
        loginButton = new QToolButton(centralWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(730, 0, 50, 40));
        loginButton->setFont(font);
        loginButton->setStyleSheet(QLatin1String("QToolButton {background-color: rgb(75, 54, 124); color: rgb(167, 157, 210); border: none;}\n"
"\n"
"QToolButton:hover {background-color: rgb(106, 76, 175); color: rgb(255, 255, 255);}\n"
"\n"
"QToolButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(88, 63, 145), stop: 1 rgb(106, 76, 175));  color: rgb(137, 131, 149);}\n"
"\n"
""));
        cartButton = new QToolButton(centralWidget);
        cartButton->setObjectName(QStringLiteral("cartButton"));
        cartButton->setGeometry(QRect(680, 0, 50, 40));
        cartButton->setFont(font);
        cartButton->setStyleSheet(QLatin1String("QToolButton {background-color: rgb(75, 54, 124); color: rgb(167, 157, 210); border: none;}\n"
"\n"
"QToolButton:hover {background-color: rgb(106, 76, 175); color: rgb(255, 255, 255);}\n"
"\n"
"QToolButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(88, 63, 145), stop: 1 rgb(106, 76, 175));  color: rgb(137, 131, 149);}\n"
"\n"
""));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 40, 800, 560));
        homePage = new QWidget();
        homePage->setObjectName(QStringLiteral("homePage"));
        stadiumIcon = new QLabel(homePage);
        stadiumIcon->setObjectName(QStringLiteral("stadiumIcon"));
        stadiumIcon->setGeometry(QRect(3, 10, 793, 349));
        label_7 = new QLabel(homePage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(150, 10, 455, 171));
        QFont font1;
        font1.setPointSize(120);
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(homePage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(270, 130, 281, 171));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font2.setPointSize(100);
        font2.setBold(true);
        font2.setWeight(75);
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(homePage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(300, 290, 301, 171));
        QFont font3;
        font3.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font3.setPointSize(36);
        font3.setBold(true);
        font3.setWeight(75);
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        stackedWidget->addWidget(homePage);
        adminPage = new QWidget();
        adminPage->setObjectName(QStringLiteral("adminPage"));
        initDB = new QPushButton(adminPage);
        initDB->setObjectName(QStringLiteral("initDB"));
        initDB->setGeometry(QRect(610, 530, 81, 21));
        QFont font4;
        font4.setFamily(QStringLiteral("Nirmala UI"));
        font4.setPointSize(9);
        font4.setBold(false);
        font4.setWeight(50);
        initDB->setFont(font4);
        initDB->setAutoFillBackground(false);
        initDB->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        signOut = new QPushButton(adminPage);
        signOut->setObjectName(QStringLiteral("signOut"));
        signOut->setGeometry(QRect(710, 530, 81, 21));
        signOut->setFont(font4);
        signOut->setAutoFillBackground(false);
        signOut->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        adminStadiumList = new QListWidget(adminPage);
        adminStadiumList->setObjectName(QStringLiteral("adminStadiumList"));
        adminStadiumList->setGeometry(QRect(50, 20, 275, 491));
        adminStadiumList->setStyleSheet(QStringLiteral("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        adminStadiumList->setFrameShape(QFrame::NoFrame);
        adminStadiumList->setFrameShadow(QFrame::Plain);
        adminStadiumList->setAlternatingRowColors(true);
        adminStackedWidget = new QStackedWidget(adminPage);
        adminStackedWidget->setObjectName(QStringLiteral("adminStackedWidget"));
        adminStackedWidget->setGeometry(QRect(400, 39, 381, 481));
        adminBlank = new QWidget();
        adminBlank->setObjectName(QStringLiteral("adminBlank"));
        adminStackedWidget->addWidget(adminBlank);
        modifySouvenirs = new QWidget();
        modifySouvenirs->setObjectName(QStringLiteral("modifySouvenirs"));
        adminPriceList = new QListWidget(modifySouvenirs);
        adminPriceList->setObjectName(QStringLiteral("adminPriceList"));
        adminPriceList->setGeometry(QRect(201, 70, 101, 351));
        adminPriceList->setStyleSheet(QStringLiteral("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        adminPriceList->setFrameShape(QFrame::NoFrame);
        adminPriceList->setFrameShadow(QFrame::Plain);
        adminPriceList->setAlternatingRowColors(true);
        adminSVList = new QListWidget(modifySouvenirs);
        adminSVList->setObjectName(QStringLiteral("adminSVList"));
        adminSVList->setGeometry(QRect(30, 70, 171, 351));
        adminSVList->setStyleSheet(QStringLiteral("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        adminSVList->setFrameShape(QFrame::NoFrame);
        adminSVList->setFrameShadow(QFrame::Plain);
        adminSVList->setAlternatingRowColors(true);
        label_14 = new QLabel(modifySouvenirs);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(70, 20, 221, 31));
        QFont font5;
        font5.setFamily(QStringLiteral("Nirmala UI"));
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setWeight(75);
        label_14->setFont(font5);
        label_14->setStyleSheet(QStringLiteral("QLabel {color: rgb(137, 131, 149)}"));
        label_14->setAlignment(Qt::AlignCenter);
        saveSouvenirModification = new QPushButton(modifySouvenirs);
        saveSouvenirModification->setObjectName(QStringLiteral("saveSouvenirModification"));
        saveSouvenirModification->setGeometry(QRect(230, 440, 81, 21));
        saveSouvenirModification->setFont(font4);
        saveSouvenirModification->setAutoFillBackground(false);
        saveSouvenirModification->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        addNewSouvenir = new QPushButton(modifySouvenirs);
        addNewSouvenir->setObjectName(QStringLiteral("addNewSouvenir"));
        addNewSouvenir->setGeometry(QRect(30, 49, 31, 21));
        QFont font6;
        font6.setFamily(QStringLiteral("Nirmala UI"));
        font6.setPointSize(11);
        font6.setBold(true);
        font6.setWeight(75);
        addNewSouvenir->setFont(font6);
        addNewSouvenir->setAutoFillBackground(false);
        addNewSouvenir->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        label_15 = new QLabel(modifySouvenirs);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(65, 53, 91, 16));
        adminStackedWidget->addWidget(modifySouvenirs);
        modifyStadiums = new QWidget();
        modifyStadiums->setObjectName(QStringLiteral("modifyStadiums"));
        formLayoutWidget_2 = new QWidget(modifyStadiums);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(50, 20, 291, 211));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(formLayoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_16);

        lineEdit = new QLineEdit(formLayoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QStringLiteral("QLineEdit{ color: rgb(0, 0, 0)}"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_17 = new QLabel(formLayoutWidget_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_17);

        lineEdit_2 = new QLineEdit(formLayoutWidget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setStyleSheet(QStringLiteral("QLineEdit{ color: rgb(0, 0, 0)}"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_18 = new QLabel(formLayoutWidget_2);
        label_18->setObjectName(QStringLiteral("label_18"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_18);

        lineEdit_3 = new QLineEdit(formLayoutWidget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setStyleSheet(QStringLiteral("QLineEdit{ color: rgb(0, 0, 0)}"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_19 = new QLabel(formLayoutWidget_2);
        label_19->setObjectName(QStringLiteral("label_19"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_19);

        lineEdit_4 = new QLineEdit(formLayoutWidget_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setStyleSheet(QStringLiteral("QLineEdit{ color: rgb(0, 0, 0)}"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        label_20 = new QLabel(formLayoutWidget_2);
        label_20->setObjectName(QStringLiteral("label_20"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_20);

        lineEdit_5 = new QLineEdit(formLayoutWidget_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setStyleSheet(QStringLiteral("QLineEdit{ color: rgb(0, 0, 0)}"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, lineEdit_5);

        label_21 = new QLabel(formLayoutWidget_2);
        label_21->setObjectName(QStringLiteral("label_21"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_21);

        lineEdit_6 = new QLineEdit(formLayoutWidget_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setStyleSheet(QStringLiteral("QLineEdit{ color: rgb(0, 0, 0)}"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, lineEdit_6);

        label_22 = new QLabel(formLayoutWidget_2);
        label_22->setObjectName(QStringLiteral("label_22"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_22);

        lineEdit_7 = new QLineEdit(formLayoutWidget_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setStyleSheet(QStringLiteral("QLineEdit{ color: rgb(0, 0, 0)}"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, lineEdit_7);

        label_23 = new QLabel(formLayoutWidget_2);
        label_23->setObjectName(QStringLiteral("label_23"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_23);

        lineEdit_8 = new QLineEdit(formLayoutWidget_2);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setStyleSheet(QStringLiteral("QLineEdit{ color: rgb(0, 0, 0)}"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, lineEdit_8);

        saveStadiumModification = new QPushButton(modifyStadiums);
        saveStadiumModification->setObjectName(QStringLiteral("saveStadiumModification"));
        saveStadiumModification->setGeometry(QRect(230, 440, 81, 21));
        saveStadiumModification->setFont(font4);
        saveStadiumModification->setAutoFillBackground(false);
        saveStadiumModification->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        adminStackedWidget->addWidget(modifyStadiums);
        editStadiumsButton = new QPushButton(adminPage);
        editStadiumsButton->setObjectName(QStringLiteral("editStadiumsButton"));
        editStadiumsButton->setGeometry(QRect(250, 520, 75, 21));
        editStadiumsButton->setFont(font4);
        editStadiumsButton->setAutoFillBackground(false);
        editStadiumsButton->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        editSouvenirsButton = new QPushButton(adminPage);
        editSouvenirsButton->setObjectName(QStringLiteral("editSouvenirsButton"));
        editSouvenirsButton->setGeometry(QRect(176, 520, 75, 21));
        editSouvenirsButton->setFont(font4);
        editSouvenirsButton->setAutoFillBackground(false);
        editSouvenirsButton->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        label_12 = new QLabel(adminPage);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(150, 520, 51, 21));
        adminStadiumModified = new QLabel(adminPage);
        adminStadiumModified->setObjectName(QStringLiteral("adminStadiumModified"));
        adminStadiumModified->setGeometry(QRect(520, 10, 251, 21));
        label_13 = new QLabel(adminPage);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(430, 10, 81, 21));
        stackedWidget->addWidget(adminPage);
        loginPage = new QWidget();
        loginPage->setObjectName(QStringLiteral("loginPage"));
        label_2 = new QLabel(loginPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(390, 50, 311, 101));
        QFont font7;
        font7.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font7.setPointSize(72);
        font7.setBold(true);
        font7.setWeight(75);
        label_2->setFont(font7);
        label_3 = new QLabel(loginPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(510, 120, 191, 111));
        QFont font8;
        font8.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font8.setPointSize(60);
        font8.setBold(false);
        font8.setWeight(50);
        label_3->setFont(font8);
        formLayoutWidget = new QWidget(loginPage);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(500, 280, 191, 61));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(30);
        formLayout->setContentsMargins(0, 0, 0, 0);
        password = new QLineEdit(formLayoutWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setStyleSheet(QStringLiteral("QLineEdit {color: rgb(25, 23, 28)}"));
        password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, password);

        user = new QLineEdit(formLayoutWidget);
        user->setObjectName(QStringLiteral("user"));
        user->setStyleSheet(QStringLiteral("QLineEdit {color: rgb(25, 23, 28)}"));

        formLayout->setWidget(1, QFormLayout::FieldRole, user);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font9;
        font9.setPointSize(10);
        label_4->setFont(font9);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font9);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        signIn = new QPushButton(loginPage);
        signIn->setObjectName(QStringLiteral("signIn"));
        signIn->setGeometry(QRect(610, 360, 81, 21));
        signIn->setFont(font4);
        signIn->setAutoFillBackground(false);
        signIn->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        cancelLogin = new QPushButton(loginPage);
        cancelLogin->setObjectName(QStringLiteral("cancelLogin"));
        cancelLogin->setGeometry(QRect(500, 360, 81, 21));
        cancelLogin->setFont(font4);
        cancelLogin->setAutoFillBackground(false);
        cancelLogin->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        invalidInput = new QLabel(loginPage);
        invalidInput->setObjectName(QStringLiteral("invalidInput"));
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
        teamsPage->setObjectName(QStringLiteral("teamsPage"));
        teamTList = new QListWidget(teamsPage);
        teamTList->setObjectName(QStringLiteral("teamTList"));
        teamTList->setGeometry(QRect(50, 50, 150, 481));
        teamTList->setStyleSheet(QStringLiteral("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        teamTList->setFrameShape(QFrame::NoFrame);
        teamTList->setFrameShadow(QFrame::Plain);
        teamTList->setAlternatingRowColors(true);
        stadiumTList = new QListWidget(teamsPage);
        stadiumTList->setObjectName(QStringLiteral("stadiumTList"));
        stadiumTList->setGeometry(QRect(300, 50, 275, 481));
        stadiumTList->setStyleSheet(QStringLiteral("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        stadiumTList->setFrameShape(QFrame::NoFrame);
        stadiumTList->setFrameShadow(QFrame::Plain);
        stadiumTList->setAlternatingRowColors(true);
        leagueTList = new QListWidget(teamsPage);
        leagueTList->setObjectName(QStringLiteral("leagueTList"));
        leagueTList->setGeometry(QRect(200, 50, 100, 481));
        leagueTList->setStyleSheet(QStringLiteral("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        leagueTList->setFrameShape(QFrame::NoFrame);
        leagueTList->setFrameShadow(QFrame::Plain);
        leagueTList->setAlternatingRowColors(true);
        sortAllStadium = new QPushButton(teamsPage);
        sortAllStadium->setObjectName(QStringLiteral("sortAllStadium"));
        sortAllStadium->setGeometry(QRect(300, 19, 275, 31));
        sortAllStadium->setFont(font5);
        sortAllStadium->setAutoFillBackground(false);
        sortAllStadium->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        sortAllTeam = new QPushButton(teamsPage);
        sortAllTeam->setObjectName(QStringLiteral("sortAllTeam"));
        sortAllTeam->setGeometry(QRect(50, 19, 150, 31));
        sortAllTeam->setFont(font5);
        sortAllTeam->setAutoFillBackground(false);
        sortAllTeam->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        label_6 = new QLabel(teamsPage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(200, 19, 100, 31));
        label_6->setFont(font5);
        label_6->setStyleSheet(QStringLiteral("QLabel {color: rgb(137, 131, 149)}"));
        label_6->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(teamsPage);
        stadiumsPage = new QWidget();
        stadiumsPage->setObjectName(QStringLiteral("stadiumsPage"));
        stadiumList = new QListWidget(stadiumsPage);
        stadiumList->setObjectName(QStringLiteral("stadiumList"));
        stadiumList->setGeometry(QRect(40, 40, 271, 491));
        stadiumList->setStyleSheet(QStringLiteral("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        stadiumList->setFrameShape(QFrame::NoFrame);
        stadiumList->setFrameShadow(QFrame::Plain);
        stadiumList->setAlternatingRowColors(true);
        stadiumTeamList = new QListWidget(stadiumsPage);
        stadiumTeamList->setObjectName(QStringLiteral("stadiumTeamList"));
        stadiumTeamList->setGeometry(QRect(310, 40, 171, 491));
        stadiumTeamList->setStyleSheet(QStringLiteral("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        stadiumTeamList->setFrameShape(QFrame::NoFrame);
        stadiumTeamList->setFrameShadow(QFrame::Plain);
        stadiumTeamList->setAlternatingRowColors(true);
        stadiumTypeList = new QListWidget(stadiumsPage);
        stadiumTypeList->setObjectName(QStringLiteral("stadiumTypeList"));
        stadiumTypeList->setGeometry(QRect(481, 40, 141, 491));
        stadiumTypeList->setStyleSheet(QStringLiteral("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        stadiumTypeList->setFrameShape(QFrame::NoFrame);
        stadiumTypeList->setFrameShadow(QFrame::Plain);
        stadiumTypeList->setAlternatingRowColors(true);
        label_24 = new QLabel(stadiumsPage);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(310, 10, 171, 31));
        label_24->setFont(font5);
        label_24->setStyleSheet(QStringLiteral("QLabel {color: rgb(137, 131, 149)}"));
        label_24->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(stadiumsPage);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(40, 9, 271, 31));
        label_25->setFont(font5);
        label_25->setStyleSheet(QStringLiteral("QLabel {color: rgb(137, 131, 149)}"));
        label_25->setAlignment(Qt::AlignCenter);
        stadiumListType = new QLabel(stadiumsPage);
        stadiumListType->setObjectName(QStringLiteral("stadiumListType"));
        stadiumListType->setGeometry(QRect(480, 10, 141, 31));
        stadiumListType->setFont(font5);
        stadiumListType->setStyleSheet(QStringLiteral("QLabel {color: rgb(137, 131, 149)}"));
        stadiumListType->setAlignment(Qt::AlignCenter);
        stadiumAdditionalInfoLabel = new QLabel(stadiumsPage);
        stadiumAdditionalInfoLabel->setObjectName(QStringLiteral("stadiumAdditionalInfoLabel"));
        stadiumAdditionalInfoLabel->setGeometry(QRect(640, 450, 111, 31));
        QFont font10;
        font10.setPointSize(10);
        font10.setBold(true);
        font10.setWeight(75);
        stadiumAdditionalInfoLabel->setFont(font10);
        stadiumAdditionalInfoLabel->setWordWrap(true);
        stadiumAdditionalInfo = new QLabel(stadiumsPage);
        stadiumAdditionalInfo->setObjectName(QStringLiteral("stadiumAdditionalInfo"));
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
        cartPage->setObjectName(QStringLiteral("cartPage"));
        productsTable = new QTableView(cartPage);
        productsTable->setObjectName(QStringLiteral("productsTable"));
        productsTable->setGeometry(QRect(270, 50, 501, 381));
        productsTable->setStyleSheet(QStringLiteral("QTableView {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        productsTable->setFrameShape(QFrame::NoFrame);
        productsTable->setFrameShadow(QFrame::Plain);
        stadiumListCheckout = new QListView(cartPage);
        stadiumListCheckout->setObjectName(QStringLiteral("stadiumListCheckout"));
        stadiumListCheckout->setGeometry(QRect(20, 50, 221, 381));
        stadiumListCheckout->setStyleSheet(QStringLiteral("QListView {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        stadiumListCheckout->setFrameShape(QFrame::NoFrame);
        stadiumListCheckout->setFrameShadow(QFrame::Raised);
        label_26 = new QLabel(cartPage);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(20, 30, 121, 20));
        label_26->setFont(font6);
        label_27 = new QLabel(cartPage);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(20, 450, 81, 21));
        QFont font12;
        font12.setFamily(QStringLiteral("Nirmala UI"));
        font12.setPointSize(8);
        label_27->setFont(font12);
        stadiumTotal = new QLineEdit(cartPage);
        stadiumTotal->setObjectName(QStringLiteral("stadiumTotal"));
        stadiumTotal->setGeometry(QRect(100, 450, 141, 21));
        label_28 = new QLabel(cartPage);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(20, 490, 81, 21));
        label_28->setFont(font12);
        grandTotal = new QLineEdit(cartPage);
        grandTotal->setObjectName(QStringLiteral("grandTotal"));
        grandTotal->setGeometry(QRect(100, 490, 141, 21));
        cancelOrder = new QPushButton(cartPage);
        cancelOrder->setObjectName(QStringLiteral("cancelOrder"));
        cancelOrder->setGeometry(QRect(500, 470, 131, 41));
        QFont font13;
        font13.setFamily(QStringLiteral("Nirmala UI"));
        font13.setPointSize(10);
        cancelOrder->setFont(font13);
        cancelOrder->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        confirmOrder = new QPushButton(cartPage);
        confirmOrder->setObjectName(QStringLiteral("confirmOrder"));
        confirmOrder->setGeometry(QRect(640, 470, 131, 41));
        confirmOrder->setFont(font13);
        confirmOrder->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        label_29 = new QLabel(cartPage);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(270, 30, 121, 20));
        label_29->setFont(font6);
        label_30 = new QLabel(cartPage);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(650, 30, 121, 20));
        label_30->setFont(font6);
        stackedWidget->addWidget(cartPage);
        tripPage = new QWidget();
        tripPage->setObjectName(QStringLiteral("tripPage"));
        tripStadiumList = new QListWidget(tripPage);
        tripStadiumList->setObjectName(QStringLiteral("tripStadiumList"));
        tripStadiumList->setGeometry(QRect(50, 50, 261, 461));
        tripStadiumList->setStyleSheet(QStringLiteral("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        tripStadiumList->setFrameShape(QFrame::NoFrame);
        tripStadiumList->setFrameShadow(QFrame::Plain);
        tripStadiumList->setAlternatingRowColors(true);
        tripSTVList = new QListWidget(tripPage);
        tripSTVList->setObjectName(QStringLiteral("tripSTVList"));
        tripSTVList->setGeometry(QRect(391, 50, 241, 461));
        tripSTVList->setStyleSheet(QStringLiteral("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        tripSTVList->setFrameShape(QFrame::NoFrame);
        tripSTVList->setFrameShadow(QFrame::Plain);
        tripSTVList->setAlternatingRowColors(true);
        tripConfirm = new QPushButton(tripPage);
        tripConfirm->setObjectName(QStringLiteral("tripConfirm"));
        tripConfirm->setGeometry(QRect(660, 510, 121, 31));
        QFont font14;
        font14.setFamily(QStringLiteral("Nirmala UI"));
        font14.setPointSize(10);
        font14.setBold(false);
        font14.setWeight(50);
        tripConfirm->setFont(font14);
        tripConfirm->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        tripUserOrder = new QCheckBox(tripPage);
        tripUserOrder->setObjectName(QStringLiteral("tripUserOrder"));
        tripUserOrder->setGeometry(QRect(660, 480, 101, 21));
        QFont font15;
        font15.setFamily(QStringLiteral("Nirmala UI"));
        font15.setPointSize(9);
        tripUserOrder->setFont(font15);
        tripUserOrder->setStyleSheet(QStringLiteral("QCheckBox { color: rgb(137, 131, 149);}"));
        tripAdd = new QPushButton(tripPage);
        tripAdd->setObjectName(QStringLiteral("tripAdd"));
        tripAdd->setGeometry(QRect(240, 20, 81, 21));
        tripAdd->setFont(font4);
        tripAdd->setAutoFillBackground(false);
        tripAdd->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        label_31 = new QLabel(tripPage);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(130, 10, 101, 41));
        label_31->setFont(font5);
        label_31->setStyleSheet(QStringLiteral("QLabel {color: rgb(137, 131, 149)}"));
        label_31->setAlignment(Qt::AlignCenter);
        label_32 = new QLabel(tripPage);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(390, 10, 241, 41));
        label_32->setFont(font5);
        label_32->setStyleSheet(QStringLiteral("QLabel {color: rgb(137, 131, 149)}"));
        label_32->setAlignment(Qt::AlignCenter);
        tripRemove = new QPushButton(tripPage);
        tripRemove->setObjectName(QStringLiteral("tripRemove"));
        tripRemove->setGeometry(QRect(390, 20, 81, 21));
        tripRemove->setFont(font4);
        tripRemove->setAutoFillBackground(false);
        tripRemove->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        stackedWidget->addWidget(tripPage);
        laTripPage = new QWidget();
        laTripPage->setObjectName(QStringLiteral("laTripPage"));
        label_33 = new QLabel(laTripPage);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(260, 10, 241, 41));
        label_33->setFont(font5);
        label_33->setStyleSheet(QStringLiteral("QLabel {color: rgb(137, 131, 149)}"));
        label_33->setAlignment(Qt::AlignCenter);
        laTripStadiumList = new QListWidget(laTripPage);
        laTripStadiumList->setObjectName(QStringLiteral("laTripStadiumList"));
        laTripStadiumList->setGeometry(QRect(231, 50, 301, 451));
        laTripStadiumList->setStyleSheet(QStringLiteral("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        laTripStadiumList->setFrameShape(QFrame::NoFrame);
        laTripStadiumList->setFrameShadow(QFrame::Plain);
        laTripStadiumList->setAlternatingRowColors(true);
        laTripConfirm = new QPushButton(laTripPage);
        laTripConfirm->setObjectName(QStringLiteral("laTripConfirm"));
        laTripConfirm->setGeometry(QRect(660, 510, 121, 31));
        laTripConfirm->setFont(font14);
        laTripConfirm->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        stackedWidget->addWidget(laTripPage);
        tripResultPage = new QWidget();
        tripResultPage->setObjectName(QStringLiteral("tripResultPage"));
        resultFrom = new QListWidget(tripResultPage);
        resultFrom->setObjectName(QStringLiteral("resultFrom"));
        resultFrom->setGeometry(QRect(30, 110, 231, 411));
        resultFrom->setStyleSheet(QStringLiteral("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        resultFrom->setFrameShape(QFrame::NoFrame);
        resultFrom->setFrameShadow(QFrame::Plain);
        resultFrom->setAlternatingRowColors(true);
        resultTo = new QListWidget(tripResultPage);
        resultTo->setObjectName(QStringLiteral("resultTo"));
        resultTo->setGeometry(QRect(260, 110, 221, 411));
        resultTo->setStyleSheet(QStringLiteral("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        resultTo->setFrameShape(QFrame::NoFrame);
        resultTo->setFrameShadow(QFrame::Plain);
        resultTo->setAlternatingRowColors(true);
        resultDist = new QListWidget(tripResultPage);
        resultDist->setObjectName(QStringLiteral("resultDist"));
        resultDist->setGeometry(QRect(480, 110, 81, 411));
        resultDist->setStyleSheet(QStringLiteral("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        resultDist->setFrameShape(QFrame::NoFrame);
        resultDist->setFrameShadow(QFrame::Plain);
        resultDist->setAlternatingRowColors(true);
        resultFromLabel = new QLabel(tripResultPage);
        resultFromLabel->setObjectName(QStringLiteral("resultFromLabel"));
        resultFromLabel->setGeometry(QRect(30, 70, 231, 31));
        resultFromLabel->setFont(font5);
        resultFromLabel->setStyleSheet(QStringLiteral("QLabel {color: rgb(137, 131, 149)}"));
        resultFromLabel->setAlignment(Qt::AlignCenter);
        resultToLabel = new QLabel(tripResultPage);
        resultToLabel->setObjectName(QStringLiteral("resultToLabel"));
        resultToLabel->setGeometry(QRect(260, 70, 221, 31));
        resultToLabel->setFont(font5);
        resultToLabel->setStyleSheet(QStringLiteral("QLabel {color: rgb(137, 131, 149)}"));
        resultToLabel->setAlignment(Qt::AlignCenter);
        resultDistLabel = new QLabel(tripResultPage);
        resultDistLabel->setObjectName(QStringLiteral("resultDistLabel"));
        resultDistLabel->setGeometry(QRect(480, 70, 81, 31));
        resultDistLabel->setFont(font5);
        resultDistLabel->setStyleSheet(QStringLiteral("QLabel {color: rgb(137, 131, 149)}"));
        resultDistLabel->setAlignment(Qt::AlignCenter);
        resultContinue = new QPushButton(tripResultPage);
        resultContinue->setObjectName(QStringLiteral("resultContinue"));
        resultContinue->setGeometry(QRect(660, 510, 121, 31));
        resultContinue->setFont(font14);
        resultContinue->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        resultTitle = new QLabel(tripResultPage);
        resultTitle->setObjectName(QStringLiteral("resultTitle"));
        resultTitle->setGeometry(QRect(20, 10, 761, 61));
        QFont font16;
        font16.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font16.setPointSize(20);
        font16.setBold(true);
        font16.setWeight(75);
        resultTitle->setFont(font16);
        resultTitle->setStyleSheet(QStringLiteral("QLabel {color: rgb(255, 255, 255)}"));
        resultTitle->setAlignment(Qt::AlignCenter);
        resultTDistLabel = new QLabel(tripResultPage);
        resultTDistLabel->setObjectName(QStringLiteral("resultTDistLabel"));
        resultTDistLabel->setGeometry(QRect(576, 470, 111, 20));
        QFont font17;
        font17.setFamily(QStringLiteral("Nirmala UI"));
        font17.setPointSize(12);
        font17.setBold(true);
        font17.setWeight(75);
        resultTDistLabel->setFont(font17);
        resultTDist = new QLabel(tripResultPage);
        resultTDist->setObjectName(QStringLiteral("resultTDist"));
        resultTDist->setGeometry(QRect(700, 470, 71, 20));
        resultTDist->setFont(font17);
        stackedWidget->addWidget(tripResultPage);
        infoPage = new QWidget();
        infoPage->setObjectName(QStringLiteral("infoPage"));
        infoTeam = new QLabel(infoPage);
        infoTeam->setObjectName(QStringLiteral("infoTeam"));
        infoTeam->setGeometry(QRect(10, 0, 781, 71));
        QFont font18;
        font18.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font18.setPointSize(48);
        font18.setBold(true);
        font18.setWeight(75);
        infoTeam->setFont(font18);
        infoTeam->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        returnToTeamList = new QPushButton(infoPage);
        returnToTeamList->setObjectName(QStringLiteral("returnToTeamList"));
        returnToTeamList->setGeometry(QRect(20, 520, 81, 21));
        returnToTeamList->setFont(font4);
        returnToTeamList->setAutoFillBackground(false);
        returnToTeamList->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        infoSVList = new QListWidget(infoPage);
        infoSVList->setObjectName(QStringLiteral("infoSVList"));
        infoSVList->setGeometry(QRect(510, 120, 150, 371));
        infoSVList->setStyleSheet(QStringLiteral("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        infoSVList->setFrameShape(QFrame::NoFrame);
        infoSVList->setFrameShadow(QFrame::Plain);
        infoSVList->setAlternatingRowColors(true);
        infoSVPriceList = new QListWidget(infoPage);
        infoSVPriceList->setObjectName(QStringLiteral("infoSVPriceList"));
        infoSVPriceList->setGeometry(QRect(660, 120, 111, 371));
        infoSVPriceList->setStyleSheet(QStringLiteral("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(255, 255, 255)}"));
        infoSVPriceList->setFrameShape(QFrame::NoFrame);
        infoSVPriceList->setFrameShadow(QFrame::Plain);
        infoSVPriceList->setAlternatingRowColors(true);
        label_10 = new QLabel(infoPage);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(510, 90, 171, 31));
        label_10->setFont(font5);
        label_10->setStyleSheet(QStringLiteral("QLabel {color: rgb(137, 131, 149)}"));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(infoPage);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(64, 90, 191, 31));
        label_11->setFont(font5);
        label_11->setStyleSheet(QStringLiteral("QLabel {color: rgb(137, 131, 149)}"));
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
        labels->setObjectName(QStringLiteral("labels"));
        labels->setGeometry(QRect(60, 120, 121, 381));
        labels->setFont(font5);
        labels->setStyleSheet(QStringLiteral("QListWidget {alternate-background-color: rgb(42, 38, 47); background-color: rgb(25, 23, 28); color: rgb(137, 131, 149)}"));
        labels->setFrameShape(QFrame::NoFrame);
        labels->setFrameShadow(QFrame::Plain);
        labels->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        labels->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        labels->setAlternatingRowColors(false);
        labels->setSpacing(2);
        labels->setWordWrap(true);
        infoStadium = new QLabel(infoPage);
        infoStadium->setObjectName(QStringLiteral("infoStadium"));
        infoStadium->setGeometry(QRect(200, 120, 291, 30));
        infoStadium->setFont(font5);
        infoStadium->setStyleSheet(QStringLiteral("QLabel {color: rgb(255, 255, 255)}"));
        infoStadium->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        infoLocation = new QLabel(infoPage);
        infoLocation->setObjectName(QStringLiteral("infoLocation"));
        infoLocation->setGeometry(QRect(200, 150, 291, 31));
        infoLocation->setFont(font5);
        infoLocation->setStyleSheet(QStringLiteral("QLabel {color: rgb(255, 255, 255)}"));
        infoLocation->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        infoCapacity = new QLabel(infoPage);
        infoCapacity->setObjectName(QStringLiteral("infoCapacity"));
        infoCapacity->setGeometry(QRect(200, 210, 291, 31));
        infoCapacity->setFont(font5);
        infoCapacity->setStyleSheet(QStringLiteral("QLabel {color: rgb(255, 255, 255)}"));
        infoCapacity->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        infoDate = new QLabel(infoPage);
        infoDate->setObjectName(QStringLiteral("infoDate"));
        infoDate->setGeometry(QRect(200, 260, 291, 31));
        infoDate->setFont(font5);
        infoDate->setStyleSheet(QStringLiteral("QLabel {color: rgb(255, 255, 255)}"));
        infoDate->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        infoSurface = new QLabel(infoPage);
        infoSurface->setObjectName(QStringLiteral("infoSurface"));
        infoSurface->setGeometry(QRect(200, 320, 291, 31));
        infoSurface->setFont(font5);
        infoSurface->setStyleSheet(QStringLiteral("QLabel {color: rgb(255, 255, 255)}"));
        infoSurface->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        infoTypology = new QLabel(infoPage);
        infoTypology->setObjectName(QStringLiteral("infoTypology"));
        infoTypology->setGeometry(QRect(200, 380, 291, 31));
        infoTypology->setFont(font5);
        infoTypology->setStyleSheet(QStringLiteral("QLabel {color: rgb(255, 255, 255)}"));
        infoTypology->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        infoDist2C = new QLabel(infoPage);
        infoDist2C->setObjectName(QStringLiteral("infoDist2C"));
        infoDist2C->setGeometry(QRect(200, 430, 291, 31));
        infoDist2C->setFont(font5);
        infoDist2C->setStyleSheet(QStringLiteral("QLabel {color: rgb(255, 255, 255)}"));
        infoDist2C->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        infoRoof = new QLabel(infoPage);
        infoRoof->setObjectName(QStringLiteral("infoRoof"));
        infoRoof->setGeometry(QRect(200, 470, 291, 21));
        infoRoof->setFont(font5);
        infoRoof->setStyleSheet(QStringLiteral("QLabel {color: rgb(255, 255, 255)}"));
        infoRoof->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        infoLeague = new QLabel(infoPage);
        infoLeague->setObjectName(QStringLiteral("infoLeague"));
        infoLeague->setGeometry(QRect(10, 59, 781, 51));
        infoLeague->setFont(font5);
        infoLeague->setStyleSheet(QStringLiteral("QLabel {color: rgb(255, 255, 255)}"));
        infoLeague->setAlignment(Qt::AlignCenter);
        addToCart = new QPushButton(infoPage);
        addToCart->setObjectName(QStringLiteral("addToCart"));
        addToCart->setGeometry(QRect(690, 96, 81, 20));
        addToCart->setFont(font4);
        addToCart->setAutoFillBackground(false);
        addToCart->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        tripContinue_2 = new QPushButton(infoPage);
        tripContinue_2->setObjectName(QStringLiteral("tripContinue_2"));
        tripContinue_2->setGeometry(QRect(660, 510, 121, 31));
        tripContinue_2->setFont(font14);
        tripContinue_2->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(25, 23, 28); color: rgb(137, 131, 149); border: none;}\n"
"\n"
"QPushButton:hover {background-color: #252328; color: rgb(255, 255, 255);}\n"
"\n"
"QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(30, 28, 34), stop: 1 #252328);  color: rgb(137, 131, 149);}\n"
"\n"
""));
        progressBar = new QProgressBar(infoPage);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(340, 520, 118, 23));
        progressBar->setStyleSheet(QLatin1String("QProgressBar {text-align: center; color: ;}\n"
"\n"
"QProgressBar::chunk {background-color: rgb(72, 69, 79);}"));
        progressBar->setValue(23);
        stackedWidget->addWidget(infoPage);
        homeButton = new QToolButton(centralWidget);
        homeButton->setObjectName(QStringLiteral("homeButton"));
        homeButton->setGeometry(QRect(10, 2, 40, 36));
        homeButton->setFont(font);
        homeButton->setStyleSheet(QLatin1String("QToolButton {background-color: rgb(75, 54, 124); color: rgb(167, 157, 210); border: none;}\n"
"\n"
"QToolButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(88, 63, 145), stop: 1 rgb(106, 76, 175));  color: rgb(137, 131, 149);}\n"
"\n"
""));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(7);
        adminStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Baseball", Q_NULLPTR));
        label->setText(QString());
        teamsButton->setText(QApplication::translate("MainWindow", "Teams", Q_NULLPTR));
        stadiumsButton->setText(QApplication::translate("MainWindow", "Stadiums", Q_NULLPTR));
        tripButton->setText(QApplication::translate("MainWindow", "Trip", Q_NULLPTR));
        loginButton->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        cartButton->setText(QApplication::translate("MainWindow", "Cart", Q_NULLPTR));
        stadiumIcon->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "MLB", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Trip", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "PLANNER", Q_NULLPTR));
        initDB->setText(QApplication::translate("MainWindow", "Load File", Q_NULLPTR));
        signOut->setText(QApplication::translate("MainWindow", "Sign Out", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Souvenirs", Q_NULLPTR));
        saveSouvenirModification->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        addNewSouvenir->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Add New Souvenir", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Stadium Name", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Capacity", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Playing Surface", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Roof Type", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Ball-Park Typology", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Date Opened", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Distance to CF", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "Location", Q_NULLPTR));
        saveStadiumModification->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        editStadiumsButton->setText(QApplication::translate("MainWindow", "Stadiums", Q_NULLPTR));
        editSouvenirsButton->setText(QApplication::translate("MainWindow", "Souvenirs", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Edit:", Q_NULLPTR));
        adminStadiumModified->setText(QApplication::translate("MainWindow", "Current Stadium", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Editing Stadium:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Admin", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        password->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Username", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
        signIn->setText(QApplication::translate("MainWindow", "Sign In", Q_NULLPTR));
        cancelLogin->setText(QApplication::translate("MainWindow", "Cancel", Q_NULLPTR));
        invalidInput->setText(QApplication::translate("MainWindow", "The account name or password that you have entered is incorrect.", Q_NULLPTR));
        sortAllStadium->setText(QApplication::translate("MainWindow", "Stadium", Q_NULLPTR));
        sortAllTeam->setText(QApplication::translate("MainWindow", "Team", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "League", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "Team", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "Stadium", Q_NULLPTR));
        stadiumListType->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        stadiumAdditionalInfoLabel->setText(QApplication::translate("MainWindow", "Total Capacity:", Q_NULLPTR));
        stadiumAdditionalInfo->setText(QApplication::translate("MainWindow", "300000", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "STADIUMS", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "Stadium Total:", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "Grand Total:", Q_NULLPTR));
        cancelOrder->setText(QApplication::translate("MainWindow", "CANCEL ORDER", Q_NULLPTR));
        confirmOrder->setText(QApplication::translate("MainWindow", "CONFIRM ORDER", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "SOUVENIRS", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "QUANTITY", Q_NULLPTR));
        tripConfirm->setText(QApplication::translate("MainWindow", "Confirm", Q_NULLPTR));
        tripUserOrder->setText(QApplication::translate("MainWindow", "Use This Order", Q_NULLPTR));
        tripAdd->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "Team List", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "Trip", Q_NULLPTR));
        tripRemove->setText(QApplication::translate("MainWindow", "Remove", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "Select Team To Visit", Q_NULLPTR));
        laTripConfirm->setText(QApplication::translate("MainWindow", "Confirm", Q_NULLPTR));
        resultFromLabel->setText(QApplication::translate("MainWindow", "From", Q_NULLPTR));
        resultToLabel->setText(QApplication::translate("MainWindow", "To", Q_NULLPTR));
        resultDistLabel->setText(QApplication::translate("MainWindow", "Distance", Q_NULLPTR));
        resultContinue->setText(QApplication::translate("MainWindow", "Take Trip", Q_NULLPTR));
        resultTitle->setText(QApplication::translate("MainWindow", "MST Results", Q_NULLPTR));
        resultTDistLabel->setText(QApplication::translate("MainWindow", "Total Distance: ", Q_NULLPTR));
        resultTDist->setText(QApplication::translate("MainWindow", "1000000", Q_NULLPTR));
        infoTeam->setText(QApplication::translate("MainWindow", "Team Name", Q_NULLPTR));
        returnToTeamList->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Available Souvenirs", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Stadium Information", Q_NULLPTR));

        const bool __sortingEnabled = labels->isSortingEnabled();
        labels->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = labels->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "Stadium:", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = labels->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "Location:", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = labels->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "Seating Capacity:", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem3 = labels->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "Date Opened:", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem4 = labels->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "Playing Surface:", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem5 = labels->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "Ball Park Typology:", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem6 = labels->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "Distance to Center Field:", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem7 = labels->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "Roof Type:", Q_NULLPTR));
        labels->setSortingEnabled(__sortingEnabled);

        infoStadium->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        infoLocation->setText(QApplication::translate("MainWindow", "Location", Q_NULLPTR));
        infoCapacity->setText(QApplication::translate("MainWindow", "100", Q_NULLPTR));
        infoDate->setText(QApplication::translate("MainWindow", "1907", Q_NULLPTR));
        infoSurface->setText(QApplication::translate("MainWindow", "Grass", Q_NULLPTR));
        infoTypology->setText(QApplication::translate("MainWindow", "modern", Q_NULLPTR));
        infoDist2C->setText(QApplication::translate("MainWindow", "400", Q_NULLPTR));
        infoRoof->setText(QApplication::translate("MainWindow", "retractable", Q_NULLPTR));
        infoLeague->setText(QApplication::translate("MainWindow", "American League", Q_NULLPTR));
        addToCart->setText(QApplication::translate("MainWindow", "Add to Cart", Q_NULLPTR));
        tripContinue_2->setText(QApplication::translate("MainWindow", "Continue", Q_NULLPTR));
        homeButton->setText(QApplication::translate("MainWindow", "home", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
