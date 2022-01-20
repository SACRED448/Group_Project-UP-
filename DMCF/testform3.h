#ifndef TESTFORM3_H
#define TESTFORM3_H

#include <QDialog>

namespace Ui {
class TestForm3;
}

class TestForm3 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm3(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm3();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm3 *ui;
};

#endif // TESTFORM3_H
