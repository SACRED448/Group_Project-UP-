#include "testform32.h"
#include "ui_testform32.h"
#include <QPixmap>

TestForm32::TestForm32(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm32)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm32::~TestForm32()
{
    delete ui;
}

void TestForm32::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm32::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}

