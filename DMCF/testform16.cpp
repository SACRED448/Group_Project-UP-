#include "testform16.h"
#include "ui_testform16.h"
#include <QPixmap>

TestForm16::TestForm16(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm16)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm16::~TestForm16()
{
    delete ui;
}

void TestForm16::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm16::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm16::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
