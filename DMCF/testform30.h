#ifndef TESTFORM30_H
#define TESTFORM30_H

#include <QDialog>

namespace Ui {
class TestForm30;
}

class TestForm30 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm30(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm30();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm30 *ui;
};

#endif // TESTFORM30_H
