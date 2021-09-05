/********************************************************************************
** Form generated from reading UI file 'aes_wind.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AES_WIND_H
#define UI_AES_WIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aes_wind
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_aes128;
    QRadioButton *radioButton_aes256;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_key;
    QLabel *label_check_key;
    QLabel *label;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_iv;
    QLabel *label_check_iv;
    QLabel *label_2;
    QTextEdit *textEdit_in;
    QLabel *label_3;
    QPushButton *pushButton_enc;
    QPushButton *pushButton_dec;
    QPushButton *pushButton_cpy;
    QGroupBox *groupBox_status;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_status_mode;
    QLabel *label_status_bit;
    QTextBrowser *textBrowser_result;

    void setupUi(QDialog *aes_wind)
    {
        if (aes_wind->objectName().isEmpty())
            aes_wind->setObjectName(QStringLiteral("aes_wind"));
        aes_wind->resize(418, 537);
        horizontalLayoutWidget = new QWidget(aes_wind);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 20, 311, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_aes128 = new QRadioButton(horizontalLayoutWidget);
        radioButton_aes128->setObjectName(QStringLiteral("radioButton_aes128"));
        radioButton_aes128->setChecked(true);

        horizontalLayout->addWidget(radioButton_aes128);

        radioButton_aes256 = new QRadioButton(horizontalLayoutWidget);
        radioButton_aes256->setObjectName(QStringLiteral("radioButton_aes256"));

        horizontalLayout->addWidget(radioButton_aes256);

        horizontalLayoutWidget_2 = new QWidget(aes_wind);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 90, 381, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_key = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_key->setObjectName(QStringLiteral("lineEdit_key"));

        horizontalLayout_2->addWidget(lineEdit_key);

        label_check_key = new QLabel(horizontalLayoutWidget_2);
        label_check_key->setObjectName(QStringLiteral("label_check_key"));

        horizontalLayout_2->addWidget(label_check_key);

        horizontalLayout_2->setStretch(0, 10);
        horizontalLayout_2->setStretch(1, 2);
        label = new QLabel(aes_wind);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 67, 17));
        horizontalLayoutWidget_3 = new QWidget(aes_wind);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 140, 381, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_iv = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_iv->setObjectName(QStringLiteral("lineEdit_iv"));

        horizontalLayout_3->addWidget(lineEdit_iv);

        label_check_iv = new QLabel(horizontalLayoutWidget_3);
        label_check_iv->setObjectName(QStringLiteral("label_check_iv"));

        horizontalLayout_3->addWidget(label_check_iv);

        horizontalLayout_3->setStretch(0, 10);
        horizontalLayout_3->setStretch(1, 2);
        label_2 = new QLabel(aes_wind);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 120, 67, 17));
        textEdit_in = new QTextEdit(aes_wind);
        textEdit_in->setObjectName(QStringLiteral("textEdit_in"));
        textEdit_in->setGeometry(QRect(20, 200, 311, 91));
        label_3 = new QLabel(aes_wind);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 180, 67, 17));
        pushButton_enc = new QPushButton(aes_wind);
        pushButton_enc->setObjectName(QStringLiteral("pushButton_enc"));
        pushButton_enc->setGeometry(QRect(20, 290, 89, 25));
        pushButton_dec = new QPushButton(aes_wind);
        pushButton_dec->setObjectName(QStringLiteral("pushButton_dec"));
        pushButton_dec->setGeometry(QRect(240, 290, 89, 25));
        pushButton_cpy = new QPushButton(aes_wind);
        pushButton_cpy->setObjectName(QStringLiteral("pushButton_cpy"));
        pushButton_cpy->setGeometry(QRect(330, 376, 31, 25));
        groupBox_status = new QGroupBox(aes_wind);
        groupBox_status->setObjectName(QStringLiteral("groupBox_status"));
        groupBox_status->setGeometry(QRect(20, 420, 311, 91));
        gridLayoutWidget = new QWidget(groupBox_status);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 291, 51));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_status_mode = new QLabel(gridLayoutWidget);
        label_status_mode->setObjectName(QStringLiteral("label_status_mode"));

        gridLayout->addWidget(label_status_mode, 0, 1, 1, 1);

        label_status_bit = new QLabel(gridLayoutWidget);
        label_status_bit->setObjectName(QStringLiteral("label_status_bit"));

        gridLayout->addWidget(label_status_bit, 1, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 10);
        textBrowser_result = new QTextBrowser(aes_wind);
        textBrowser_result->setObjectName(QStringLiteral("textBrowser_result"));
        textBrowser_result->setGeometry(QRect(20, 320, 311, 81));

        retranslateUi(aes_wind);

        QMetaObject::connectSlotsByName(aes_wind);
    } // setupUi

    void retranslateUi(QDialog *aes_wind)
    {
        aes_wind->setWindowTitle(QApplication::translate("aes_wind", "Dialog", Q_NULLPTR));
        radioButton_aes128->setText(QApplication::translate("aes_wind", "AES-128", Q_NULLPTR));
        radioButton_aes256->setText(QApplication::translate("aes_wind", "AES-256", Q_NULLPTR));
        label_check_key->setText(QString());
        label->setText(QApplication::translate("aes_wind", "Key", Q_NULLPTR));
        label_check_iv->setText(QString());
        label_2->setText(QApplication::translate("aes_wind", "iv", Q_NULLPTR));
        label_3->setText(QApplication::translate("aes_wind", "\345\205\245\345\212\233", Q_NULLPTR));
        pushButton_enc->setText(QApplication::translate("aes_wind", "encrypt", Q_NULLPTR));
        pushButton_dec->setText(QApplication::translate("aes_wind", "decrypt", Q_NULLPTR));
        pushButton_cpy->setText(QApplication::translate("aes_wind", "cpy", Q_NULLPTR));
        groupBox_status->setTitle(QApplication::translate("aes_wind", "status", Q_NULLPTR));
        label_4->setText(QApplication::translate("aes_wind", "\346\232\227\345\217\267\343\203\242\343\203\274\343\203\211: ", Q_NULLPTR));
        label_5->setText(QApplication::translate("aes_wind", "key bit", Q_NULLPTR));
        label_status_mode->setText(QString());
        label_status_bit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class aes_wind: public Ui_aes_wind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AES_WIND_H
