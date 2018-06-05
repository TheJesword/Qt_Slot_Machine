#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // -- Initializing all the variables
    winnings = 0;
    multiplier = 0;
    betNumber = 0;
    leftNumber = 0;
    rightNumber = 0;
    middleNumber = 0;
    coins = 50;

    // having the current bet 0 display first thing same with coins
   updateBet();
   updateCoins();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pullButton_clicked()
{
    // If there hasn't been a bet placed, it will display an error
    // that there needs to be a bet placed
    if(betNumber == 0)
    {
        ui->pullErrorLabel->setText("You must place bet first!");
    }
    else
    {
        displayReel();
        ReelObserver reb(&reel, leftNumber, rightNumber, middleNumber);
        reel.setValue(betNumber);
        betNumber = 0;
        updateBet();
        ui->betErrorLabel->setText("");
    }
}

// RandomNumber generator
void MainWindow::randomNumberGenerator()
{
    srand (time(NULL));
    leftNumber = rand() % 7 + 1;
    rightNumber = rand() % 7 + 1;
    middleNumber = rand() % 7 + 1;
}


// updating the ui bet count
void MainWindow::updateBet()
{
    ui->betNumberLabel->setText(QString::number(betNumber));
}


// updatting the coins gains or losses
void MainWindow::updateCoins()
{
    ui->coinsLabel->setText(QString::number(coins));
}


// adding coins from the winnings
void MainWindow::addCoins()
{

   reelObs.setBet(betNumber);
   qDebug() << "main: "<< reelObs.getBet();
   // qDebug() << "Multiplier from MainWindow: " << multiplier;
   // coins = coins + tempNumber;
}


// display the reels to the ui and calls a few other functions to keep the screen updated
void MainWindow::displayReel()
{
    ui->leftReelLabel->setText(QString(leftReel.getLetter()));
    ui->middleReelLabel->setText(QString(middleReel.getLetter()));
    ui->rightReelLabel->setText(QString(rightReel.getLetter()));
    addCoins();
    updateCoins();
}


void MainWindow::on_betButton_clicked()
{
    // it will only let you place a bet if you have coins avaiable
    // if no coins left, it won't let you play and send error message
    if(coins == 0)
    {
        ui->noCoinsLabel->setText("No More Coins!");
    }
    else
    {
        if(betNumber < 3 && coins != 0)
        {
            betNumber++;
            coins--;
            updateCoins();
            updateBet();
            ui->pullErrorLabel->setText("");
            //randomNumberGenerator();

            leftNumber = 1;
            middleNumber = 3;
            rightNumber = 2;

            emit leftReel.getNumber(leftNumber);
            emit middleReel.getNumber(rightNumber);
            emit rightReel.getNumber(middleNumber);
        }
        else
        {
            ui->betErrorLabel->setText("Max bet is 3");
        }
    }
}



