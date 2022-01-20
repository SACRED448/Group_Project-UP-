#ifndef TESTFORM27_H
#define TESTFORM27_H

#include <QDialog>

namespace Ui {
class TestForm27;
}

class TestForm27 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm27(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm27();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm27 *ui;
};

#endif // TESTFORM27_H
