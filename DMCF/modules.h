#ifndef MODULES_H
#define MODULES_H

#include <QDialog>

namespace Ui {
class Modules;
}

class Modules : public QDialog
{
    Q_OBJECT

public:
    explicit Modules(QWidget *parent = nullptr);
    ~Modules();

signals:
    void test_button_clicked();
    void text_button_clicked();
    void back_button_clicked();

private slots:
    void on_test_pushButton_clicked();

    void on_text_pushButton_clicked();

    void on_back_pushButton_clicked();

private:
    Ui::Modules *ui;
};

#endif // MODULES_H
