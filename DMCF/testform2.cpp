#include "testform2.h"
#include "ui_testform2.h"
#include <QPixmap>

TestForm2::TestForm2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm2)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/numbers.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm2::~TestForm2()
{
    delete ui;
}

void TestForm2::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm2::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm2::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}

