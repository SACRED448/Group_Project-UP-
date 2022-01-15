#include "testform2.h"
#include "ui_testform2.h"

testform2::testform2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform2)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/numbers.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

testform2::~testform2()
{
    delete ui;
}

void testform2::on_next_pushButton_2_clicked()
{
    emit next_button_clicked();
}


void testform2::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}


void testform2::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}

