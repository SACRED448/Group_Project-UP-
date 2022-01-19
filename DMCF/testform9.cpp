#include "testform9.h"
#include "ui_testform9.h"

testform9::testform9(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform9)
{
    ui->setupUi(this);
}

testform9::~testform9()
{
    delete ui;
}
