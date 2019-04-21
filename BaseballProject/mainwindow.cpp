#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow), data{new database(teams, edgeList)}
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
    data->save();
    delete ui;
}

void MainWindow::on_initDB_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Excel File (*.xlsx)"));
    data->initFromFile(fileName);
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
        sortTeams(false);
        ui->sortAllStadium->setDisabled(false);
        ui->sortAllTeam->setDisabled(false);
    }
    else if(arg1->iconText() == "American League Teams")
    {
        sortTeams(false, "American");
        ui->sortAllStadium->setDisabled(true);
        ui->sortAllTeam->setDisabled(true);
    }
    else if(arg1->iconText() == "National League Teams")
    {
        sortTeams(true, "National");
        ui->sortAllStadium->setDisabled(true);
        ui->sortAllTeam->setDisabled(true);
    }
}

void MainWindow::on_sortAllTeam_clicked()
{
   sortTeams(false);
}

void MainWindow::on_sortAllStadium_clicked()
{
    sortTeams(true);
}

void MainWindow::sortTeams(bool byStadium, QString league)
{
    ui->leagueTList->clear();
    ui->stadiumTList->clear();
    ui->teamTList->clear();

    for(unsigned int i = 0; i < teams.size(); i++)
        if(league == "" || league == teams[i].getLeague()) {
            QString temp = (byStadium)? teams[i].getStadiumName(): teams[i].getTeamName();
            sort.insert(teams[i], temp);
        }

    while(!sort.empty()) {
        ui->leagueTList->addItem(sort.top().getLeague());
        ui->teamTList->addItem(sort.top().getTeamName());
        ui->stadiumTList->addItem(sort.top().getStadiumName());
        sort.removeTop();
    }
}

void MainWindow::on_signOut_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    isAdmin = false;
}
