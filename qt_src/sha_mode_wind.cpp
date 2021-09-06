#include "sha_mode_wind.h"
#include "ui_sha_mode_wind.h"

sha_mode_wind::sha_mode_wind(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sha_mode_wind)
{
    ui->setupUi(this);
}

sha_mode_wind::~sha_mode_wind()
{
    delete ui;
}

void sha_mode_wind::set_button(bool set){
    if(set == false){
        ui->radioButton_bit_224->setEnabled(false);
        ui->radioButton_bit_256->setEnabled(false);
        ui->radioButton_bit_384->setEnabled(false);
        ui->radioButton_bit_512->setEnabled(false);

    }else{
        ui->radioButton_bit_224->setEnabled(true);
        ui->radioButton_bit_256->setEnabled(true);
        ui->radioButton_bit_384->setEnabled(true);
        ui->radioButton_bit_512->setEnabled(true);
    }
}

void sha_mode_wind::on_radioButton_sha1_clicked()
{
    set_button(false);
}

void sha_mode_wind::on_radioButton_sha2_clicked()
{
    set_button(true);
}

void sha_mode_wind::on_radioButton_sha3_clicked()
{
    set_button(true);
}
