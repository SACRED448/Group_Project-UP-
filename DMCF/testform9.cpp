#include "testform9.h"
#include "ui_testform9.h"
#include <QPixmap>

TestForm9::TestForm9(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm9)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm9::~TestForm9()
{
    delete ui;
}

void TestForm9::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm9::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm9::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
