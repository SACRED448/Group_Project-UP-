#ifndef TESTFORM10_H
#define TESTFORM10_H

#include <QDialog>

namespace Ui {
class TestForm10;
}

class TestForm10 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm10(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm10();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm10 *ui;
};

#endif // TESTFORM10_H
