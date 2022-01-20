#ifndef TESTFORM16_H
#define TESTFORM16_H

#include <QDialog>

namespace Ui {
class TestForm16;
}

class TestForm16 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm16(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm16();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm16 *ui;
};

#endif // TESTFORM16_H
