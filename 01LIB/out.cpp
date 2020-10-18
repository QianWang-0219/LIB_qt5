#include "out.h"
#include "ui_out.h"

Out::Out(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Out)
{
    ui->setupUi(this);
}

Out::~Out()
{
    delete ui;
}

void Out::on_return_out_clicked()
{
    //发送信号显示mainwindow
    emit SignalShowOne();
    this->hide();
}

void Out::on_pushButton_okborrow_clicked()
{
    QMessageBox::warning(this,"inform","success",QMessageBox::Ok,QMessageBox::Cancel);
}
