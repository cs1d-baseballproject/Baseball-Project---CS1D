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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
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
    QWidget *page;
    QLabel *stadiumIcon;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *adminPage;
    QPushButton *initDB;
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
        QBrush brush10(QColor(183, 71, 42, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
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
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stadiumIcon = new QLabel(page);
        stadiumIcon->setObjectName(QStringLiteral("stadiumIcon"));
        stadiumIcon->setGeometry(QRect(3, 10, 793, 349));
        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(150, 10, 455, 171));
        QFont font1;
        font1.setPointSize(120);
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(page);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(270, 130, 281, 171));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font2.setPointSize(100);
        font2.setBold(true);
        font2.setWeight(75);
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(300, 290, 301, 171));
        QFont font3;
        font3.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font3.setPointSize(36);
        font3.setBold(true);
        font3.setWeight(75);
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        stackedWidget->addWidget(page);
        adminPage = new QWidget();
        adminPage->setObjectName(QStringLiteral("adminPage"));
        initDB = new QPushButton(adminPage);
        initDB->setObjectName(QStringLiteral("initDB"));
        initDB->setGeometry(QRect(20, 520, 81, 21));
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
        stackedWidget->addWidget(adminPage);
        loginPage = new QWidget();
        loginPage->setObjectName(QStringLiteral("loginPage"));
        label_2 = new QLabel(loginPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(390, 50, 311, 101));
        QFont font5;
        font5.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font5.setPointSize(72);
        font5.setBold(true);
        font5.setWeight(75);
        label_2->setFont(font5);
        label_3 = new QLabel(loginPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(510, 120, 191, 111));
        QFont font6;
        font6.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font6.setPointSize(60);
        font6.setBold(false);
        font6.setWeight(50);
        label_3->setFont(font6);
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
        QFont font7;
        font7.setPointSize(10);
        label_4->setFont(font7);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font7);

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
        QBrush brush11(QColor(180, 37, 44, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
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
        QFont font8;
        font8.setFamily(QStringLiteral("Nirmala UI"));
        font8.setPointSize(14);
        font8.setBold(true);
        font8.setWeight(75);
        sortAllStadium->setFont(font8);
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
        sortAllTeam->setFont(font8);
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
        label_6->setFont(font8);
        label_6->setStyleSheet(QStringLiteral("QLabel {color: rgb(137, 131, 149)}"));
        label_6->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(teamsPage);
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

        stackedWidget->setCurrentIndex(0);


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
        initDB->setText(QApplication::translate("MainWindow", "Open File", Q_NULLPTR));
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
        homeButton->setText(QApplication::translate("MainWindow", "home", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
