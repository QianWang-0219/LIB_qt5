#include "in.h"
#include "ui_in.h"
#include "stdio.h"

in::in(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::in)
{
    ui->setupUi(this);
    Init();
}

in::~in()
{
    delete ui;
}


/////////FUNCTIONS//////////////
void in::Init()
{

}


void in::on_return_in_clicked()
{
    //发送信号显示mainwindow
    emit SignalShowOne();
    this->hide();
}

void in::on_pushButton_clicked()
{
    QString mstring_name = ui->lineEdit_name->text();
    QString mstring_writer = ui->lineEdit_writer->text();
    QString mstring_date = ui->lineEdit_date->text();
    QString mstring_family = ui->comboBox->currentText();
    ui->textBrowser_name->setText(mstring_name);
    ui->textBrowser_writer->setText(mstring_writer);
    ui->textBrowser_date->setText(mstring_date);
    ui->textBrowser_family->setText(mstring_family);

    QFile f("../data.txt");
    f.open(QIODevice::Append);
    QTextStream s(&f);

    s<< mstring_name <<"  " <<  mstring_writer<< "  " << mstring_date << "  "<< mstring_family <<endl;
}









