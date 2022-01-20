#ifndef TESTFORM14_H
#define TESTFORM14_H

#include <QDialog>

namespace Ui {
class TestForm14;
}

class TestForm14 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm14(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm14();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm14 *ui;
};

#endif // TESTFORM14_H
