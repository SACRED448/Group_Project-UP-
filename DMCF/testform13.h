#ifndef TESTFORM13_H
#define TESTFORM13_H

#include <QDialog>

namespace Ui {
class TestForm13;
}

class TestForm13 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm13(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm13();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm13 *ui;
};

#endif // TESTFORM13_H
