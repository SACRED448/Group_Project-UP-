#include "testform26.h"
#include "ui_testform26.h"
#include <QPixmap>

TestForm26::TestForm26(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm26)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm26::~TestForm26()
{
    delete ui;
}

void TestForm26::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm26::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm26::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
