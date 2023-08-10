#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMouseEvent>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("mouse01");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        int x = event->x();
        int y = event->y();
        QString coordinates = "X: " + QString::number(x) + ", Y: " + QString::number(y);
        ui->label->setText(coordinates);
    }
}
