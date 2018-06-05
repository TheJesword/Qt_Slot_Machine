/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *betButton;
    QPushButton *pullButton;
    QLabel *middleReelLabel;
    QLabel *rightReelLabel;
    QLabel *leftReelLabel;
    QLabel *betNumberLabel;
    QLabel *betErrorLabel;
    QLabel *pullErrorLabel;
    QLabel *coinsLabel;
    QLabel *noCoinsLabel;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(622, 380);
        MainWindow->setStyleSheet(QLatin1String("background: url(Slot_Machine_Image) no-repeat;\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        betButton = new QPushButton(centralWidget);
        betButton->setObjectName(QStringLiteral("betButton"));
        betButton->setGeometry(QRect(139, 160, 71, 111));
        betButton->setStyleSheet(QLatin1String("font: \"Apple Chancery\", cursive;\n"
"font-size: 25px;"));
        pullButton = new QPushButton(centralWidget);
        pullButton->setObjectName(QStringLiteral("pullButton"));
        pullButton->setGeometry(QRect(540, 190, 61, 121));
        pullButton->setStyleSheet(QLatin1String("background: transparent;\n"
"border: 2px solid;\n"
"border-radius: 25%;\n"
"border-color: red;\n"
"font: \"Apple Chancery\", cursive;\n"
"font-size: 20px;\n"
""));
        middleReelLabel = new QLabel(centralWidget);
        middleReelLabel->setObjectName(QStringLiteral("middleReelLabel"));
        middleReelLabel->setGeometry(QRect(315, 170, 51, 101));
        middleReelLabel->setStyleSheet(QLatin1String("background: transparent;\n"
"font: \"URW Chancery L\", cursive;\n"
"font-size: 60px;"));
        rightReelLabel = new QLabel(centralWidget);
        rightReelLabel->setObjectName(QStringLiteral("rightReelLabel"));
        rightReelLabel->setGeometry(QRect(395, 170, 51, 101));
        rightReelLabel->setStyleSheet(QLatin1String("background: transparent;\n"
"font: \"URW Chancery L\", cursive;\n"
"font-size: 60px;"));
        leftReelLabel = new QLabel(centralWidget);
        leftReelLabel->setObjectName(QStringLiteral("leftReelLabel"));
        leftReelLabel->setGeometry(QRect(245, 170, 51, 101));
        leftReelLabel->setStyleSheet(QLatin1String("background: transparent;\n"
"font: \"URW Chancery L\", cursive;\n"
"font-size: 60px;"));
        betNumberLabel = new QLabel(centralWidget);
        betNumberLabel->setObjectName(QStringLiteral("betNumberLabel"));
        betNumberLabel->setGeometry(QRect(60, 180, 61, 81));
        betNumberLabel->setStyleSheet(QLatin1String("background:transparent;\n"
"font: \"Apple Chancery\", cursive;\n"
"font-size: 25px;"));
        betErrorLabel = new QLabel(centralWidget);
        betErrorLabel->setObjectName(QStringLiteral("betErrorLabel"));
        betErrorLabel->setGeometry(QRect(245, 70, 211, 51));
        betErrorLabel->setStyleSheet(QLatin1String("background: transparent;\n"
"font: \"Apple Chancery\", cursive;\n"
"font-size: 25px;"));
        pullErrorLabel = new QLabel(centralWidget);
        pullErrorLabel->setObjectName(QStringLiteral("pullErrorLabel"));
        pullErrorLabel->setGeometry(QRect(200, 70, 241, 51));
        pullErrorLabel->setStyleSheet(QLatin1String("background: transparent;\n"
"font: \"Apple Chancery\", cursive;\n"
"font-size: 25px;"));
        coinsLabel = new QLabel(centralWidget);
        coinsLabel->setObjectName(QStringLiteral("coinsLabel"));
        coinsLabel->setGeometry(QRect(510, 20, 51, 51));
        coinsLabel->setStyleSheet(QLatin1String("background: transparent;\n"
"font: \"Apple Chancery\", cursive;\n"
"font-size: 25px;"));
        noCoinsLabel = new QLabel(centralWidget);
        noCoinsLabel->setObjectName(QStringLiteral("noCoinsLabel"));
        noCoinsLabel->setGeometry(QRect(170, 70, 241, 41));
        noCoinsLabel->setStyleSheet(QLatin1String("background: transparent;\n"
"font: \"Apple Chancery\", cursive;\n"
"font-size: 25px;"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 10, 211, 61));
        label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: \"Apple Chancery\", cursive;\n"
"font-size: 50px;"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(460, 10, 81, 71));
        label_2->setStyleSheet(QLatin1String("background: transparent;\n"
"font: \"Apple Chancery\", cursive;\n"
"font-size: 25px;"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 622, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        betButton->setText(QApplication::translate("MainWindow", "Bet", nullptr));
        pullButton->setText(QApplication::translate("MainWindow", "PULL", nullptr));
        middleReelLabel->setText(QString());
        rightReelLabel->setText(QString());
        leftReelLabel->setText(QString());
        betNumberLabel->setText(QString());
        betErrorLabel->setText(QString());
        pullErrorLabel->setText(QString());
        coinsLabel->setText(QString());
        noCoinsLabel->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Slot Machine", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Coins:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
