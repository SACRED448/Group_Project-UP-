#ifndef TESTFORM29_H
#define TESTFORM29_H

#include <QDialog>

namespace Ui {
class TestForm29;
}

class TestForm29 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm29(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm29();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm29 *ui;
};

#endif // TESTFORM29_H
