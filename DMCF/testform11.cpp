#include "testform11.h"
#include "ui_testform11.h"

testform11::testform11(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform11)
{
    ui->setupUi(this);
}

testform11::~testform11()
{
    delete ui;
}
