#include "testform5.h"
#include "ui_testform5.h"

testform5::testform5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform5)
{
    ui->setupUi(this);
}

testform5::~testform5()
{
    delete ui;
}
