#ifndef REG_WINDOW_H
#define REG_WINDOW_H

#include <QDialog>

namespace Ui {
class reg_window;
}

class reg_window : public QDialog
{
    Q_OBJECT

public:
    explicit reg_window(QWidget *parent = nullptr);
    ~reg_window();
    QString getFname();
    QString getSname();
    QString getTHname();
    QString getEmail();
    QString getPass();
    bool checkPass();

signals:
    void main_register_button_clicked();
    void enter_button_clicked();

private slots:
    void on_fname_lineEdit_textEdited(const QString &arg1);

    void on_sname_lineEdit_textEdited(const QString &arg1);

    void on_thname_lineEdit_textEdited(const QString &arg1);

    void on_email_lineEdit_textEdited(const QString &arg1);

    void on_password_lineEdit_textEdited(const QString &arg1);

    void on_reppassword_lineEdit_textEdited(const QString &arg1);

    void on_registration_pushButton_clicked();

    void on_enter_pushButton_clicked();

private:
    Ui::reg_window *ui;
    QString m_userFname;
    QString m_userSname;
    QString m_userTHname;
    QString m_userEmail;
    QString m_userPass;
    QString m_reppassword;
};

#endif // REG_WINDOW_H
