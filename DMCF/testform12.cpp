#include "testform12.h"
#include "ui_testform12.h"
#include <QPixmap>

TestForm12::TestForm12(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm12)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm12::~TestForm12()
{
    delete ui;
}

void TestForm12::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm12::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm12::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
