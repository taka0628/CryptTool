#include "sha_mode_wind.h"
#include "ui_sha_mode_wind.h"

static int CurrentShaMode = 2;
static int CurrentShaBit = 224;


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


using namespace std;

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
    CurrentShaMode = 1;
    QString text = ui->lineEdit_input->text();
    if(text.length() > 0){
        this->on_lineEdit_input_textChanged(text);
    }
}

void sha_mode_wind::on_radioButton_sha2_clicked()
{
    set_button(true);
    CurrentShaMode = 2;
    QString text = ui->lineEdit_input->text();
    if(text.length() > 0){
        this->on_lineEdit_input_textChanged(text);
    }
}

void sha_mode_wind::on_radioButton_sha3_clicked()
{
    set_button(true);
    CurrentShaMode = 3;
    QString text = ui->lineEdit_input->text();
    if(text.length() > 0){
        this->on_lineEdit_input_textChanged(text);
    }
}

void sha_mode_wind::on_radioButton_bit_224_clicked()
{
    CurrentShaBit = 224;
    QString text = ui->lineEdit_input->text();
    if(text.length() > 0){
        this->on_lineEdit_input_textChanged(text);
    }
}

void sha_mode_wind::on_radioButton_bit_256_clicked()
{
    CurrentShaBit = 256;
    QString text = ui->lineEdit_input->text();
    if(text.length() > 0){
        this->on_lineEdit_input_textChanged(text);
    }
}

void sha_mode_wind::on_radioButton_bit_384_clicked()
{
    CurrentShaBit = 384;
    QString text = ui->lineEdit_input->text();
    if(text.length() > 0){
        this->on_lineEdit_input_textChanged(text);
    }
}

void sha_mode_wind::on_radioButton_bit_512_clicked()
{
    CurrentShaBit = 512;
    QString text = ui->lineEdit_input->text();
    if(text.length() > 0){
        this->on_lineEdit_input_textChanged(text);
    }
}

int sha_mode_wind::get_size(const string src){
    int size = 0;
    for(size_t i = 0; i < src.size(); i++){
        if(isalpha(src[i]) || isdigit(src[i]) || isspace(src[i])){
            size += 8;
        }else{
            size += 8*3;
        }
    }
}

void sha_mode_wind::on_lineEdit_input_textChanged(const QString &arg1)
{
    if(CurrentShaMode < 1 || CurrentShaMode > 3){
        return;
    }
    if(CurrentShaBit != 224 && CurrentShaBit != 256 && CurrentShaBit != 384 && CurrentShaBit != 512){
        return;
    }
    string input_text = arg1.toStdString();
    QString output;
    ostringstream oss;
    int iv_size = input_text.size();
    iv_size = iv_size * 8;
    oss<< iv_size;
    output.push_back(oss.str().c_str());

    output.push_back("bit");
    ui->label_input_bit->setText(output);

    if(input_text.size() == 0){
        ui->textBrowser_hash->setText("");
        return;
    }

    SHA_c sha;
    string hash;
    dynamic_mem_c hashBn;
    switch (CurrentShaMode) {
    case 1:
        hash = sha.sha1_cal(input_text);
        break;
    case 2:
        switch (CurrentShaBit) {
        case 224:
            hash = sha.sha2_cal(input_text, SHA_c::SHA2_bit::SHA_224);
            break;
        case 256:
            hash = sha.sha2_cal(input_text, SHA_c::SHA2_bit::SHA_256);
            break;
        case 384:
            hash = sha.sha2_cal(input_text, SHA_c::SHA2_bit::SHA_384);
            break;
        case 512:
            hash = sha.sha2_cal(input_text, SHA_c::SHA2_bit::SHA_512);
            break;
        default:
            break;
        }
        break;
    case 3:
        switch (CurrentShaBit) {
        case 224:
            hashBn.d_new(SHA224_DIGEST_LENGTH);
            sha.sha3_cal(input_text, hashBn,SHA_c::SHA3_bit::SHA_224);
            break;
        case 256:
            hashBn.d_new(SHA256_DIGEST_LENGTH);
            sha.sha3_cal(input_text, hashBn,SHA_c::SHA3_bit::SHA_256);
            break;
        case 384:
            hashBn.d_new(SHA384_DIGEST_LENGTH);
            sha.sha3_cal(input_text, hashBn,SHA_c::SHA3_bit::SHA_384);
            break;
        case 512:
            hashBn.d_new(SHA512_DIGEST_LENGTH);
            sha.sha3_cal(input_text, hashBn,SHA_c::SHA3_bit::SHA_512);
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }

    if(CurrentShaMode == 3){
        hash = sha.str2hex(hashBn);
    }else if(CurrentShaMode == 1 || CurrentShaMode == 2){
        hash = sha.str2hex(hash);
    }else{
        return;
    }

    ui->textBrowser_hash->setText(QString::fromStdString(hash));
    ui->label_hash_bit->setText(QString::fromStdString(to_string(CurrentShaBit)));
    if(CurrentShaMode == 1){
        ui->label_hash_mode->setText("SHA-1");
    }else if(CurrentShaMode == 2){
        ui->label_hash_mode->setText("SHA-2");
    }else{
        ui->label_hash_mode->setText("SHA-3");
    }

}
