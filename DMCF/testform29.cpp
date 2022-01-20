#include "testform29.h"
#include "ui_testform29.h"
#include <QPixmap>

TestForm29::TestForm29(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm29)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm29::~TestForm29()
{
    delete ui;
}

void TestForm29::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm29::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm29::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
