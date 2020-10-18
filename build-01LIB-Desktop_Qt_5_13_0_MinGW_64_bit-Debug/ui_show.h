/********************************************************************************
** Form generated from reading UI file 'show.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_H
#define UI_SHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_show
{
public:
    QPushButton *pushButton_show;

    void setupUi(QWidget *show)
    {
        if (show->objectName().isEmpty())
            show->setObjectName(QString::fromUtf8("show"));
        show->resize(400, 300);
        pushButton_show = new QPushButton(show);
        pushButton_show->setObjectName(QString::fromUtf8("pushButton_show"));
        pushButton_show->setGeometry(QRect(270, 30, 93, 28));

        retranslateUi(show);

        QMetaObject::connectSlotsByName(show);
    } // setupUi

    void retranslateUi(QWidget *show)
    {
        show->setWindowTitle(QCoreApplication::translate("show", "Form", nullptr));
        pushButton_show->setText(QCoreApplication::translate("show", "return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class show: public Ui_show {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_H
