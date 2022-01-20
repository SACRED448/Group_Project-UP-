#ifndef TESTFORM6_H
#define TESTFORM6_H

#include <QDialog>

namespace Ui {
class TestForm6;
}

class TestForm6 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm6(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm6();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm6 *ui;
};

#endif // TESTFORM6_H
