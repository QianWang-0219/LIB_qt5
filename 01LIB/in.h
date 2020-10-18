#ifndef IN_H
#define IN_H

#include <QDialog>
#include <QFile>
#include <QTextStream>

namespace Ui {
class in;
}

class in : public QDialog
{
    Q_OBJECT

public:
    explicit in(QWidget *parent = nullptr);
    ~in();

private slots:
    void on_return_in_clicked();

    void on_pushButton_clicked();

private:
    Ui::in *ui;

    void Init();


signals:
    void SignalShowOne();

};

#endif // IN_H
