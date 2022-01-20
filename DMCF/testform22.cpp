#include "testform22.h"
#include "ui_testform22.h"
#include <QPixmap>

TestForm22::TestForm22(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm22)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm22::~TestForm22()
{
    delete ui;
}

void TestForm22::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm22::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm22::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
