#include "testform27.h"
#include "ui_testform27.h"
#include <QPixmap>

TestForm27::TestForm27(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm27)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm27::~TestForm27()
{
    delete ui;
}

void TestForm27::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm27::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm27::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
