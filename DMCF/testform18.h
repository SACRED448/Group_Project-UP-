#ifndef TESTFORM18_H
#define TESTFORM18_H

#include <QDialog>

namespace Ui {
class TestForm18;
}

class TestForm18 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm18(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm18();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm18 *ui;
};

#endif // TESTFORM18_H
