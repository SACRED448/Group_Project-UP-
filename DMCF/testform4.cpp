#include "testform4.h"
#include "ui_testform4.h"
#include <QPixmap>

TestForm4::TestForm4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm4)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/1-1.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm4::~TestForm4()
{
    delete ui;
}

void TestForm4::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm4::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm4::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
