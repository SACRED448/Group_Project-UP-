#include "testform31.h"
#include "ui_testform31.h"

testform31::testform31(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform31)
{
    ui->setupUi(this);
}

testform31::~testform31()
{
    delete ui;
}
