#include "testform29.h"
#include "ui_testform29.h"

testform29::testform29(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform29)
{
    ui->setupUi(this);
}

testform29::~testform29()
{
    delete ui;
}
