#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QList>
#include <QStringList>
#include<QDebug>
#include<QComboBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , comboIndex{0}
{
    ui->setupUi(this);
    ui->cb_animal->setEnabled(false);
    ui->progressBar->setFormat("%p%");
    ui->progressBar->setMaximum(10);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_choose_clicked(bool checked)
{
    ui->cb_animal->setCurrentIndex(++comboIndex >= ui->cb_animal->count() ? comboIndex = 0 : comboIndex);
    //qDebug() << ui->cb_animal->count();
    //qDebug() << comboIndex;
    int progerssBarValue = ui->progressBar->value();
    ui->progressBar->setValue(++progerssBarValue > 10 ? progerssBarValue = 0 : progerssBarValue);
}


void MainWindow::on_btn_lock_toggled(bool checked)
{
    checked ? ui->btn_choose->setEnabled(false) : ui->btn_choose->setEnabled(true);
}

