#ifndef TESTFORM31_H
#define TESTFORM31_H

#include <QDialog>

namespace Ui {
class TestForm31;
}

class TestForm31 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm31(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm31();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm31 *ui;
};

#endif // TESTFORM31_H
