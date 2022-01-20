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
#include "testform3.h"
#include "testform4.h"
#include "testform5.h"
#include "testform6.h"
#include "testform7.h"
#include "testform8.h"
#include "testform9.h"
#include "testform10.h"
#include "testform11.h"
#include "testform12.h"
#include "testform13.h"
#include "testform14.h"
#include "testform15.h"
#include "testform16.h"
#include "testform17.h"
#include "testform18.h"
#include "testform19.h"
#include "testform20.h"
#include "testform21.h"
#include "testform22.h"
#include "testform23.h"
#include "testform24.h"
#include "testform25.h"
#include "testform26.h"
#include "testform27.h"
#include "testform28.h"
#include "testform28.h"
#include "testform29.h"
#include "testform30.h"
#include "testform31.h"
#include "testform32.h"



//#define Quantity 30

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


    TestForm1 ui_TF1;
    TestForm2 ui_TF2;
    TestForm3 ui_TF3;
    TestForm4 ui_TF4;
    TestForm5 ui_TF5;
    TestForm6 ui_TF6;
    TestForm7 ui_TF7;
    TestForm8 ui_TF8;
    TestForm9 ui_TF9;
    TestForm10 ui_TF10;
    TestForm11 ui_TF11;
    TestForm12 ui_TF12;
    TestForm13 ui_TF13;
    TestForm14 ui_TF14;
    TestForm15 ui_TF15;
    TestForm16 ui_TF16;
    TestForm17 ui_TF17;
    TestForm18 ui_TF18;
    TestForm19 ui_TF19;
    TestForm20 ui_TF20;
    TestForm21 ui_TF21;
    TestForm22 ui_TF22;
    TestForm23 ui_TF23;
    TestForm24 ui_TF24;
    TestForm25 ui_TF25;
    TestForm26 ui_TF26;
    TestForm27 ui_TF27;
    TestForm28 ui_TF28;
    TestForm29 ui_TF29;
    TestForm30 ui_TF30;
    TestForm31 ui_TF31;
    TestForm32 ui_TF32;


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

/*_______________________________________________________________________________________________________________*/

    void nextTF1WindowShow();
    void finishTF1WindowShow();

    void nextTF2WindowShow();
    void backTF2WindowShow();
    void finishTF2WindowShow();

    void nextTF3WindowShow();
    void backTF3WindowShow();
    void finishTF3WindowShow();

    void nextTF4WindowShow();
    void backTF4WindowShow();
    void finishTF4WindowShow();

    void nextTF5WindowShow();
    void backTF5WindowShow();
    void finishTF5WindowShow();

    void nextTF6WindowShow();
    void backTF6WindowShow();
    void finishTF6WindowShow();

    void nextTF7WindowShow();
    void backTF7WindowShow();
    void finishTF7WindowShow();

    void nextTF8WindowShow();
    void backTF8WindowShow();
    void finishTF8WindowShow();

    void nextTF9WindowShow();
    void backTF9WindowShow();
    void finishTF9WindowShow();

    void nextTF10WindowShow();
    void backTF10WindowShow();
    void finishTF10WindowShow();

    void nextTF11WindowShow();
    void backTF11WindowShow();
    void finishTF11WindowShow();

    void nextTF12WindowShow();
    void backTF12WindowShow();
    void finishTF12WindowShow();

    void nextTF13WindowShow();
    void backTF13WindowShow();
    void finishTF13WindowShow();

    void nextTF14WindowShow();
    void backTF14WindowShow();
    void finishTF14WindowShow();

    void nextTF15WindowShow();
    void backTF15WindowShow();
    void finishTF15WindowShow();

    void nextTF16WindowShow();
    void backTF16WindowShow();
    void finishTF16WindowShow();

    void nextTF17WindowShow();
    void backTF17WindowShow();
    void finishTF17WindowShow();

    void nextTF18WindowShow();
    void backTF18WindowShow();
    void finishTF18WindowShow();

    void nextTF19WindowShow();
    void backTF19WindowShow();
    void finishTF19WindowShow();

    void nextTF20WindowShow();
    void backTF20WindowShow();
    void finishTF20WindowShow();

    void nextTF21WindowShow();
    void backTF21WindowShow();
    void finishTF21WindowShow();

    void nextTF22WindowShow();
    void backTF22WindowShow();
    void finishTF22WindowShow();

    void nextTF23WindowShow();
    void backTF23WindowShow();
    void finishTF23WindowShow();

    void nextTF24WindowShow();
    void backTF24WindowShow();
    void finishTF24WindowShow();

    void nextTF25WindowShow();
    void backTF25WindowShow();
    void finishTF25WindowShow();

    void nextTF26WindowShow();
    void backTF26WindowShow();
    void finishTF26WindowShow();

    void nextTF27WindowShow();
    void backTF27WindowShow();
    void finishTF27WindowShow();

    void nextTF28WindowShow();
    void backTF28WindowShow();
    void finishTF28WindowShow();

    void nextTF29WindowShow();
    void backTF29WindowShow();
    void finishTF29WindowShow();

    void nextTF30WindowShow();
    void backTF30WindowShow();
    void finishTF30WindowShow();

    void nextTF31WindowShow();
    void backTF31WindowShow();
    void finishTF31WindowShow();

    void backTF32WindowShow();
    void finishTF32WindowShow();

/*_______________________________________________________________________________________________________________*/

    void on_start_pushButton_clicked();
    void on_results_pushButton_clicked();
    void on_exit_pushButton_clicked();
};
#endif // MAINWINDOW_H
