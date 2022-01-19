#include "tstform22.h"
#include "ui_tstform22.h"

tstform22::tstform22(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tstform22)
{
    ui->setupUi(this);
}

tstform22::~tstform22()
{
    delete ui;
}
