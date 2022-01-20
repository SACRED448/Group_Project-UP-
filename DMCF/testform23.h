#ifndef TESTFORM23_H
#define TESTFORM23_H

#include <QDialog>

namespace Ui {
class TestForm23;
}

class TestForm23 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm23(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm23();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm23 *ui;
};

#endif // TESTFORM23_H
