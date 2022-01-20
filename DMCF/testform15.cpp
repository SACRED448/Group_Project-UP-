#include "testform15.h"
#include "ui_testform15.h"
#include <QPixmap>

TestForm15::TestForm15(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm15)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm15::~TestForm15()
{
    delete ui;
}

void TestForm15::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm15::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm15::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
