#include "testform6.h"
#include "ui_testform6.h"

testform6::testform6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform6)
{
    ui->setupUi(this);
}

testform6::~testform6()
{
    delete ui;
}
