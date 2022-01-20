#ifndef TESTFORM17_H
#define TESTFORM17_H

#include <QDialog>

namespace Ui {
class TestForm17;
}

class TestForm17 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm17(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm17();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm17 *ui;
};

#endif // TESTFORM17_H
