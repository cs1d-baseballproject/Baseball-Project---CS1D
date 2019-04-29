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
    stadiumMenu->addAction(new QAction("Stadiums by Park Typology", this));
    stadiumMenu->addAction(new QAction("Stadiums by Date Opened", this));
    stadiumMenu->addAction(new QAction("Stadiums by Seating Capacity", this));
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

    // Read from files into database
    QString file[] = {"MLBInformation.xlsx", "Distance.xlsx", "Souvenirs.xlsx"};
    for(int i = 0; i < 3; i++)
        if(QFileInfo::exists(file[i]) && QFileInfo(file[i]).isFile())
            data->initFromFile(file[i]);

    // Create and initialize a programmer menu for BFS, DFS and MST
}

MainWindow::~MainWindow()
{
    data->save();
    clearLineEdits();
    delete ui;
}


// HOME SCREEN OPERATIONS
/*********************************************************************/
void MainWindow::on_homeButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


// TEAM LIST SCREEN OPERATIONS
/*********************************************************************/
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


// SIGN IN SCREEN OPERATIONS
/*********************************************************************/
void MainWindow::on_loginButton_clicked()
{
    ui->invalidInput->hide();
    ui->adminStackedWidget->setCurrentWidget(ui->adminBlank);
    ui->adminStadiumModified->setText("No stadium selected");
    ui->adminStadiumList->clear();

    if(!isAdmin)
        ui->stackedWidget->setCurrentWidget(ui->loginPage);
    else
    {
        for(auto it = teams.begin(); it != teams.end(); it++)
            ui->adminStadiumList->addItem(it->getStadiumName());

        ui->stackedWidget->setCurrentWidget(ui->adminPage);
    }
}

void MainWindow::on_signIn_clicked()
{
    QString username = ui->user->text();
    QString password = ui->password->text();

    if(username == "username" && password == "password") // !!!NEEDS TO BE ENCRYPTED!!!
    {
        isAdmin = true;
        for(auto it = teams.begin(); it != teams.end(); it++)
            ui->adminStadiumList->addItem(it->getStadiumName());
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


// ADMIN SCREEN OPERATIONS
/*********************************************************************/
void MainWindow::on_signOut_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    isAdmin = false;
}

void MainWindow::on_initDB_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Excel File (*.xlsx)"));

    if(fileName != "")
        data->initFromFile(fileName);

    for(auto it = teams.begin(); it != teams.end(); it++)
        ui->adminStadiumList->addItem(it->getStadiumName());
}

// EDIT STADIUMS
void MainWindow::on_editStadiumsButton_clicked()
{
    if(ui->adminStadiumList->selectedItems().size() != 0)
    {
        unsigned int stadiumIndex = ui->adminStadiumList->currentRow();
        ui->adminStackedWidget->setCurrentWidget(ui->modifyStadiums);
        ui->adminStadiumModified->setText(teams.at(stadiumIndex).getStadiumName());

        ui->lineEdit->setText(teams.at(stadiumIndex).getStadiumName());
        ui->lineEdit_2->setText(QString::number(teams.at(stadiumIndex).getSeatingCapacity()));
        ui->lineEdit_3->setText(teams.at(stadiumIndex).getPlayingSurface());
        ui->lineEdit_4->setText(teams.at(stadiumIndex).getRoofType());
        ui->lineEdit_5->setText(teams.at(stadiumIndex).getParkTypology());
        ui->lineEdit_6->setText(QString::number(teams.at(stadiumIndex).getDateOpened()));
        ui->lineEdit_7->setText(QString::number(teams.at(stadiumIndex).getDistanceToCenter()));
        ui->lineEdit_8->setText(teams.at(stadiumIndex).getLocation());
    }
    else
    {
        QMessageBox::warning(this, "No Selection", "Please select a stadium!");
    }
}

void MainWindow::on_saveStadiumModification_clicked()
{
    unsigned int index;
    for(index = 0; index < teams.size(); index++)
        if(teams.at(index).getStadiumName() == ui->adminStadiumModified->text())
            break;

    if(ui->lineEdit->text() != teams[index].getStadiumName())
    {
        ui->adminStadiumList->clear();
        for(unsigned int i = 0; i < teams.size(); i++)
            if(i != index)
                ui->adminStadiumList->addItem(teams[i].getStadiumName());
            else {
                ui->adminStadiumList->addItem(ui->lineEdit->text());
            }
    }

    teams[index].setStadiumName((ui->lineEdit->text() == "")? teams[index].getStadiumName(): ui->lineEdit->text());
    teams[index].setSeatingCapacity((ui->lineEdit_2->text() == "" || ui->lineEdit_7->text().toInt() == 0)? teams[index].getSeatingCapacity(): ui->lineEdit_2->text().toInt());
    teams[index].setPlayingSurface((ui->lineEdit_3->text() == "")? teams[index].getPlayingSurface(): ui->lineEdit_3->text());
    teams[index].setRoofType((ui->lineEdit_4->text() == "")? teams[index].getRoofType(): ui->lineEdit_4->text());
    teams[index].setParkTypology((ui->lineEdit_5->text() == "")? teams[index].getParkTypology(): ui->lineEdit_5->text());
    teams[index].setDateOpened((ui->lineEdit_6->text() == "" || ui->lineEdit_7->text().toInt() == 0)? teams[index].getDateOpened(): ui->lineEdit_6->text().toInt());
    teams[index].setDistanceToCenter((ui->lineEdit_7->text() == "" || ui->lineEdit_7->text().toInt() == 0)? teams[index].getDistanceToCenter(): ui->lineEdit_7->text().toInt());
    teams[index].setLocation((ui->lineEdit_8->text() == "")? teams[index].getLocation(): ui->lineEdit_8->text());
    ui->adminStadiumModified->setText((ui->lineEdit->text() == "")? teams[index].getStadiumName(): ui->lineEdit->text());


}

// EDIT SOUVENIRS
void MainWindow::on_editSouvenirsButton_clicked()
{
    if(ui->adminStadiumList->selectedItems().size() != 0)
    {
        initLineEdits(ui->adminStadiumList->currentRow());
        ui->adminStackedWidget->setCurrentWidget(ui->modifySouvenirs);
        ui->adminStadiumModified->setText(teams.at(ui->adminStadiumList->currentRow()).getStadiumName());
    }
    else
    {
        QMessageBox::warning(this, "No Selection", "Please select a stadium!");
    }
}

void MainWindow::on_saveSouvenirModification_clicked()
{
    unsigned int index;
    for(index = 0; index < teams.size(); index++)
        if(teams.at(index).getStadiumName() == ui->adminStadiumModified->text())
            break;

    teams.at(index).getSouvenirs().clear();

    for(unsigned int i = 0; i < modSouvName.size(); i++)
        if(modSouvName[i]->text() != "" && modSouvPrice[i]->text() != "")
            teams.at(index).getSouvenirs().push_back(souvenirs(teams.at(index).getStadiumName(),
                                                               modSouvName[i]->text(),
                                                               abs(modSouvPrice[i]->text().toDouble())));

    initLineEdits(index);
}

void MainWindow::clearLineEdits()
{
    for(unsigned int i = 0; i < modSouvName.size(); i++)
    {
        delete modSouvName[i];
        delete modSouvPrice[i];
    }

    modSouvName.clear();
    modSouvPrice.clear();
}

void MainWindow::initLineEdits(unsigned int stadiumIndex)
{
    clearLineEdits();
    ui->adminSVList->clear();
    ui->adminPriceList->clear();

    for(unsigned int i = 0; i < teams.at(stadiumIndex).getSouvenirs().size(); i++)
    {
        modSouvName.push_back(new QLineEdit(teams[stadiumIndex].getSouvenirs()[i].getSouvenirName()));
        modSouvPrice.push_back(new QLineEdit(QString::number(teams[stadiumIndex].getSouvenirs()[i].getPrice())));
        QListWidgetItem* t1 = new QListWidgetItem(ui->adminSVList);
        ui->adminSVList->addItem(t1);
        ui->adminSVList->setItemWidget(t1, modSouvName[i]);
        QListWidgetItem* t2 = new QListWidgetItem(ui->adminPriceList);
        ui->adminPriceList->addItem(t2);
        ui->adminPriceList->setItemWidget(t2, modSouvPrice[i]);
    }
}

void MainWindow::on_addNewSouvenir_clicked()
{
    modSouvName.push_back(new QLineEdit);
    modSouvPrice.push_back(new QLineEdit);
    QListWidgetItem* t1 = new QListWidgetItem(ui->adminSVList);
    ui->adminSVList->addItem(t1);
    ui->adminSVList->setItemWidget(t1, modSouvName[modSouvName.size() - 1]);
    QListWidgetItem* t2 = new QListWidgetItem(ui->adminPriceList);
    ui->adminPriceList->addItem(t2);
    ui->adminPriceList->setItemWidget(t2, modSouvPrice[modSouvPrice.size() - 1]);
}


// INFORMATION SCREEN OPERATIONS
/*********************************************************************/
void MainWindow::on_teamTList_itemDoubleClicked(QListWidgetItem *item)
{
    ui->infoSVList->clear();
    ui->infoSVPriceList->clear();

    for(auto it = teams.begin(); it != teams.end(); it++)
    {
        if(it->getTeamName() == item->text())
        {
            ui->infoDate->setText(QString::number(it->getDateOpened()));
            ui->infoRoof->setText(it->getRoofType());
            ui->infoTeam->setText(it->getTeamName());
            ui->infoDist2C->setText(QString::number(it->getDistanceToCenter()) + " feet");
            ui->infoLeague->setText(it->getLeague() + " League");
            ui->infoStadium->setText(it->getStadiumName());
            ui->infoSurface->setText(it->getPlayingSurface());
            ui->infoCapacity->setText(QString::number(it->getSeatingCapacity()));
            ui->infoLocation->setText(it->getLocation());
            ui->infoTypology->setText(it->getParkTypology());

            for(auto svIt = it->getSouvenirs().begin(); svIt != it->getSouvenirs().end(); svIt++)
            {
                ui->infoSVList->addItem(svIt->getSouvenirName());
                ui->infoSVPriceList->addItem("$" + QString::number(svIt->getPrice()));
            }
            break;
        }
    }
    ui->stackedWidget->setCurrentWidget(ui->infoPage);
}

void MainWindow::on_returnToTeamList_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->teamsPage);
}


// STADIUM LIST SCREEN OPERATIONS
/*********************************************************************/
void MainWindow::on_stadiumsButton_triggered(QAction *arg1)
{
    priorityQueue<team, int> sortNums;
    QString type;

    ui->stadiumAdditionalInfo->setText("");
    ui->stadiumAdditionalInfoLabel->setText("");
    ui->stadiumList->clear();
    ui->stadiumTeamList->clear();
    ui->stadiumTypeList->clear();
    ui->stackedWidget->setCurrentWidget(ui->stadiumsPage);

    if(arg1->iconText() == "Stadiums by Park Typology")
    {
       type = "Typology";
       ui->stadiumListType->setText(type);

       for(unsigned int i = 0; i < teams.size(); i++)
       {
           QString temp = teams[i].getParkTypology();
           sort.insert(teams[i], temp);
       }

       while(!sort.empty()) {
           ui->stadiumList->addItem(sort.top().getStadiumName());
           ui->stadiumTeamList->addItem(sort.top().getTeamName());
           ui->stadiumTypeList->addItem(sort.top().getParkTypology());
           sort.removeTop();
       }

    }
    else if(arg1->iconText() == "Stadiums by Date Opened")
    {
        type = "Date";
        ui->stadiumListType->setText(type);

        for(unsigned int i = 0; i < teams.size(); i++)
        {
            int temp = teams[i].getDateOpened();
            sortNums.insert(teams[i], temp);
        }

        while(!sortNums.empty()) {
            ui->stadiumList->addItem(sortNums.top().getStadiumName());
            ui->stadiumTeamList->addItem(sortNums.top().getTeamName());
            ui->stadiumTypeList->addItem(QString::number(sortNums.top().getDateOpened()));
            sortNums.removeTop();
        }
    }
    else if(arg1->iconText() == "Stadiums by Seating Capacity")
    {
        int total = 0;
        type = "Capacity";
        ui->stadiumListType->setText(type);

        for(unsigned int i = 0; i < teams.size(); i++)
        {
            int temp = teams[i].getSeatingCapacity();
            total += temp;
            sortNums.insert(teams[i], temp);
        }

        while(!sortNums.empty()) {
            ui->stadiumList->addItem(sortNums.top().getStadiumName());
            ui->stadiumTeamList->addItem(sortNums.top().getTeamName());
            ui->stadiumTypeList->addItem(QString::number(sortNums.top().getSeatingCapacity()));
            sortNums.removeTop();
        }

        ui->stadiumAdditionalInfo->setNum(total);
        ui->stadiumAdditionalInfoLabel->setText("Total Capacity:");
    }
    else if(arg1->iconText() == "Open Roof Stadiums")
    {
        int count = 0;
        type = "Roof";
        ui->stadiumListType->setText(type);

        for(unsigned int i = 0; i < teams.size(); i++)
            if("Open" == teams[i].getRoofType()) {
                QString temp = teams[i].getTeamName();
                sort.insert(teams[i], temp);
                count++;
            }

        while(!sort.empty()) {
            ui->stadiumList->addItem(sort.top().getStadiumName());
            ui->stadiumTeamList->addItem(sort.top().getTeamName());
            ui->stadiumTypeList->addItem(sort.top().getRoofType());
            sort.removeTop();
        }

        ui->stadiumAdditionalInfo->setNum(count);
        ui->stadiumAdditionalInfoLabel->setText("Number of open roof stadiums:");
    }
    else if(arg1->iconText() == "Closest to Center Field")
    {
        type = "Closest";
        ui->stadiumListType->setText(type);

        for(unsigned int i = 0; i < teams.size(); i++)
        {
            int temp = teams[i].getDistanceToCenter();
            sortNums.insert(teams[i], temp);
        }

        int shortestDist = sortNums.top().getDistanceToCenter();
        while(!sortNums.empty())
        {
            if(sortNums.top().getDistanceToCenter() == shortestDist) {
                ui->stadiumList->addItem(sortNums.top().getStadiumName());
                ui->stadiumTeamList->addItem(sortNums.top().getTeamName());
                ui->stadiumTypeList->addItem(QString::number(sortNums.top().getDistanceToCenter()));
                sortNums.removeTop();
            }
            else {
                sortNums.removeTop();
            }
        }
    }
    else if(arg1->iconText() == "Furthest from Center Field")
    {
        type = "Furthest";
        ui->stadiumListType->setText(type);

        for(unsigned int i = 0; i < teams.size(); i++)
        {
            int temp = 1000 - teams[i].getDistanceToCenter();
            sortNums.insert(teams[i], temp);
        }

        int greatestDist = sortNums.top().getDistanceToCenter();
        while(!sortNums.empty())
        {
            if(sortNums.top().getDistanceToCenter() == greatestDist) {
                ui->stadiumList->addItem(sortNums.top().getStadiumName());
                ui->stadiumTeamList->addItem(sortNums.top().getTeamName());
                ui->stadiumTypeList->addItem(QString::number(sortNums.top().getDistanceToCenter()));
                sortNums.removeTop();
            }
            else {
                sortNums.removeTop();
            }
        }
    }
}

// CART/ORDER SCREEN
/*********************************************************************/
void MainWindow::on_cartButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->cartPage);
}








