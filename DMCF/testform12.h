#ifndef TESTFORM12_H
#define TESTFORM12_H

#include <QDialog>

namespace Ui {
class TestForm12;
}

class TestForm12 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm12(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm12();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm12 *ui;
};

#endif // TESTFORM12_H
