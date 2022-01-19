#include "testform10.h"
#include "ui_testform10.h"

testform10::testform10(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform10)
{
    ui->setupUi(this);
}

testform10::~testform10()
{
    delete ui;
}
