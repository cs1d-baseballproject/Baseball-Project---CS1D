#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileInfo>
#include <QMenu>
#include <QListWidget>
#include "priorityQueue.h"
#include "database.h"

namespace Ui {
class MainWindow;
}

/*!
 * \brief The Main Window class
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // HOME SCREEN
    void on_homeButton_clicked();

    // TEAM LIST SCREEN
    void on_teamsButton_triggered(QAction *arg1);
    void on_sortAllTeam_clicked();
    void on_sortAllStadium_clicked();

    // STADIUM LIST SCREEN

    // SIGN IN SCREEN
    void on_loginButton_clicked();
    void on_signIn_clicked();
    void on_cancelLogin_clicked();

    // ADMIN SCREEN
    void on_signOut_clicked();
    void on_initDB_clicked();
    void on_editStadiumsButton_clicked();       // stadiums
    void on_saveStadiumModification_clicked();  //  "
    void on_editSouvenirsButton_clicked();      // souvenirs
    void on_saveSouvenirModification_clicked(); //  "
    void on_addNewSouvenir_clicked();           //  "

    // TEAM INFORMATION
    void on_teamTList_itemDoubleClicked(QListWidgetItem *item);
    void on_returnToTeamList_clicked();

private:
    Ui::MainWindow *ui;
    priorityQueue<team, QString> sort;
    std::vector<team> teams;
    std::vector<Distance> edgeList;
    database* data;
    bool isAdmin{false};

    void sortTeams(bool byStadium, QString league = "");

    // admin line edits
    std::vector<QLineEdit*> modSouvName;
    std::vector<QLineEdit*> modSouvPrice;
    void clearLineEdits();
    void initLineEdits(unsigned int);
};

#endif // MAINWINDOW_H
