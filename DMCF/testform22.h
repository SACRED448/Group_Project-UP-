#ifndef TESTFORM22_H
#define TESTFORM22_H

#include <QDialog>

namespace Ui {
class TestForm22;
}

class TestForm22 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm22(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm22();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm22 *ui;
};

#endif // TESTFORM22_H
