#include "testform3.h"
#include "ui_testform3.h"

testform3::testform3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform3)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/rectangle.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

}

testform3::~testform3()
{
    delete ui;
}


void testform3::on_next_pushButton_2_clicked()
{

}

void testform3::on_back_pushButton_clicked()
{

}

void testform3::on_finish_pushButton_clicked()
{

}
