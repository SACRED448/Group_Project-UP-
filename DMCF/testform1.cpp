#include "testform1.h"
#include "ui_testform1.h"
#include <QPixmap>

TestForm1::TestForm1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm1)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/candles.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm1::~TestForm1()
{
    delete ui;
}

void TestForm1::on_next_pushButton_clicked()
{
    if (ui->radioButton_3->isChecked()) {
        a = true;
    }
    else {
        a = false;
    }
    emit next_button_clicked();
}

void TestForm1::on_finish_pushButton_clicked()
{
    if (ui->radioButton_3->isChecked()) {
        a = true;
    }
    else {
        a = false;
    }
    emit finish_button_clicked();
}

