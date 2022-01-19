#include "testform13.h"
#include "ui_testform13.h"

testform13::testform13(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform13)
{
    ui->setupUi(this);
}

testform13::~testform13()
{
    delete ui;
}
