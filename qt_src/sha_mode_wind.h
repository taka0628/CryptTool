#ifndef SHA_MODE_WIND_H
#define SHA_MODE_WIND_H

#include <QDialog>
#include <../include/dynamic_mem_c.hpp>
#include <../include/sha_c.hpp>

#include <cctype>

namespace Ui {
class sha_mode_wind;
}

class sha_mode_wind : public QDialog
{
    Q_OBJECT

public:
    explicit sha_mode_wind(QWidget *parent = 0);
    ~sha_mode_wind();

private slots:
    void on_radioButton_sha1_clicked();

    void on_radioButton_sha2_clicked();

    void on_radioButton_sha3_clicked();

    void on_radioButton_bit_224_clicked();

    void on_radioButton_bit_256_clicked();

    void on_radioButton_bit_384_clicked();

    void on_radioButton_bit_512_clicked();

    void on_lineEdit_input_textChanged(const QString &arg1);

private:
    Ui::sha_mode_wind *ui;

    void set_button(bool set);
    int get_size(const std::string src);
};

enum class SHA_mode : int32_t
{
    sha1,
    sha2,
    sha3,
};

#endif // SHA_MODE_WIND_H
