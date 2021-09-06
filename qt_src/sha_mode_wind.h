#ifndef SHA_MODE_WIND_H
#define SHA_MODE_WIND_H

#include <QDialog>

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

private:
    Ui::sha_mode_wind *ui;

    void set_button(bool set);
};

#endif // SHA_MODE_WIND_H
