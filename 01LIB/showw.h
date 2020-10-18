#ifndef SHOWW_H
#define SHOWW_H

#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QTextCodec>

namespace Ui {
class Showw;
}

class Showw : public QWidget
{
    Q_OBJECT

public:
    explicit Showw(QWidget *parent = nullptr);
    ~Showw();

private slots:
    void on_pushButton_show_clicked();

    void on_pushButton_clicked();

private:
    Ui::Showw *ui;

    void Init();
    //QFile *myfile;
    //QByteArray ba;

signals:
    void SignalShowOne();
};

#endif // SHOWW_H
