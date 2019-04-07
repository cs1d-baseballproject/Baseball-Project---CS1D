#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    // Variable Declarations
    QMenu* teamMenu = new QMenu();      // UI menu
    QMenu* stadiumMenu = new QMenu();   //   "
    QMenu* tripMenu = new QMenu();      //   "

    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    // Set UI icons
    ui->stadiumIcon->setPixmap(QPixmap("Icons/stadium.jpg"));
    ui->homeButton->setIcon(QIcon("Icons/baseball.png"));
    ui->loginButton->setIcon(QIcon("Icons/tools.png"));
    ui->cartButton->setIcon(QIcon("Icons/cart.png"));
    ui->homeButton->setIconSize(QSize(32, 32));
    ui->loginButton->setIconSize(QSize(32, 32));
    ui->cartButton->setIconSize(QSize(32, 32));

    // Initialize team menu
    teamMenu->addAction(new QAction("All Teams", this));
    teamMenu->addAction(new QAction("American League Teams", this));
    teamMenu->addAction(new QAction("National League Teams", this));
    ui->teamsButton->setMenu(teamMenu);
    ui->teamsButton->setPopupMode(QToolButton::InstantPopup);

    // Initialize stadium menu
    stadiumMenu->addAction(new QAction("All Stadiums", this));
    stadiumMenu->addAction(new QAction("Open Roof Stadiums", this));
    stadiumMenu->addAction(new QAction("Closest to Center Field", this));
    stadiumMenu->addAction(new QAction("Furthest from Center Field", this));
    ui->stadiumsButton->setMenu(stadiumMenu);
    ui->stadiumsButton->setPopupMode(QToolButton::InstantPopup);

    // Initialize trip menu
    tripMenu->addAction(new QAction("Angels Stadium Trip", this));
    tripMenu->addAction(new QAction("Customizable Trip", this));
    tripMenu->addAction(new QAction("Comerica Park Trip", this));
    ui->tripButton->setMenu(tripMenu);
    ui->tripButton->setPopupMode(QToolButton::InstantPopup);

    // Create and initialize a programmer menu for BFS, DFS and MST
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_initDB_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Excel File (*.xlsx)"));
}

void MainWindow::on_loginButton_clicked()
{
    ui->invalidInput->hide();

    if(!isAdmin)
        ui->stackedWidget->setCurrentWidget(ui->loginPage);
    else
        ui->stackedWidget->setCurrentWidget(ui->adminPage);
}

void MainWindow::on_signIn_clicked()
{
    QString username = ui->user->text();
    QString password = ui->password->text();

    if(username == "username" && password == "password") // !!!NEEDS TO BE ENCRYPTED!!!
    {
        isAdmin = true;
        ui->stackedWidget->setCurrentWidget(ui->adminPage);
        ui->user->clear();
        ui->password->clear();
    }
    else
    {
        ui->invalidInput->show();
        ui->user->clear();
        ui->password->clear();
    }
}

void MainWindow::on_cancelLogin_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_homeButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_teamsButton_triggered(QAction *arg1)
{
    ui->teamTList->clear();
    ui->stadiumTList->clear();
    ui->leagueTList->clear();
    ui->stackedWidget->setCurrentWidget(ui->teamsPage);

    if(arg1->iconText() == "All Teams")
    {
        // IMPLEMENT: view all teams by team name

        ui->sortAllStadium->setDisabled(false);
        ui->sortAllTeam->setDisabled(false);

        for(int i = 0; i < 25; i++)
            ui->teamTList->addItem("Test Team");

        for(int i = 0; i < 25; i++)
            ui->leagueTList->addItem("Test League");

        for(int i = 0; i < 25; i++)
            ui->stadiumTList->addItem("Test Stadium");
    }
    else if(arg1->iconText() == "American League Teams")
    {
        // IMPLEMENT: view american league teams by team name

        ui->sortAllStadium->setDisabled(true);
        ui->sortAllTeam->setDisabled(true);
    }
    else if(arg1->iconText() == "National League Teams")
    {
        // IMPLEMENT: view national league teams by stadium name

        ui->sortAllStadium->setDisabled(true);
        ui->sortAllTeam->setDisabled(true);
    }
}

void MainWindow::on_sortAllTeam_clicked()
{
    // IMPLEMENT: view all teams sorted by team name
}

void MainWindow::on_sortAllStadium_clicked()
{
    // IMPLEMENT: view all teams sorted by stadium name
}
