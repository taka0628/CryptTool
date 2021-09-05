/********************************************************************************
** Form generated from reading UI file 'sha1_wind.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHA1_WIND_H
#define UI_SHA1_WIND_H

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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sha_wind
{
public:
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QLabel *label_input_bit;
    QGroupBox *groupBox_2;
    QTextBrowser *textBrowser_hash;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_hash_mode;
    QLabel *label_hash_bit;

    void setupUi(QDialog *sha_wind)
    {
        if (sha_wind->objectName().isEmpty())
            sha_wind->setObjectName(QStringLiteral("sha_wind"));
        sha_wind->resize(443, 427);
        groupBox = new QGroupBox(sha_wind);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 391, 51));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(-1, 20, 391, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 0, 0, 0);
        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label_input_bit = new QLabel(horizontalLayoutWidget);
        label_input_bit->setObjectName(QStringLiteral("label_input_bit"));

        horizontalLayout->addWidget(label_input_bit);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 2);
        groupBox_2 = new QGroupBox(sha_wind);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 100, 391, 161));
        textBrowser_hash = new QTextBrowser(groupBox_2);
        textBrowser_hash->setObjectName(QStringLiteral("textBrowser_hash"));
        textBrowser_hash->setGeometry(QRect(0, 30, 391, 131));
        groupBox_3 = new QGroupBox(sha_wind);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 300, 381, 91));
        gridLayoutWidget = new QWidget(groupBox_3);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 20, 381, 61));
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

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 5);

        retranslateUi(sha_wind);

        QMetaObject::connectSlotsByName(sha_wind);
    } // setupUi

    void retranslateUi(QDialog *sha_wind)
    {
        sha_wind->setWindowTitle(QApplication::translate("sha_wind", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("sha_wind", "\345\205\245\345\212\233", Q_NULLPTR));
        label_input_bit->setText(QString());
        groupBox_2->setTitle(QApplication::translate("sha_wind", "\345\207\272\345\212\233", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("sha_wind", "Status", Q_NULLPTR));
        label_2->setText(QApplication::translate("sha_wind", "bit: ", Q_NULLPTR));
        label->setText(QApplication::translate("sha_wind", "HASH: ", Q_NULLPTR));
        label_hash_mode->setText(QString());
        label_hash_bit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class sha_wind: public Ui_sha_wind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHA1_WIND_H
