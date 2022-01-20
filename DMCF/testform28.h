#ifndef TESTFORM28_H
#define TESTFORM28_H

#include <QDialog>

namespace Ui {
class TestForm28;
}

class TestForm28 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm28(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm28();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm28 *ui;
};

#endif // TESTFORM28_H
