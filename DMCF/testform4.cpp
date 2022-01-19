#include "testform4.h"
#include "ui_testform4.h"

testform4::testform4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform4)
{
    ui->setupUi(this);
}

testform4::~testform4()
{
    delete ui;
}
