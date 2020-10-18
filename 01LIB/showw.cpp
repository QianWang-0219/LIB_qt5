#include "showw.h"
#include "ui_showw.h"

Showw::Showw(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Showw)
{
    ui->setupUi(this);
    Init();
}

Showw::~Showw()
{
    delete ui;
}

/////////////////////////FUNCTIONS///////////////////
void Showw::Init()
{
    //myfile = new QFile(this);
}


void Showw::on_pushButton_show_clicked()
{
    //发送信号显示mainwindow
    emit SignalShowOne();
    this->hide();
}

void Showw::on_pushButton_clicked()
{
    /*
    QFile file("F:/01LIB/data.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug()<<"Can't open the file!"<<endl;
    }
    while(!file.atEnd()) {
        QByteArray line = file.readLine();
        QString str(line);
        qDebug()<< str;
        ui->textEdit->setText(str);
    }
    */
    //指定为GBK
    QTextCodec *codec = QTextCodec::codecForName("GBK");

    //打开文件
    QFile file("../data.txt");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
        return;

    //读文件
    while(!file.atEnd())
    {
        QByteArray line = file.readLine();
        QString str = codec->toUnicode(line);
        ui->textEdit->append(str);
    }

}
