#ifndef TESTFORM26_H
#define TESTFORM26_H

#include <QDialog>

namespace Ui {
class TestForm26;
}

class TestForm26 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm26(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm26();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm26 *ui;
};

#endif // TESTFORM26_H
