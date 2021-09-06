#ifndef SHA_VER_WIND_H
#define SHA_VER_WIND_H

#include <QWidget>

namespace Ui {
class sha_ver_wind;
}

class sha_ver_wind : public QWidget
{
    Q_OBJECT

public:
    explicit sha_ver_wind(QWidget *parent = 0);
    ~sha_ver_wind();

private slots:
    void on_radioButton_sha1_clicked();

private:
    Ui::sha_ver_wind *ui;
};

#endif // SHA_VER_WIND_H
