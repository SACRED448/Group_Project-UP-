#include "testform24.h"
#include "ui_testform24.h"

testform24::testform24(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform24)
{
    ui->setupUi(this);
}

testform24::~testform24()
{
    delete ui;
}
