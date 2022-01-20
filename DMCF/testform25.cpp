#include "testform25.h"
#include "ui_testform25.h"
#include <QPixmap>

TestForm25::TestForm25(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm25)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm25::~TestForm25()
{
    delete ui;
}

void TestForm25::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm25::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm25::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
