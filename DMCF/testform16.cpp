#include "testform16.h"
#include "ui_testform16.h"

testform16::testform16(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform16)
{
    ui->setupUi(this);
}

testform16::~testform16()
{
    delete ui;
}
