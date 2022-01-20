#include "testform18.h"
#include "ui_testform18.h"
#include <QPixmap>

TestForm18::TestForm18(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm18)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm18::~TestForm18()
{
    delete ui;
}

void TestForm18::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm18::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm18::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
