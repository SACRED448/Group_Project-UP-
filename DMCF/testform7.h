#ifndef TESTFORM7_H
#define TESTFORM7_H

#include <QDialog>

namespace Ui {
class TestForm7;
}

class TestForm7 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm7(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm7();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm7 *ui;
};

#endif // TESTFORM7_H
