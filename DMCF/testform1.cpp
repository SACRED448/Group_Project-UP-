#include "testform1.h"
#include "ui_testform1.h"
#include <QPixmap>

#define Quantity 30

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

int TestForm1::getN()
{
    return TestForm1::n;
}

void TestForm1::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm1::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm1::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}

