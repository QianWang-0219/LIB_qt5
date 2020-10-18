#ifndef SEARCH_H
#define SEARCH_H

#include <QWidget>

namespace Ui {
class search;
}

class search : public QWidget
{
    Q_OBJECT

public:
    explicit search(QWidget *parent = nullptr);
    ~search();

private slots:
    void on_pushButton_search_clicked();

private:
    Ui::search *ui;

signals:
    void SignalShowOne();
};

#endif // SEARCH_H
