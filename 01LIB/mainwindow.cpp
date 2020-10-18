#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    InitForm();
}

MainWindow::~MainWindow()
{
    delete ui;
}


/////////////////FUNCTIONS///////////////////////////
void MainWindow::InitForm()
{
    p_t2 = new in();
    //接收显示in界面的请求
    connect(p_t2,SIGNAL(SignalShowOne()),this,SLOT(doProcessinRequest()));

    p_t3 = new Out();
    //接收显示Out界面的请求
    connect(p_t3,SIGNAL(SignalShowOne()),this,SLOT(doProcessinRequest()));

    p_t4 = new search();
    //接收显示search界面的请求
    connect(p_t4,SIGNAL(SignalShowOne()),this,SLOT(doProcessinRequest()));

    p_t5 = new Showw();
    //接收显示in界面的请求
    connect(p_t5,SIGNAL(SignalShowOne()),this,SLOT(doProcessinRequest()));

}

////////////////SOLTS//////////////////////////////////
void MainWindow::on_in_clicked()
{
    p_t2->show();
    this->hide();
}

void MainWindow::doProcessinRequest()
{
    this->show();
}

void MainWindow::on_out_clicked()
{
    p_t3->show();
    this->hide();
}

void MainWindow::on_search_clicked()
{
    p_t4->show();
    this->hide();
}

void MainWindow::on_show_clicked()
{
    p_t5->show();
    this->hide();
}
