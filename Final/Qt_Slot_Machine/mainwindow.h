#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QTime>
#include <reelobserver.h>
#include <reel.h>
#include <controller.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    // -- Functions --
    void displayReel();
    void randomNumberGenerator();
    void updateBet();
    void updateCoins();
    void addCoins();

public slots:

private slots:
    void on_betButton_clicked();
    void on_pullButton_clicked();

private:
    // --- Objects ---
    Ui::MainWindow *ui;
    Controller leftReel;
    Controller middleReel;
    Controller rightReel;
    Reel reel;
    ReelObserver reelObs;

    // ---- Variables ----
    unsigned int winnings;
    unsigned int leftNumber;
    unsigned int rightNumber;
    unsigned int middleNumber;
    unsigned int betNumber;
    unsigned int multiplier;
    unsigned int coins;
};

#endif // MAINWINDOW_H
