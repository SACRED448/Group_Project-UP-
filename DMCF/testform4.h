#ifndef TESTFORM4_H
#define TESTFORM4_H

#include <QDialog>

namespace Ui {
class TestForm4;
}

class TestForm4 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm4(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm4();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm4 *ui;
};

#endif // TESTFORM4_H
