#ifndef TESTFORM15_H
#define TESTFORM15_H

#include <QDialog>

namespace Ui {
class TestForm15;
}

class TestForm15 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm15(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm15();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm15 *ui;
};

#endif // TESTFORM15_H
