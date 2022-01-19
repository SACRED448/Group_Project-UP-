#include "testform14.h"
#include "ui_testform14.h"

testform14::testform14(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform14)
{
    ui->setupUi(this);
}

testform14::~testform14()
{
    delete ui;
}
