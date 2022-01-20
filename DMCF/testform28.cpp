#include "testform28.h"
#include "ui_testform28.h"
#include <QPixmap>

TestForm28::TestForm28(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm28)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm28::~TestForm28()
{
    delete ui;
}

void TestForm28::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm28::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm28::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
