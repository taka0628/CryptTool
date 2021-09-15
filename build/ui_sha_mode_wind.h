/********************************************************************************
** Form generated from reading UI file 'sha_mode_wind.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHA_MODE_WIND_H
#define UI_SHA_MODE_WIND_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sha_mode_wind
{
public:
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_hashBit;
    QRadioButton *radioButton_bit_224;
    QRadioButton *radioButton_bit_256;
    QRadioButton *radioButton_bit_384;
    QRadioButton *radioButton_bit_512;
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
    QGroupBox *groupBox_3;
    QTextBrowser *textBrowser_hash;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_hashVersion;
    QRadioButton *radioButton_sha1;
    QRadioButton *radioButton_sha2;
    QRadioButton *radioButton_sha3;
    QLabel *label_2;
    QFrame *frame;
    QFrame *frame_2;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_string;
    QRadioButton *radioButton_hex;
    QLabel *label_5;
    QFrame *frame_3;
    QPushButton *pushButton;

    void setupUi(QDialog *sha_mode_wind)
    {
        if (sha_mode_wind->objectName().isEmpty())
            sha_mode_wind->setObjectName(QStringLiteral("sha_mode_wind"));
        sha_mode_wind->resize(403, 534);
        horizontalLayoutWidget_2 = new QWidget(sha_mode_wind);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(40, 110, 321, 31));
        horizontalLayout_hashBit = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_hashBit->setObjectName(QStringLiteral("horizontalLayout_hashBit"));
        horizontalLayout_hashBit->setContentsMargins(0, 0, 0, 0);
        radioButton_bit_224 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_bit_224->setObjectName(QStringLiteral("radioButton_bit_224"));
        radioButton_bit_224->setChecked(true);

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

        groupBox_2 = new QGroupBox(sha_mode_wind);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 210, 321, 51));
        horizontalLayoutWidget_3 = new QWidget(groupBox_2);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 20, 321, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_input = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_input->setObjectName(QStringLiteral("lineEdit_input"));
        lineEdit_input->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineEdit_input->setInputMask(QStringLiteral(""));
        lineEdit_input->setText(QStringLiteral(""));
        lineEdit_input->setPlaceholderText(QStringLiteral(""));

        horizontalLayout_2->addWidget(lineEdit_input);

        label_input_bit = new QLabel(horizontalLayoutWidget_3);
        label_input_bit->setObjectName(QStringLiteral("label_input_bit"));

        horizontalLayout_2->addWidget(label_input_bit);

        horizontalLayout_2->setStretch(0, 10);
        horizontalLayout_2->setStretch(1, 2);
        groupBox_4 = new QGroupBox(sha_mode_wind);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(40, 430, 321, 80));
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
        groupBox_3 = new QGroupBox(sha_mode_wind);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 270, 321, 141));
        textBrowser_hash = new QTextBrowser(groupBox_3);
        textBrowser_hash->setObjectName(QStringLiteral("textBrowser_hash"));
        textBrowser_hash->setGeometry(QRect(0, 20, 321, 121));
        label = new QLabel(sha_mode_wind);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 101, 17));
        horizontalLayoutWidget = new QWidget(sha_mode_wind);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(39, 50, 321, 31));
        horizontalLayout_hashVersion = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_hashVersion->setObjectName(QStringLiteral("horizontalLayout_hashVersion"));
        horizontalLayout_hashVersion->setContentsMargins(0, 0, 0, 0);
        radioButton_sha1 = new QRadioButton(horizontalLayoutWidget);
        radioButton_sha1->setObjectName(QStringLiteral("radioButton_sha1"));
        radioButton_sha1->setCheckable(true);
        radioButton_sha1->setChecked(false);

        horizontalLayout_hashVersion->addWidget(radioButton_sha1);

        radioButton_sha2 = new QRadioButton(horizontalLayoutWidget);
        radioButton_sha2->setObjectName(QStringLiteral("radioButton_sha2"));
        radioButton_sha2->setChecked(true);

        horizontalLayout_hashVersion->addWidget(radioButton_sha2);

        radioButton_sha3 = new QRadioButton(horizontalLayoutWidget);
        radioButton_sha3->setObjectName(QStringLiteral("radioButton_sha3"));

        horizontalLayout_hashVersion->addWidget(radioButton_sha3);

        label_2 = new QLabel(sha_mode_wind);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 90, 67, 17));
        frame = new QFrame(sha_mode_wind);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(40, 109, 321, 31));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(sha_mode_wind);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(40, 50, 321, 31));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget_4 = new QWidget(sha_mode_wind);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(40, 170, 321, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_string = new QRadioButton(horizontalLayoutWidget_4);
        radioButton_string->setObjectName(QStringLiteral("radioButton_string"));
        radioButton_string->setChecked(true);

        horizontalLayout->addWidget(radioButton_string);

        radioButton_hex = new QRadioButton(horizontalLayoutWidget_4);
        radioButton_hex->setObjectName(QStringLiteral("radioButton_hex"));

        horizontalLayout->addWidget(radioButton_hex);

        label_5 = new QLabel(sha_mode_wind);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 150, 91, 17));
        frame_3 = new QFrame(sha_mode_wind);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(40, 169, 321, 31));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(sha_mode_wind);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 386, 31, 25));
        frame_3->raise();
        frame->raise();
        frame_2->raise();
        horizontalLayoutWidget_2->raise();
        groupBox_2->raise();
        groupBox_4->raise();
        groupBox_3->raise();
        label->raise();
        horizontalLayoutWidget->raise();
        label_2->raise();
        horizontalLayoutWidget_4->raise();
        label_5->raise();
        pushButton->raise();

        retranslateUi(sha_mode_wind);

        QMetaObject::connectSlotsByName(sha_mode_wind);
    } // setupUi

    void retranslateUi(QDialog *sha_mode_wind)
    {
        sha_mode_wind->setWindowTitle(QApplication::translate("sha_mode_wind", "SHA windw", Q_NULLPTR));
        radioButton_bit_224->setText(QApplication::translate("sha_mode_wind", "224", Q_NULLPTR));
        radioButton_bit_256->setText(QApplication::translate("sha_mode_wind", "256", Q_NULLPTR));
        radioButton_bit_384->setText(QApplication::translate("sha_mode_wind", "384", Q_NULLPTR));
        radioButton_bit_512->setText(QApplication::translate("sha_mode_wind", "512", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("sha_mode_wind", "\345\205\245\345\212\233", Q_NULLPTR));
        label_input_bit->setText(QString());
        groupBox_4->setTitle(QApplication::translate("sha_mode_wind", "Status", Q_NULLPTR));
        label_3->setText(QApplication::translate("sha_mode_wind", "bit: ", Q_NULLPTR));
        label_4->setText(QApplication::translate("sha_mode_wind", "HASH: ", Q_NULLPTR));
        label_hash_mode->setText(QString());
        label_hash_bit->setText(QString());
        groupBox_3->setTitle(QApplication::translate("sha_mode_wind", "\345\207\272\345\212\233", Q_NULLPTR));
        label->setText(QApplication::translate("sha_mode_wind", "Hash Version", Q_NULLPTR));
        radioButton_sha1->setText(QApplication::translate("sha_mode_wind", "SHA-1", Q_NULLPTR));
        radioButton_sha2->setText(QApplication::translate("sha_mode_wind", "SHA-2", Q_NULLPTR));
        radioButton_sha3->setText(QApplication::translate("sha_mode_wind", "SHA-3", Q_NULLPTR));
        label_2->setText(QApplication::translate("sha_mode_wind", "Hash Bit", Q_NULLPTR));
        radioButton_string->setText(QApplication::translate("sha_mode_wind", "string", Q_NULLPTR));
        radioButton_hex->setText(QApplication::translate("sha_mode_wind", "0x", Q_NULLPTR));
        label_5->setText(QApplication::translate("sha_mode_wind", "Input mode", Q_NULLPTR));
        pushButton->setText(QApplication::translate("sha_mode_wind", "cpy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sha_mode_wind: public Ui_sha_mode_wind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHA_MODE_WIND_H
