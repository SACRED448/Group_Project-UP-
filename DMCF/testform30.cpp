#include "testform30.h"
#include "ui_testform30.h"
#include <QPixmap>

TestForm30::TestForm30(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm30)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm30::~TestForm30()
{
    delete ui;
}

void TestForm30::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm30::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm30::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}

