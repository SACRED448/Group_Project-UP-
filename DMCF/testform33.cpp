#include "testform33.h"
#include "ui_testform33.h"

testform33::testform33(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform33)
{
    ui->setupUi(this);
}

testform33::~testform33()
{
    delete ui;
}
