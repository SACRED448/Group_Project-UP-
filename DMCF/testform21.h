#ifndef TESTFORM21_H
#define TESTFORM21_H

#include <QDialog>

namespace Ui {
class TestForm21;
}

class TestForm21 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm21(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm21();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm21 *ui;
};

#endif // TESTFORM21_H
