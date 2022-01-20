#ifndef TESTFORM5_H
#define TESTFORM5_H

#include <QDialog>

namespace Ui {
class TestForm5;
}

class TestForm5 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm5(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm5();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm5 *ui;
};

#endif // TESTFORM5_H
