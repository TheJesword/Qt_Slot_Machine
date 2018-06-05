#include "controller.h"
#include <QLabel>

Controller::Controller()
{
    Reel *worker = new Reel;
    worker->moveToThread(&workerThread);

    // Multithreading
    connect(&workerThread, &QThread::finished, worker, &QObject::deleteLater);
    connect(this, &Controller::getNumber, worker, &Reel::getLetter);
    connect(worker, &Reel::resultReady, this, &Controller::handleResult);

    workerThread.start();
}

void Controller::handleResult(const char &pLetter)
{
    letter = pLetter;
}

char Controller::getLetter()
{
    return letter;
}

Controller::~Controller() {
    workerThread.quit();
    workerThread.wait();
}
