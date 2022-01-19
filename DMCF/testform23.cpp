#include "testform23.h"
#include "ui_testform23.h"

testform23::testform23(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform23)
{
    ui->setupUi(this);
}

testform23::~testform23()
{
    delete ui;
}
