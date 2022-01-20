#include "testform10.h"
#include "ui_testform10.h"
#include <QPixmap>

TestForm10::TestForm10(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm10)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm10::~TestForm10()
{
    delete ui;
}

void TestForm10::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm10::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm10::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
