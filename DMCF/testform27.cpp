#include "testform27.h"
#include "ui_testform27.h"

testform27::testform27(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform27)
{
    ui->setupUi(this);
}

testform27::~testform27()
{
    delete ui;
}
