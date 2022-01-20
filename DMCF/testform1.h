#ifndef TESTFORM1_H
#define TESTFORM1_H

#include <QDialog>

namespace Ui {
class TestForm1;
}

class TestForm1 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm1(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm1();

signals:
    void next_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm1 *ui;
};

#endif // TESTFORM1_H
