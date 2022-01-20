#include "testform24.h"
#include "ui_testform24.h"
#include <QPixmap>

TestForm24::TestForm24(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm24)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm24::~TestForm24()
{
    delete ui;
}

void TestForm24::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm24::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm24::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
