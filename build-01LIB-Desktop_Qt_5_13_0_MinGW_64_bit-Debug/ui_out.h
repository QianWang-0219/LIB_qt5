/********************************************************************************
** Form generated from reading UI file 'out.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUT_H
#define UI_OUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Out
{
public:
    QPushButton *return_out;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_writer;
    QPushButton *pushButton;
    QTextBrowser *textBrowser_num;
    QTextBrowser *textBrowser_name;
    QTextBrowser *textBrowser_writer;
    QPushButton *pushButton_okborrow;

    void setupUi(QDialog *Out)
    {
        if (Out->objectName().isEmpty())
            Out->setObjectName(QString::fromUtf8("Out"));
        Out->resize(748, 564);
        return_out = new QPushButton(Out);
        return_out->setObjectName(QString::fromUtf8("return_out"));
        return_out->setGeometry(QRect(600, 50, 93, 28));
        label = new QLabel(Out);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 72, 15));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        label_2 = new QLabel(Out);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 170, 72, 15));
        label_3 = new QLabel(Out);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 210, 72, 15));
        lineEdit_name = new QLineEdit(Out);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(200, 170, 113, 21));
        lineEdit_writer = new QLineEdit(Out);
        lineEdit_writer->setObjectName(QString::fromUtf8("lineEdit_writer"));
        lineEdit_writer->setGeometry(QRect(200, 210, 113, 21));
        pushButton = new QPushButton(Out);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(500, 260, 93, 28));
        textBrowser_num = new QTextBrowser(Out);
        textBrowser_num->setObjectName(QString::fromUtf8("textBrowser_num"));
        textBrowser_num->setGeometry(QRect(50, 360, 191, 31));
        textBrowser_name = new QTextBrowser(Out);
        textBrowser_name->setObjectName(QString::fromUtf8("textBrowser_name"));
        textBrowser_name->setGeometry(QRect(270, 360, 191, 31));
        textBrowser_writer = new QTextBrowser(Out);
        textBrowser_writer->setObjectName(QString::fromUtf8("textBrowser_writer"));
        textBrowser_writer->setGeometry(QRect(490, 360, 191, 31));
        pushButton_okborrow = new QPushButton(Out);
        pushButton_okborrow->setObjectName(QString::fromUtf8("pushButton_okborrow"));
        pushButton_okborrow->setGeometry(QRect(500, 470, 93, 28));

        retranslateUi(Out);

        QMetaObject::connectSlotsByName(Out);
    } // setupUi

    void retranslateUi(QDialog *Out)
    {
        Out->setWindowTitle(QCoreApplication::translate("Out", "Dialog", nullptr));
        return_out->setText(QCoreApplication::translate("Out", "return", nullptr));
        label->setText(QCoreApplication::translate("Out", "\345\207\272\345\272\223", nullptr));
        label_2->setText(QCoreApplication::translate("Out", "\344\271\246\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("Out", "\344\275\234\350\200\205", nullptr));
        pushButton->setText(QCoreApplication::translate("Out", "\346\240\270\345\257\271", nullptr));
        pushButton_okborrow->setText(QCoreApplication::translate("Out", "\347\241\256\350\256\244\345\200\237\351\230\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Out: public Ui_Out {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUT_H
