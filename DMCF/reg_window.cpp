#include "reg_window.h"
#include "ui_reg_window.h"

reg_window::reg_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reg_window)
{
    ui->setupUi(this);
}

reg_window::~reg_window()
{
    delete ui;
}


void reg_window::on_fname_lineEdit_textEdited(const QString &arg1)
{
    reg_window::m_userFname = arg1;
}

void reg_window::on_sname_lineEdit_textEdited(const QString &arg1)
{
    reg_window::m_userSname = arg1;
}

void reg_window::on_thname_lineEdit_textEdited(const QString &arg1)
{
    reg_window::m_userTHname = arg1;
}

void reg_window::on_email_lineEdit_textEdited(const QString &arg1)
{
    reg_window::m_userEmail = arg1;
}

void reg_window::on_password_lineEdit_textEdited(const QString &arg1)
{
    reg_window::m_userPass = arg1;
}

void reg_window::on_reppassword_lineEdit_textEdited(const QString &arg1)
{
    reg_window::m_reppassword = arg1;
}

void reg_window::on_registration_pushButton_clicked()
{
    emit main_register_button_clicked();
}

void reg_window::on_enter_pushButton_clicked()
{
    emit enter_button_clicked();
}

QString reg_window::getFname()
{
    return m_userFname;
}

QString reg_window::getSname()
{
    return m_userSname;
}

QString reg_window::getTHname()
{
    return m_userTHname;
}

QString reg_window::getEmail()
{
    return m_userEmail;
}

QString reg_window::getPass()
{
    return m_userPass;
}

bool reg_window::checkPass()
{
    return (m_reppassword == m_userPass);
}
