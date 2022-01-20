#include "testform3.h"
#include "ui_testform3.h"
#include <QPixmap>

TestForm3::TestForm3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm3)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm3::~TestForm3()
{
    delete ui;
}

void TestForm3::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm3::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm3::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
