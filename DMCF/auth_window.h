#ifndef AUTH_WINDOW_H
#define AUTH_WINDOW_H

#include <QDialog>

namespace Ui {
class auth_window;
}

class auth_window : public QDialog
{
    Q_OBJECT

public:
    explicit auth_window(QWidget *parent = nullptr);
    ~auth_window();
    QString getEmail();
    QString getPass();

signals:
    void main_enter_button_clicked();
    void register_button_clicked();

private slots:
    void on_email_lineEdit_textEdited(const QString &arg1);

    void on_password_lineEdit_textEdited(const QString &arg1);

    void on_enter_pushButton_clicked();

    void on_registration_pushButton_clicked();

private:
    Ui::auth_window *ui;
    QString m_userEmail;
    QString m_userPass;
};

#endif // AUTH_WINDOW_H
