/********************************************************************************
** Form generated from reading UI file 'sha_wind.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHA_WIND_H
#define UI_SHA_WIND_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shaAll_wind
{
public:
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_224;
    QRadioButton *radioButton_256;
    QRadioButton *radioButton_384;
    QRadioButton *radioButton_512;
    QGroupBox *groupBox_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QLabel *label_input_bit;
    QGroupBox *groupBox_3;
    QTextBrowser *textBrowser_hash;
    QGroupBox *groupBox_4;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_hash_mode;
    QLabel *label_hash_bit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_hashVersion;
    QRadioButton *radioButton_sha1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QLabel *label_3;

    void setupUi(QDialog *shaAll_wind)
    {
        if (shaAll_wind->objectName().isEmpty())
            shaAll_wind->setObjectName(QStringLiteral("shaAll_wind"));
        shaAll_wind->resize(403, 530);
        groupBox = new QGroupBox(shaAll_wind);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 100, 321, 61));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 20, 321, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_224 = new QRadioButton(horizontalLayoutWidget);
        radioButton_224->setObjectName(QStringLiteral("radioButton_224"));
        radioButton_224->setChecked(true);

        horizontalLayout->addWidget(radioButton_224);

        radioButton_256 = new QRadioButton(horizontalLayoutWidget);
        radioButton_256->setObjectName(QStringLiteral("radioButton_256"));

        horizontalLayout->addWidget(radioButton_256);

        radioButton_384 = new QRadioButton(horizontalLayoutWidget);
        radioButton_384->setObjectName(QStringLiteral("radioButton_384"));

        horizontalLayout->addWidget(radioButton_384);

        radioButton_512 = new QRadioButton(horizontalLayoutWidget);
        radioButton_512->setObjectName(QStringLiteral("radioButton_512"));

        horizontalLayout->addWidget(radioButton_512);

        groupBox_2 = new QGroupBox(shaAll_wind);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 170, 321, 51));
        horizontalLayoutWidget_2 = new QWidget(groupBox_2);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 20, 321, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        label_input_bit = new QLabel(horizontalLayoutWidget_2);
        label_input_bit->setObjectName(QStringLiteral("label_input_bit"));

        horizontalLayout_2->addWidget(label_input_bit);

        horizontalLayout_2->setStretch(0, 10);
        horizontalLayout_2->setStretch(1, 2);
        groupBox_3 = new QGroupBox(shaAll_wind);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 230, 321, 141));
        textBrowser_hash = new QTextBrowser(groupBox_3);
        textBrowser_hash->setObjectName(QStringLiteral("textBrowser_hash"));
        textBrowser_hash->setGeometry(QRect(0, 20, 321, 121));
        groupBox_4 = new QGroupBox(shaAll_wind);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(40, 400, 321, 80));
        gridLayoutWidget = new QWidget(groupBox_4);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, 20, 321, 61));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_hash_mode = new QLabel(gridLayoutWidget);
        label_hash_mode->setObjectName(QStringLiteral("label_hash_mode"));

        gridLayout->addWidget(label_hash_mode, 0, 1, 1, 1);

        label_hash_bit = new QLabel(gridLayoutWidget);
        label_hash_bit->setObjectName(QStringLiteral("label_hash_bit"));

        gridLayout->addWidget(label_hash_bit, 1, 1, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 10);
        horizontalLayoutWidget_3 = new QWidget(shaAll_wind);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(40, 50, 321, 41));
        horizontalLayout_hashVersion = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_hashVersion->setObjectName(QStringLiteral("horizontalLayout_hashVersion"));
        horizontalLayout_hashVersion->setContentsMargins(0, 0, 0, 0);
        radioButton_sha1 = new QRadioButton(horizontalLayoutWidget_3);
        radioButton_sha1->setObjectName(QStringLiteral("radioButton_sha1"));

        horizontalLayout_hashVersion->addWidget(radioButton_sha1);

        radioButton_2 = new QRadioButton(horizontalLayoutWidget_3);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout_hashVersion->addWidget(radioButton_2);

        radioButton = new QRadioButton(horizontalLayoutWidget_3);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout_hashVersion->addWidget(radioButton);

        label_3 = new QLabel(shaAll_wind);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 30, 101, 17));

        retranslateUi(shaAll_wind);

        QMetaObject::connectSlotsByName(shaAll_wind);
    } // setupUi

    void retranslateUi(QDialog *shaAll_wind)
    {
        shaAll_wind->setWindowTitle(QApplication::translate("shaAll_wind", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("shaAll_wind", "Hash Size(bit)", Q_NULLPTR));
        radioButton_224->setText(QApplication::translate("shaAll_wind", "224", Q_NULLPTR));
        radioButton_256->setText(QApplication::translate("shaAll_wind", "256", Q_NULLPTR));
        radioButton_384->setText(QApplication::translate("shaAll_wind", "384", Q_NULLPTR));
        radioButton_512->setText(QApplication::translate("shaAll_wind", "512", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("shaAll_wind", "\345\205\245\345\212\233", Q_NULLPTR));
        label_input_bit->setText(QString());
        groupBox_3->setTitle(QApplication::translate("shaAll_wind", "\345\207\272\345\212\233", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("shaAll_wind", "Status", Q_NULLPTR));
        label_2->setText(QApplication::translate("shaAll_wind", "bit: ", Q_NULLPTR));
        label->setText(QApplication::translate("shaAll_wind", "HASH: ", Q_NULLPTR));
        label_hash_mode->setText(QString());
        label_hash_bit->setText(QString());
        radioButton_sha1->setText(QApplication::translate("shaAll_wind", "SHA-1", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("shaAll_wind", "SHA-2", Q_NULLPTR));
        radioButton->setText(QApplication::translate("shaAll_wind", "SHA3", Q_NULLPTR));
        label_3->setText(QApplication::translate("shaAll_wind", "Hash Version", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class shaAll_wind: public Ui_shaAll_wind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHA_WIND_H
