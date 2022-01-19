#include "testform26.h"
#include "ui_testform26.h"

testform26::testform26(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform26)
{
    ui->setupUi(this);
}

testform26::~testform26()
{
    delete ui;
}
