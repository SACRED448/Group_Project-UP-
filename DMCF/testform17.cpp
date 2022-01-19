#include "testform17.h"
#include "ui_testform17.h"

testform17::testform17(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform17)
{
    ui->setupUi(this);
}

testform17::~testform17()
{
    delete ui;
}
