#include "modules.h"
#include "ui_modules.h"

Modules::Modules(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Modules)
{
    ui->setupUi(this);
}

Modules::~Modules()
{
    delete ui;
}

void Modules::on_test_pushButton_clicked()
{
    emit test_button_clicked();
}


void Modules::on_text_pushButton_clicked()
{
    emit text_button_clicked();
}


void Modules::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

