/********************************************************************************
** Form generated from reading UI file 'showw.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWW_H
#define UI_SHOWW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Showw
{
public:
    QPushButton *pushButton_show;
    QLabel *label;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox_2;

    void setupUi(QWidget *Showw)
    {
        if (Showw->objectName().isEmpty())
            Showw->setObjectName(QString::fromUtf8("Showw"));
        Showw->resize(762, 566);
        pushButton_show = new QPushButton(Showw);
        pushButton_show->setObjectName(QString::fromUtf8("pushButton_show"));
        pushButton_show->setGeometry(QRect(630, 30, 93, 28));
        label = new QLabel(Showw);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 50, 72, 15));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        pushButton = new QPushButton(Showw);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(490, 190, 93, 28));
        textEdit = new QTextEdit(Showw);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(70, 260, 641, 251));
        widget = new QWidget(Showw);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 130, 321, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        widget1 = new QWidget(Showw);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(70, 220, 181, 22));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        comboBox_2 = new QComboBox(widget1);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);


        retranslateUi(Showw);

        QMetaObject::connectSlotsByName(Showw);
    } // setupUi

    void retranslateUi(QWidget *Showw)
    {
        Showw->setWindowTitle(QCoreApplication::translate("Showw", "Form", nullptr));
        pushButton_show->setText(QCoreApplication::translate("Showw", "return", nullptr));
        label->setText(QCoreApplication::translate("Showw", "\346\237\245\347\234\213\351\246\206\350\227\217", nullptr));
        pushButton->setText(QCoreApplication::translate("Showw", "\346\237\245\350\257\242", nullptr));
        label_2->setText(QCoreApplication::translate("Showw", "\347\261\273\345\236\213", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QCoreApplication::translate("Showw", "\346\226\207\345\255\246\347\261\273", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Showw", "\347\247\221\345\255\246\347\261\273", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Showw", "\346\211\200\346\234\211", nullptr));

        label_3->setText(QCoreApplication::translate("Showw", "\346\216\222\345\272\217\346\226\271\345\274\217", nullptr));
        comboBox_2->setItemText(0, QString());
        comboBox_2->setItemText(1, QCoreApplication::translate("Showw", "\346\214\211\351\246\226\345\255\227\346\257\215\346\216\222\345\272\217", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Showw: public Ui_Showw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWW_H
