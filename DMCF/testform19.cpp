#include "testform19.h"
#include "ui_testform19.h"

testform19::testform19(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform19)
{
    ui->setupUi(this);
}

testform19::~testform19()
{
    delete ui;
}
