#ifndef TESTFORM2_H
#define TESTFORM2_H

#include <QDialog>

namespace Ui {
class TestForm2;
}

class TestForm2 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm2(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm2();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm2 *ui;
};

#endif // TESTFORM2_H
