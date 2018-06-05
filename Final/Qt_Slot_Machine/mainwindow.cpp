#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // -- Initializing all the variables
    winnings = 0;
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
        //displayReel();
        ReelObserver reb(&reel, leftNumber, middleNumber, rightNumber);
        reel.setValue(betNumber);
        betNumber = 0;
        updateBet();
        ui->betErrorLabel->setText("");
        displayReel();
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
   coins = coins + winnings;
   ui->coinsWonLabel->setText(QString::number(winnings));
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
            randomNumberGenerator();

            if(leftNumber == 1 && middleNumber == 1 && rightNumber == 1)
                winnings = betNumber * 1;
            else if(leftNumber == 2 && middleNumber == 2 && rightNumber == 2)
                winnings = betNumber * 2;
            else if(leftNumber == 3 && middleNumber == 3 && rightNumber == 3)
               winnings = betNumber * 3;
            else if(leftNumber == 4 && middleNumber == 4 && rightNumber == 4)
                winnings = betNumber * 4;
            else if(leftNumber == 5 && middleNumber == 5 && rightNumber == 5)
                winnings = betNumber * 5;
            else if(leftNumber == 6 && middleNumber == 6 && rightNumber == 6)
                winnings = betNumber * 6;
            else if(leftNumber == 7 && middleNumber == 7 && rightNumber == 7)
                winnings = betNumber * 7;
            else if(leftNumber == 1 && middleNumber == 2 && rightNumber == 3)
                winnings = betNumber * 8;
            else if(leftNumber == 4 && middleNumber == 5 && rightNumber == 6)
                winnings = betNumber * 9;
            else
                winnings = betNumber * 0;

            emit leftReel.getNumber(leftNumber);
            emit middleReel.getNumber(middleNumber);
            emit rightReel.getNumber(rightNumber);
        }
        else
        {
            ui->betErrorLabel->setText("Max bet is 3!");
        }
    }
}



