#ifndef TESTFORM3_H
#define TESTFORM3_H

#include <QDialog>

namespace Ui {
class testform3;
}

class testform3 : public QDialog
{
    Q_OBJECT

public:
    explicit testform3(QWidget *parent = nullptr);
    int n, w, h;
    int getN();
    ~testform3();

private slots:
    void on_next_pushButton_2_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::testform3 *ui;
};

#endif // TESTFORM3_H
