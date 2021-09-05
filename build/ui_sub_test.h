/********************************************************************************
** Form generated from reading UI file 'sub_test.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUB_TEST_H
#define UI_SUB_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sub_test
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *sub_test)
    {
        if (sub_test->objectName().isEmpty())
            sub_test->setObjectName(QStringLiteral("sub_test"));
        sub_test->resize(800, 600);
        centralwidget = new QWidget(sub_test);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 170, 89, 25));
        sub_test->setCentralWidget(centralwidget);
        menubar = new QMenuBar(sub_test);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        sub_test->setMenuBar(menubar);
        statusbar = new QStatusBar(sub_test);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        sub_test->setStatusBar(statusbar);

        retranslateUi(sub_test);

        QMetaObject::connectSlotsByName(sub_test);
    } // setupUi

    void retranslateUi(QMainWindow *sub_test)
    {
        sub_test->setWindowTitle(QApplication::translate("sub_test", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("sub_test", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sub_test: public Ui_sub_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUB_TEST_H
