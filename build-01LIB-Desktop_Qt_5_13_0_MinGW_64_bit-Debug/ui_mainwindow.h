/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *in;
    QPushButton *out;
    QPushButton *search;
    QPushButton *show;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(592, 484);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        in = new QPushButton(centralWidget);
        in->setObjectName(QString::fromUtf8("in"));
        in->setGeometry(QRect(140, 180, 93, 28));
        out = new QPushButton(centralWidget);
        out->setObjectName(QString::fromUtf8("out"));
        out->setGeometry(QRect(290, 180, 93, 28));
        search = new QPushButton(centralWidget);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(140, 240, 93, 28));
        show = new QPushButton(centralWidget);
        show->setObjectName(QString::fromUtf8("show"));
        show->setGeometry(QRect(290, 240, 93, 28));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 72, 15));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 592, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        in->setText(QCoreApplication::translate("MainWindow", "in", nullptr));
        out->setText(QCoreApplication::translate("MainWindow", "out", nullptr));
        search->setText(QCoreApplication::translate("MainWindow", "search", nullptr));
        show->setText(QCoreApplication::translate("MainWindow", "show", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\273\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
