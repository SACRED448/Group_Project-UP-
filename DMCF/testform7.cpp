#include "testform7.h"
#include "ui_test7.h"

test7::test7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::test7)
{
    ui->setupUi(this);
}

test7::~test7()
{
    delete ui;
}
