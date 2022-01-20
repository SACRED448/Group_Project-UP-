#include "testform23.h"
#include "ui_testform23.h"
#include <QPixmap>

TestForm23::TestForm23(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm23)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm23::~TestForm23()
{
    delete ui;
}

void TestForm23::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm23::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm23::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
