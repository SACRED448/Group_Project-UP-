#ifndef TESTFORM32_H
#define TESTFORM32_H

#include <QDialog>

namespace Ui {
class TestForm32;
}

class TestForm32 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm32(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm32();

signals:
    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm32 *ui;
};

#endif // TESTFORM32_H
