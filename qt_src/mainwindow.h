#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <sub_test.h>
#include <aes_wind.h>
#include <rsa_wind.h>
#include <sha_mode_wind.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_aes_pressed();

    void on_pushButton_rsa_pressed();

    void on_pushButton_sha_clicked();

    void on_pushButton_sha_pressed();

private:
    Ui::MainWindow *ui;
    sub_test *sub_wind;
    aes_wind *aes_wind_;
    rsa_wind *rsa_wind_;
    sha_mode_wind *sha_mode_wind_;
};

#endif // MAINWINDOW_H
