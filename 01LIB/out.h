#ifndef OUT_H
#define OUT_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class Out;
}

class Out : public QDialog
{
    Q_OBJECT

public:
    explicit Out(QWidget *parent = nullptr);
    ~Out();

private slots:
    void on_return_out_clicked();

    void on_pushButton_okborrow_clicked();

private:
    Ui::Out *ui;

signals:
    void SignalShowOne();
};

#endif // OUT_H
