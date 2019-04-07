#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMenu>

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
    void on_initDB_clicked();

    void on_loginButton_clicked();

    void on_signIn_clicked();

    void on_cancelLogin_clicked();

    void on_homeButton_clicked();

    void on_teamsButton_triggered(QAction *arg1);

    void on_sortAllTeam_clicked();

    void on_sortAllStadium_clicked();

private:
    Ui::MainWindow *ui;

    bool isAdmin{false};
};

#endif // MAINWINDOW_H
