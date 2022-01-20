#include "testform14.h"
#include "ui_testform14.h"
#include <QPixmap>

TestForm14::TestForm14(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm14)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm14::~TestForm14()
{
    delete ui;
}

void TestForm14::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm14::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm14::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
