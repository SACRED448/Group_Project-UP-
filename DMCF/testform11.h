#ifndef TESTFORM11_H
#define TESTFORM11_H

#include <QDialog>

namespace Ui {
class TestForm11;
}

class TestForm11 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm11(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm11();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm11 *ui;
};

#endif // TESTFORM11_H
