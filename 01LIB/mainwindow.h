#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QComboBox>

#include "in.h"
#include "out.h"
#include "search.h"
#include "Showw.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_in_clicked();
    void doProcessinRequest();


    void on_out_clicked();

    void on_search_clicked();

    void on_show_clicked();

private:
    Ui::MainWindow *ui;
    in *p_t2;
    Out *p_t3;
    search *p_t4;
    Showw *p_t5;

    void InitForm();
};

#endif // MAINWINDOW_H
