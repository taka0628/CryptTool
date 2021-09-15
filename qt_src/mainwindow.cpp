#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aes_wind.h"
#include "sha1_wind.h"
#include "sha2_wind.h"
#include "sub_test.h"
#include "rsa_wind.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_aes_pressed()
{
    aes_wind_ = new aes_wind(this);
    aes_wind_->show();
}

void MainWindow::on_pushButton_rsa_pressed()
{
    rsa_wind_ = new rsa_wind(this);
    rsa_wind_->show();
}

void MainWindow::on_pushButton_sha_clicked()
{
//    sha_ver_wind_ = new sha_ver_wind(this);
//    sha_ver_wind_->show();
}

void MainWindow::on_pushButton_sha_pressed()
{
    sha_mode_wind_ = new sha_mode_wind(this);
    sha_mode_wind_->show();
}
