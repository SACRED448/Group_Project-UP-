#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QtSql/QtSql>
#include "auth_window.h"
#include "reg_window.h"
#include "modules.h"
#include "testform1.h"
#include "testform2.h"

#define Quantity 30

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void display(); // прототип пользовательской функции отображения
    bool connectDB(); // прототип метода подключения к БД

private:
    Ui::MainWindow *ui;

    auth_window ui_Auth; // экземпляры окна авторизации и окна регистрации
    reg_window ui_Reg; // принадлежат главному окну

    Modules ui_Modules;

    TestForm1 ui_TF[Quantity];
    //TestForm1 ui_TF1;
    //testform2 ui_TF2;

    QString m_userfname; // строки для обработки
    QString m_usersname; // пользовательского ввода
    QString m_userthname;
    QString m_useremail;
    QString m_userpass;

    QString db_input; // строка для отправки запроса к БД

    QSqlDatabase mw_db; // экземпляр подключения к БД
    QSqlQuery *query;

    int user_counter; // счетчик пользователей
    bool m_loginSuccesfull; // флаг успешной авторизации
private slots:
    void authorizeUser(); // пользовательские слоты
    void registerWindowShow();
    void authorizationWindowShow();
    void registerUser();
    void testform1WindowShow();
    void MainWindowShow();

    void nextTFWindowShow(int a);
    void backTFWindowShow(int a);

    void on_start_pushButton_clicked();
    void on_results_pushButton_clicked();
    void on_exit_pushButton_clicked();
};
#endif // MAINWINDOW_H
