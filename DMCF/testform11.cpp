#include "testform11.h"
#include "ui_testform11.h"
#include <QPixmap>

TestForm11::TestForm11(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm11)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm11::~TestForm11()
{
    delete ui;
}

void TestForm11::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm11::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm11::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
