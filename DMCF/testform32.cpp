#include "testform32.h"
#include "ui_testform32.h"

testform32::testform32(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform32)
{
    ui->setupUi(this);
}

testform32::~testform32()
{
    delete ui;
}
