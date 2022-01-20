#ifndef TESTFORM20_H
#define TESTFORM20_H

#include <QDialog>

namespace Ui {
class TestForm20;
}

class TestForm20 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm20(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm20();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm20 *ui;
};

#endif // TESTFORM20_H
