#include "testform8.h"
#include "ui_test8.h"

test8::test8(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::test8)
{
    ui->setupUi(this);
}

test8::~test8()
{
    delete ui;
}
