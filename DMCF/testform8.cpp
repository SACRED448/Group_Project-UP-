#include "testform8.h"
#include "ui_testform8.h"
#include <QPixmap>

TestForm8::TestForm8(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm8)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm8::~TestForm8()
{
    delete ui;
}

void TestForm8::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm8::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm8::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
