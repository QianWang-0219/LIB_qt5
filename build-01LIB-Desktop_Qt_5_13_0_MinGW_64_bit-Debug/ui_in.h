/********************************************************************************
** Form generated from reading UI file 'in.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IN_H
#define UI_IN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_in
{
public:
    QPushButton *return_in;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_writer;
    QLineEdit *lineEdit_date;
    QTextBrowser *textBrowser_name;
    QTextBrowser *textBrowser_writer;
    QTextBrowser *textBrowser_date;
    QComboBox *comboBox;
    QTextBrowser *textBrowser_family;
    QLabel *label_5;
    QLabel *label_2;

    void setupUi(QDialog *in)
    {
        if (in->objectName().isEmpty())
            in->setObjectName(QString::fromUtf8("in"));
        in->resize(797, 636);
        return_in = new QPushButton(in);
        return_in->setObjectName(QString::fromUtf8("return_in"));
        return_in->setGeometry(QRect(640, 20, 93, 28));
        label = new QLabel(in);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 72, 15));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        label_3 = new QLabel(in);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 120, 72, 15));
        label_4 = new QLabel(in);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 160, 72, 15));
        pushButton = new QPushButton(in);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(640, 230, 93, 28));
        lineEdit_name = new QLineEdit(in);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(140, 90, 113, 21));
        lineEdit_writer = new QLineEdit(in);
        lineEdit_writer->setObjectName(QString::fromUtf8("lineEdit_writer"));
        lineEdit_writer->setGeometry(QRect(140, 120, 113, 21));
        lineEdit_date = new QLineEdit(in);
        lineEdit_date->setObjectName(QString::fromUtf8("lineEdit_date"));
        lineEdit_date->setGeometry(QRect(140, 160, 113, 21));
        textBrowser_name = new QTextBrowser(in);
        textBrowser_name->setObjectName(QString::fromUtf8("textBrowser_name"));
        textBrowser_name->setGeometry(QRect(70, 340, 201, 41));
        textBrowser_writer = new QTextBrowser(in);
        textBrowser_writer->setObjectName(QString::fromUtf8("textBrowser_writer"));
        textBrowser_writer->setGeometry(QRect(290, 340, 201, 41));
        textBrowser_date = new QTextBrowser(in);
        textBrowser_date->setObjectName(QString::fromUtf8("textBrowser_date"));
        textBrowser_date->setGeometry(QRect(510, 340, 201, 41));
        comboBox = new QComboBox(in);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(140, 200, 87, 22));
        textBrowser_family = new QTextBrowser(in);
        textBrowser_family->setObjectName(QString::fromUtf8("textBrowser_family"));
        textBrowser_family->setGeometry(QRect(70, 400, 201, 41));
        label_5 = new QLabel(in);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 200, 72, 15));
        label_2 = new QLabel(in);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 90, 72, 15));

        retranslateUi(in);

        QMetaObject::connectSlotsByName(in);
    } // setupUi

    void retranslateUi(QDialog *in)
    {
        in->setWindowTitle(QCoreApplication::translate("in", "Dialog", nullptr));
        return_in->setText(QCoreApplication::translate("in", "return", nullptr));
        label->setText(QCoreApplication::translate("in", "\345\233\276\344\271\246\345\205\245\345\272\223", nullptr));
        label_3->setText(QCoreApplication::translate("in", "\344\275\234\350\200\205", nullptr));
        label_4->setText(QCoreApplication::translate("in", "\345\207\272\347\211\210\346\227\245\346\234\237", nullptr));
        pushButton->setText(QCoreApplication::translate("in", "\347\241\256\350\256\244", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("in", "\346\226\207\345\255\246\347\261\273", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("in", "\347\247\221\345\255\246\347\261\273", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("in", "\345\205\266\344\273\226", nullptr));

        label_5->setText(QCoreApplication::translate("in", "\347\261\273\345\210\253", nullptr));
        label_2->setText(QCoreApplication::translate("in", "\344\271\246\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class in: public Ui_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IN_H
