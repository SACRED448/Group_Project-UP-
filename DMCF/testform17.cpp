#include "testform17.h"
#include "ui_testform17.h"
#include <QPixmap>

TestForm17::TestForm17(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm17)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm17::~TestForm17()
{
    delete ui;
}

void TestForm17::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm17::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm17::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
