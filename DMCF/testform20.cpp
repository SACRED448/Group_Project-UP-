#include "testform20.h"
#include "ui_testform20.h"
#include <QPixmap>

TestForm20::TestForm20(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm20)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm20::~TestForm20()
{
    delete ui;
}

void TestForm20::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm20::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm20::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
