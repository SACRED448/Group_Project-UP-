#include "testform13.h"
#include "ui_testform13.h"
#include <QPixmap>

TestForm13::TestForm13(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm13)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm13::~TestForm13()
{
    delete ui;
}

void TestForm13::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm13::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm13::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
