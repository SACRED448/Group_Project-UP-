#include "testform18.h"
#include "ui_testform18.h"

testform18::testform18(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform18)
{
    ui->setupUi(this);
}

testform18::~testform18()
{
    delete ui;
}
