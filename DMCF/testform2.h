#ifndef TESTFORM2_H
#define TESTFORM2_H

#include <QDialog>

namespace Ui {
class testform2;
}

class testform2 : public QDialog
{
    Q_OBJECT

public:
    explicit testform2(QWidget *parent = nullptr);
    int n, w, h;
    int getN();
    ~testform2();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_2_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::testform2 *ui;
};

#endif // TESTFORM2_H
