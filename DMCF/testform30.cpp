#include "testform30.h"
#include "ui_testform30.h"

testform30::testform30(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform30)
{
    ui->setupUi(this);
}

testform30::~testform30()
{
    delete ui;
}
