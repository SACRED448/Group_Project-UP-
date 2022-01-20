#ifndef TESTFORM24_H
#define TESTFORM24_H

#include <QDialog>

namespace Ui {
class TestForm24;
}

class TestForm24 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm24(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm24();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm24 *ui;
};

#endif // TESTFORM24_H
