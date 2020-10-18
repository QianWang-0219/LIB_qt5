/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_search
{
public:
    QPushButton *pushButton_search;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;

    void setupUi(QWidget *search)
    {
        if (search->objectName().isEmpty())
            search->setObjectName(QString::fromUtf8("search"));
        search->resize(680, 574);
        pushButton_search = new QPushButton(search);
        pushButton_search->setObjectName(QString::fromUtf8("pushButton_search"));
        pushButton_search->setGeometry(QRect(540, 30, 93, 28));
        label = new QLabel(search);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 160, 72, 15));
        label_2 = new QLabel(search);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 210, 72, 15));
        label_4 = new QLabel(search);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 40, 72, 15));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        pushButton = new QPushButton(search);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 250, 93, 28));
        textBrowser = new QTextBrowser(search);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 340, 181, 31));
        textBrowser_2 = new QTextBrowser(search);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(230, 340, 181, 31));
        textBrowser_3 = new QTextBrowser(search);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(430, 340, 181, 31));
        textBrowser_4 = new QTextBrowser(search);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(30, 390, 181, 31));

        retranslateUi(search);

        QMetaObject::connectSlotsByName(search);
    } // setupUi

    void retranslateUi(QWidget *search)
    {
        search->setWindowTitle(QCoreApplication::translate("search", "Form", nullptr));
        pushButton_search->setText(QCoreApplication::translate("search", "return", nullptr));
        label->setText(QCoreApplication::translate("search", "\344\271\246\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("search", "\344\275\234\350\200\205", nullptr));
        label_4->setText(QCoreApplication::translate("search", "\346\211\276\344\271\246", nullptr));
        pushButton->setText(QCoreApplication::translate("search", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search: public Ui_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
