#include "testform21.h"
#include "ui_testform21.h"

testform21::testform21(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform21)
{
    ui->setupUi(this);
}

testform21::~testform21()
{
    delete ui;
}
