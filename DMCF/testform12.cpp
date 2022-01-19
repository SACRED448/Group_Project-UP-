#include "testform12.h"
#include "ui_testform12.h"

testform12::testform12(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform12)
{
    ui->setupUi(this);
}

testform12::~testform12()
{
    delete ui;
}
