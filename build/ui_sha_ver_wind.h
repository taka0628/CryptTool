/********************************************************************************
** Form generated from reading UI file 'sha_ver_wind.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHA_VER_WIND_H
#define UI_SHA_VER_WIND_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sha_ver_wind
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_hashVersion;
    QRadioButton *radioButton_sha1;
    QRadioButton *radioButton_sha2;
    QRadioButton *radioButton_sha3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_hashBit;
    QRadioButton *radioButton_bit_224;
    QRadioButton *radioButton_bit_256;
    QRadioButton *radioButton_bit_384;
    QRadioButton *radioButton_bit_512;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox_3;
    QTextBrowser *textBrowser_hash;
    QGroupBox *groupBox_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_input;
    QLabel *label_input_bit;
    QGroupBox *groupBox_4;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_hash_mode;
    QLabel *label_hash_bit;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_hashBit_2;
    QRadioButton *radioButton_bit_225;
    QRadioButton *radioButton_bit_257;
    QRadioButton *radioButton_bit_385;
    QRadioButton *radioButton_bit_513;
    QGroupBox *groupBox_5;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_input_2;
    QLabel *label_input_bit_2;
    QGroupBox *groupBox_6;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_hash_mode_2;
    QLabel *label_hash_bit_2;
    QGroupBox *groupBox_7;
    QTextBrowser *textBrowser_hash_2;
    QLabel *label_7;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_hashVersion_2;
    QRadioButton *radioButton_sha1_2;
    QRadioButton *radioButton_sha2_2;
    QRadioButton *radioButton_sha3_2;
    QLabel *label_8;

    void setupUi(QWidget *sha_ver_wind)
    {
        if (sha_ver_wind->objectName().isEmpty())
            sha_ver_wind->setObjectName(QStringLiteral("sha_ver_wind"));
        sha_ver_wind->resize(403, 479);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sha_ver_wind->sizePolicy().hasHeightForWidth());
        sha_ver_wind->setSizePolicy(sizePolicy);
        sha_ver_wind->setAcceptDrops(false);
        horizontalLayoutWidget = new QWidget(sha_ver_wind);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(39, 50, 321, 31));
        horizontalLayout_hashVersion = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_hashVersion->setObjectName(QStringLiteral("horizontalLayout_hashVersion"));
        horizontalLayout_hashVersion->setContentsMargins(0, 0, 0, 0);
        radioButton_sha1 = new QRadioButton(horizontalLayoutWidget);
        radioButton_sha1->setObjectName(QStringLiteral("radioButton_sha1"));

        horizontalLayout_hashVersion->addWidget(radioButton_sha1);

        radioButton_sha2 = new QRadioButton(horizontalLayoutWidget);
        radioButton_sha2->setObjectName(QStringLiteral("radioButton_sha2"));

        horizontalLayout_hashVersion->addWidget(radioButton_sha2);

        radioButton_sha3 = new QRadioButton(horizontalLayoutWidget);
        radioButton_sha3->setObjectName(QStringLiteral("radioButton_sha3"));

        horizontalLayout_hashVersion->addWidget(radioButton_sha3);

        horizontalLayoutWidget_2 = new QWidget(sha_ver_wind);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(40, 110, 321, 31));
        horizontalLayout_hashBit = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_hashBit->setObjectName(QStringLiteral("horizontalLayout_hashBit"));
        horizontalLayout_hashBit->setContentsMargins(0, 0, 0, 0);
        radioButton_bit_224 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_bit_224->setObjectName(QStringLiteral("radioButton_bit_224"));

        horizontalLayout_hashBit->addWidget(radioButton_bit_224);

        radioButton_bit_256 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_bit_256->setObjectName(QStringLiteral("radioButton_bit_256"));

        horizontalLayout_hashBit->addWidget(radioButton_bit_256);

        radioButton_bit_384 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_bit_384->setObjectName(QStringLiteral("radioButton_bit_384"));

        horizontalLayout_hashBit->addWidget(radioButton_bit_384);

        radioButton_bit_512 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_bit_512->setObjectName(QStringLiteral("radioButton_bit_512"));

        horizontalLayout_hashBit->addWidget(radioButton_bit_512);

        label = new QLabel(sha_ver_wind);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 101, 17));
        label_2 = new QLabel(sha_ver_wind);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 90, 67, 17));
        groupBox_3 = new QGroupBox(sha_ver_wind);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 210, 321, 141));
        textBrowser_hash = new QTextBrowser(groupBox_3);
        textBrowser_hash->setObjectName(QStringLiteral("textBrowser_hash"));
        textBrowser_hash->setGeometry(QRect(0, 20, 321, 121));
        groupBox_2 = new QGroupBox(sha_ver_wind);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 150, 321, 51));
        horizontalLayoutWidget_3 = new QWidget(groupBox_2);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 20, 321, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_input = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_input->setObjectName(QStringLiteral("lineEdit_input"));

        horizontalLayout_2->addWidget(lineEdit_input);

        label_input_bit = new QLabel(horizontalLayoutWidget_3);
        label_input_bit->setObjectName(QStringLiteral("label_input_bit"));

        horizontalLayout_2->addWidget(label_input_bit);

        horizontalLayout_2->setStretch(0, 10);
        horizontalLayout_2->setStretch(1, 2);
        groupBox_4 = new QGroupBox(sha_ver_wind);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(40, 370, 321, 80));
        gridLayoutWidget = new QWidget(groupBox_4);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, 20, 321, 61));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_hash_mode = new QLabel(gridLayoutWidget);
        label_hash_mode->setObjectName(QStringLiteral("label_hash_mode"));

        gridLayout->addWidget(label_hash_mode, 0, 1, 1, 1);

        label_hash_bit = new QLabel(gridLayoutWidget);
        label_hash_bit->setObjectName(QStringLiteral("label_hash_bit"));

        gridLayout->addWidget(label_hash_bit, 1, 1, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 10);
        horizontalLayoutWidget_4 = new QWidget(sha_ver_wind);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(271, 400, 321, 31));
        horizontalLayout_hashBit_2 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_hashBit_2->setObjectName(QStringLiteral("horizontalLayout_hashBit_2"));
        horizontalLayout_hashBit_2->setContentsMargins(0, 0, 0, 0);
        radioButton_bit_225 = new QRadioButton(horizontalLayoutWidget_4);
        radioButton_bit_225->setObjectName(QStringLiteral("radioButton_bit_225"));

        horizontalLayout_hashBit_2->addWidget(radioButton_bit_225);

        radioButton_bit_257 = new QRadioButton(horizontalLayoutWidget_4);
        radioButton_bit_257->setObjectName(QStringLiteral("radioButton_bit_257"));

        horizontalLayout_hashBit_2->addWidget(radioButton_bit_257);

        radioButton_bit_385 = new QRadioButton(horizontalLayoutWidget_4);
        radioButton_bit_385->setObjectName(QStringLiteral("radioButton_bit_385"));

        horizontalLayout_hashBit_2->addWidget(radioButton_bit_385);

        radioButton_bit_513 = new QRadioButton(horizontalLayoutWidget_4);
        radioButton_bit_513->setObjectName(QStringLiteral("radioButton_bit_513"));

        horizontalLayout_hashBit_2->addWidget(radioButton_bit_513);

        groupBox_5 = new QGroupBox(sha_ver_wind);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(271, 440, 321, 51));
        horizontalLayoutWidget_5 = new QWidget(groupBox_5);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(0, 20, 321, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_input_2 = new QLineEdit(horizontalLayoutWidget_5);
        lineEdit_input_2->setObjectName(QStringLiteral("lineEdit_input_2"));

        horizontalLayout_3->addWidget(lineEdit_input_2);

        label_input_bit_2 = new QLabel(horizontalLayoutWidget_5);
        label_input_bit_2->setObjectName(QStringLiteral("label_input_bit_2"));

        horizontalLayout_3->addWidget(label_input_bit_2);

        horizontalLayout_3->setStretch(0, 10);
        horizontalLayout_3->setStretch(1, 2);
        groupBox_6 = new QGroupBox(sha_ver_wind);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(271, 660, 321, 80));
        gridLayoutWidget_2 = new QWidget(groupBox_6);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(-1, 20, 321, 61));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        label_hash_mode_2 = new QLabel(gridLayoutWidget_2);
        label_hash_mode_2->setObjectName(QStringLiteral("label_hash_mode_2"));

        gridLayout_2->addWidget(label_hash_mode_2, 0, 1, 1, 1);

        label_hash_bit_2 = new QLabel(gridLayoutWidget_2);
        label_hash_bit_2->setObjectName(QStringLiteral("label_hash_bit_2"));

        gridLayout_2->addWidget(label_hash_bit_2, 1, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 2);
        gridLayout_2->setColumnStretch(1, 10);
        groupBox_7 = new QGroupBox(sha_ver_wind);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(271, 500, 321, 141));
        textBrowser_hash_2 = new QTextBrowser(groupBox_7);
        textBrowser_hash_2->setObjectName(QStringLiteral("textBrowser_hash_2"));
        textBrowser_hash_2->setGeometry(QRect(0, 20, 321, 121));
        label_7 = new QLabel(sha_ver_wind);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(271, 320, 101, 17));
        horizontalLayoutWidget_6 = new QWidget(sha_ver_wind);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(270, 340, 321, 31));
        horizontalLayout_hashVersion_2 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_hashVersion_2->setObjectName(QStringLiteral("horizontalLayout_hashVersion_2"));
        horizontalLayout_hashVersion_2->setContentsMargins(0, 0, 0, 0);
        radioButton_sha1_2 = new QRadioButton(horizontalLayoutWidget_6);
        radioButton_sha1_2->setObjectName(QStringLiteral("radioButton_sha1_2"));

        horizontalLayout_hashVersion_2->addWidget(radioButton_sha1_2);

        radioButton_sha2_2 = new QRadioButton(horizontalLayoutWidget_6);
        radioButton_sha2_2->setObjectName(QStringLiteral("radioButton_sha2_2"));

        horizontalLayout_hashVersion_2->addWidget(radioButton_sha2_2);

        radioButton_sha3_2 = new QRadioButton(horizontalLayoutWidget_6);
        radioButton_sha3_2->setObjectName(QStringLiteral("radioButton_sha3_2"));

        horizontalLayout_hashVersion_2->addWidget(radioButton_sha3_2);

        label_8 = new QLabel(sha_ver_wind);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(271, 380, 67, 17));

        retranslateUi(sha_ver_wind);

        QMetaObject::connectSlotsByName(sha_ver_wind);
    } // setupUi

    void retranslateUi(QWidget *sha_ver_wind)
    {
        sha_ver_wind->setWindowTitle(QApplication::translate("sha_ver_wind", "Sha Wind", Q_NULLPTR));
        radioButton_sha1->setText(QApplication::translate("sha_ver_wind", "SHA-1", Q_NULLPTR));
        radioButton_sha2->setText(QApplication::translate("sha_ver_wind", "SHA-2", Q_NULLPTR));
        radioButton_sha3->setText(QApplication::translate("sha_ver_wind", "SHA-3", Q_NULLPTR));
        radioButton_bit_224->setText(QApplication::translate("sha_ver_wind", "224", Q_NULLPTR));
        radioButton_bit_256->setText(QApplication::translate("sha_ver_wind", "256", Q_NULLPTR));
        radioButton_bit_384->setText(QApplication::translate("sha_ver_wind", "384", Q_NULLPTR));
        radioButton_bit_512->setText(QApplication::translate("sha_ver_wind", "512", Q_NULLPTR));
        label->setText(QApplication::translate("sha_ver_wind", "Hash Version", Q_NULLPTR));
        label_2->setText(QApplication::translate("sha_ver_wind", "Hash Bit", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("sha_ver_wind", "\345\207\272\345\212\233", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("sha_ver_wind", "\345\205\245\345\212\233", Q_NULLPTR));
        label_input_bit->setText(QString());
        groupBox_4->setTitle(QApplication::translate("sha_ver_wind", "Status", Q_NULLPTR));
        label_3->setText(QApplication::translate("sha_ver_wind", "bit: ", Q_NULLPTR));
        label_4->setText(QApplication::translate("sha_ver_wind", "HASH: ", Q_NULLPTR));
        label_hash_mode->setText(QString());
        label_hash_bit->setText(QString());
        radioButton_bit_225->setText(QApplication::translate("sha_ver_wind", "224", Q_NULLPTR));
        radioButton_bit_257->setText(QApplication::translate("sha_ver_wind", "256", Q_NULLPTR));
        radioButton_bit_385->setText(QApplication::translate("sha_ver_wind", "384", Q_NULLPTR));
        radioButton_bit_513->setText(QApplication::translate("sha_ver_wind", "512", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("sha_ver_wind", "\345\205\245\345\212\233", Q_NULLPTR));
        label_input_bit_2->setText(QString());
        groupBox_6->setTitle(QApplication::translate("sha_ver_wind", "Status", Q_NULLPTR));
        label_5->setText(QApplication::translate("sha_ver_wind", "bit: ", Q_NULLPTR));
        label_6->setText(QApplication::translate("sha_ver_wind", "HASH: ", Q_NULLPTR));
        label_hash_mode_2->setText(QString());
        label_hash_bit_2->setText(QString());
        groupBox_7->setTitle(QApplication::translate("sha_ver_wind", "\345\207\272\345\212\233", Q_NULLPTR));
        label_7->setText(QApplication::translate("sha_ver_wind", "Hash Version", Q_NULLPTR));
        radioButton_sha1_2->setText(QApplication::translate("sha_ver_wind", "SHA-1", Q_NULLPTR));
        radioButton_sha2_2->setText(QApplication::translate("sha_ver_wind", "SHA-2", Q_NULLPTR));
        radioButton_sha3_2->setText(QApplication::translate("sha_ver_wind", "SHA-3", Q_NULLPTR));
        label_8->setText(QApplication::translate("sha_ver_wind", "Hash Bit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sha_ver_wind: public Ui_sha_ver_wind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHA_VER_WIND_H
