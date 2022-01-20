#ifndef TESTFORM25_H
#define TESTFORM25_H

#include <QDialog>

namespace Ui {
class TestForm25;
}

class TestForm25 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm25(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm25();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm25 *ui;
};

#endif // TESTFORM25_H
