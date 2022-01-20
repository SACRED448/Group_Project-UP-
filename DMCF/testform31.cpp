#include "testform31.h"
#include "ui_testform31.h"
#include <QPixmap>

TestForm31::TestForm31(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm31)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm31::~TestForm31()
{
    delete ui;
}

void TestForm31::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm31::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm31::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}

