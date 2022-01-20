#include "testform19.h"
#include "ui_testform19.h"
#include <QPixmap>

TestForm19::TestForm19(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm19)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm19::~TestForm19()
{
    delete ui;
}

void TestForm19::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm19::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm19::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
