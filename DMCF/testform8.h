#ifndef TESTFORM8_H
#define TESTFORM8_H

#include <QDialog>

namespace Ui {
class TestForm8;
}

class TestForm8 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm8(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm8();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm8 *ui;
};

#endif // TESTFORM8_H
