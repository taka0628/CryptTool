/********************************************************************************
** Form generated from reading UI file 'rsa_wind.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RSA_WIND_H
#define UI_RSA_WIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rsa_wind
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_2048;
    QRadioButton *radioButton_4096;
    QRadioButton *radioButton_8192;
    QRadioButton *radioButton_other;
    QLineEdit *lineEdit_bit;
    QGroupBox *groupBox_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_input;
    QLabel *label_input_check_bit;
    QGroupBox *groupBox_3;
    QTextBrowser *textBrowser_out_pubkey;
    QGroupBox *groupBox_4;
    QTextBrowser *textBrowser_out_privkey;
    QGroupBox *groupBox_5;
    QTextBrowser *textBrowser_output;
    QGroupBox *groupBox_6;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_padding;
    QLabel *label_status_bit;
    QPushButton *pushButton_enc;
    QPushButton *pushButton_dec;
    QPushButton *pushButton_cpy;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *rsa_wind)
    {
        if (rsa_wind->objectName().isEmpty())
            rsa_wind->setObjectName(QStringLiteral("rsa_wind"));
        rsa_wind->resize(625, 690);
        centralwidget = new QWidget(rsa_wind);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 421, 51));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 20, 421, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_2048 = new QRadioButton(horizontalLayoutWidget);
        radioButton_2048->setObjectName(QStringLiteral("radioButton_2048"));
        radioButton_2048->setChecked(true);

        horizontalLayout->addWidget(radioButton_2048);

        radioButton_4096 = new QRadioButton(horizontalLayoutWidget);
        radioButton_4096->setObjectName(QStringLiteral("radioButton_4096"));

        horizontalLayout->addWidget(radioButton_4096);

        radioButton_8192 = new QRadioButton(horizontalLayoutWidget);
        radioButton_8192->setObjectName(QStringLiteral("radioButton_8192"));

        horizontalLayout->addWidget(radioButton_8192);

        radioButton_other = new QRadioButton(horizontalLayoutWidget);
        radioButton_other->setObjectName(QStringLiteral("radioButton_other"));

        horizontalLayout->addWidget(radioButton_other);

        lineEdit_bit = new QLineEdit(horizontalLayoutWidget);
        lineEdit_bit->setObjectName(QStringLiteral("lineEdit_bit"));

        horizontalLayout->addWidget(lineEdit_bit);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 10);
        horizontalLayout->setStretch(2, 10);
        horizontalLayout->setStretch(3, 8);
        horizontalLayout->setStretch(4, 12);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 100, 421, 51));
        horizontalLayoutWidget_2 = new QWidget(groupBox_2);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 20, 421, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_input = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_input->setObjectName(QStringLiteral("lineEdit_input"));

        horizontalLayout_2->addWidget(lineEdit_input);

        label_input_check_bit = new QLabel(horizontalLayoutWidget_2);
        label_input_check_bit->setObjectName(QStringLiteral("label_input_check_bit"));

        horizontalLayout_2->addWidget(label_input_check_bit);

        horizontalLayout_2->setStretch(0, 100);
        horizontalLayout_2->setStretch(1, 25);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 200, 531, 121));
        textBrowser_out_pubkey = new QTextBrowser(groupBox_3);
        textBrowser_out_pubkey->setObjectName(QStringLiteral("textBrowser_out_pubkey"));
        textBrowser_out_pubkey->setGeometry(QRect(0, 20, 531, 101));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(30, 330, 531, 121));
        textBrowser_out_privkey = new QTextBrowser(groupBox_4);
        textBrowser_out_privkey->setObjectName(QStringLiteral("textBrowser_out_privkey"));
        textBrowser_out_privkey->setGeometry(QRect(0, 20, 531, 101));
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(30, 450, 531, 121));
        textBrowser_output = new QTextBrowser(groupBox_5);
        textBrowser_output->setObjectName(QStringLiteral("textBrowser_output"));
        textBrowser_output->setGeometry(QRect(0, 20, 531, 101));
        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(30, 580, 391, 80));
        gridLayoutWidget = new QWidget(groupBox_6);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 20, 391, 61));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_padding = new QLabel(gridLayoutWidget);
        label_padding->setObjectName(QStringLiteral("label_padding"));

        gridLayout->addWidget(label_padding, 0, 1, 1, 1);

        label_status_bit = new QLabel(gridLayoutWidget);
        label_status_bit->setObjectName(QStringLiteral("label_status_bit"));

        gridLayout->addWidget(label_status_bit, 1, 1, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 10);
        pushButton_enc = new QPushButton(centralwidget);
        pushButton_enc->setObjectName(QStringLiteral("pushButton_enc"));
        pushButton_enc->setGeometry(QRect(30, 150, 89, 25));
        pushButton_dec = new QPushButton(centralwidget);
        pushButton_dec->setObjectName(QStringLiteral("pushButton_dec"));
        pushButton_dec->setGeometry(QRect(270, 150, 89, 25));
        pushButton_cpy = new QPushButton(centralwidget);
        pushButton_cpy->setObjectName(QStringLiteral("pushButton_cpy"));
        pushButton_cpy->setGeometry(QRect(560, 546, 31, 25));
        rsa_wind->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(rsa_wind);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        rsa_wind->setStatusBar(statusbar);

        retranslateUi(rsa_wind);

        QMetaObject::connectSlotsByName(rsa_wind);
    } // setupUi

    void retranslateUi(QMainWindow *rsa_wind)
    {
        rsa_wind->setWindowTitle(QApplication::translate("rsa_wind", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("rsa_wind", "RSA bit", Q_NULLPTR));
        radioButton_2048->setText(QApplication::translate("rsa_wind", "2048", Q_NULLPTR));
        radioButton_4096->setText(QApplication::translate("rsa_wind", "4096", Q_NULLPTR));
        radioButton_8192->setText(QApplication::translate("rsa_wind", "8192", Q_NULLPTR));
        radioButton_other->setText(QApplication::translate("rsa_wind", "other", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("rsa_wind", "\345\205\245\345\212\233", Q_NULLPTR));
        label_input_check_bit->setText(QString());
        groupBox_3->setTitle(QApplication::translate("rsa_wind", "Public Key", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("rsa_wind", "Private Key", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("rsa_wind", "\345\207\272\345\212\233", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("rsa_wind", "Status", Q_NULLPTR));
        label->setText(QApplication::translate("rsa_wind", "Padding: ", Q_NULLPTR));
        label_2->setText(QApplication::translate("rsa_wind", "bit: ", Q_NULLPTR));
        label_padding->setText(QApplication::translate("rsa_wind", "RSA_PKCS1_OAEP_PADDING", Q_NULLPTR));
        label_status_bit->setText(QApplication::translate("rsa_wind", "TextLabel", Q_NULLPTR));
        pushButton_enc->setText(QApplication::translate("rsa_wind", "encrypt", Q_NULLPTR));
        pushButton_dec->setText(QApplication::translate("rsa_wind", "decrypt", Q_NULLPTR));
        pushButton_cpy->setText(QApplication::translate("rsa_wind", "cpy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class rsa_wind: public Ui_rsa_wind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RSA_WIND_H
