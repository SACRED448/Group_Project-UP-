#include "testform15.h"
#include "ui_testform15.h"

testform15::testform15(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform15)
{
    ui->setupUi(this);
}

testform15::~testform15()
{
    delete ui;
}
