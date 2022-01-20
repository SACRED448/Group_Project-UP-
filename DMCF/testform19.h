#ifndef TESTFORM19_H
#define TESTFORM19_H

#include <QDialog>

namespace Ui {
class TestForm19;
}

class TestForm19 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm19(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm19();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm19 *ui;
};

#endif // TESTFORM19_H
