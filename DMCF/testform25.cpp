#include "testform25.h"
#include "ui_testform25.h"

testform25::testform25(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform25)
{
    ui->setupUi(this);
}

testform25::~testform25()
{
    delete ui;
}
