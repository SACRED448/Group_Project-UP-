#include "testform20.h"
#include "ui_testform20.h"

testform20::testform20(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testform20)
{
    ui->setupUi(this);
}

testform20::~testform20()
{
    delete ui;
}
