#include "auth_window.h"
#include "ui_auth_window.h"

auth_window::auth_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::auth_window)
{
    ui->setupUi(this);
}

auth_window::~auth_window()
{
    delete ui;
}

void auth_window::on_registration_pushButton_clicked()
{
    emit register_button_clicked();
}

void auth_window::on_enter_pushButton_clicked()
{
    emit main_enter_button_clicked();
}

void auth_window::on_email_lineEdit_textEdited(const QString &arg1)
{
    auth_window::m_userEmail = arg1;
}
void auth_window::on_password_lineEdit_textEdited(const QString &arg1)
{
    auth_window::m_userPass = arg1;
}

QString auth_window::getEmail()
{
    return auth_window::m_userEmail;
}

QString auth_window::getPass()
{
    return auth_window::m_userPass;
}
