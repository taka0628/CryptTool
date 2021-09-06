#include "sha_ver_wind.h"
#include "ui_sha_ver_wind.h"

sha_ver_wind::sha_ver_wind(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sha_ver_wind)
{
    ui->setupUi(this);
}

sha_ver_wind::~sha_ver_wind()
{
    delete ui;
}

void sha_ver_wind::on_radioButton_sha1_clicked()
{
//    ui->horizontalLayout_hashBit->setEnabled(false);
}
