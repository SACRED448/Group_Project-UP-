#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "auth_window.h"
#include "reg_window.h"
#include "modules.h"
#include <QMessageBox>
#include <QtDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    user_counter = 0;
    m_loginSuccesfull = false;
    connect(&ui_Auth, SIGNAL(main_enter_button_clicked()),
            this, SLOT(authorizeUser()));
    connect(&ui_Auth,SIGNAL(destroyed()),
            this, SLOT(show()));
    connect(&ui_Auth,SIGNAL(register_button_clicked()),
            this,SLOT(registerWindowShow()));
    connect(&ui_Reg,SIGNAL(main_register_button_clicked()),
            this,SLOT(registerUser()));
    connect(&ui_Reg,SIGNAL(enter_button_clicked()),
            this,SLOT(authorizationWindowShow()));
    connect(&ui_Reg,SIGNAL(destroyed()),
            &ui_Auth, SLOT(show()));

    connect(&ui_Modules,SIGNAL(test_button_clicked()),
            this,SLOT(testform1WindowShow()));
    connect(&ui_Modules,SIGNAL(back_button_clicked()),
            this,SLOT(MainWindowShow()));

    TestForm1 ui_TF[Quantity];
    for (int i = 1; i <= Quantity; i++)
    {
        ui_TF[i].n = i;
    }
/*    for (int i = 1; i <= Quantity; i++)
    {
        connect(&ui_TF[i],SIGNAL(next_button_clicked()),
                this,SLOT(nextTFWindowShow(i);));
        connect(&ui_TF[i],SIGNAL(back_button_clicked()),
                this,SLOT(backTFWindowShow(i);));
    }*/

    connect(&ui_TF[1],SIGNAL(next_button_clicked()),
            this,SLOT(nextTFWindowShow(i);));
    connect(&ui_TF[1],SIGNAL(back_button_clicked()),
            this,SLOT(backTFWindowShow(i);));


    if(!connectDB())
    {
        qDebug() << "Failed to connect DB";
    }

    QSqlQuery query;

    db_input = "CREATE TABLE userlist ( "
               "number INTEGER PRIMARY KEY NOT NULL,"
               "name VARCHAR(20),"
               "sname VARCHAR(20),"
               "thname VARCHAR(20),"
               "email VARCHAR(40),"
               "pass VARCHAR(12),"
               "xpos INTEGER,"
               "ypos INTEGER,"
               "width INTEGER,"
               "length INTEGER );";
    if(!query.exec(db_input))
    {
            qDebug() << "Unable to create a table" << query.lastError()/* << " : " << query.lastQuery()*/;
    }


    ui->setupUi(this);

    //connect(&ui_Auth,SIGNAL(destroyed()), this, SLOT(AuthAquired()));
}

void MainWindow::authorizeUser()
{
    m_useremail = ui_Auth.getEmail();
    m_userpass = ui_Auth.getPass();

    QString str_t = " SELECT * "
                    " FROM userlist "
                    " WHERE name = '%1'";

    QString useremail = "";
    QString userpass = "";

    int xPos = 0;
    int yPos = 0;

    int width = 0;
    int length = 0;

    db_input = str_t.arg(m_useremail);

    QSqlQuery query;
    QSqlRecord rec;

    if(!query.exec(db_input))
    {
        qDebug() << "Unable to execute query - exiting" << query.lastError() << " : " << query.lastQuery();
    }
    rec = query.record();
    query.next();
    user_counter = query.value(rec.indexOf("number")).toInt();
    useremail = query.value(rec.indexOf("email")).toString();
    userpass = query.value(rec.indexOf("pass")).toString();
    if(m_useremail != useremail || m_userpass != userpass)
    {
        qDebug() << "Password missmatch" << useremail << " " << userpass;
        m_loginSuccesfull = false;
    }
    else
    {
        m_loginSuccesfull = true;
        xPos = query.value(rec.indexOf("xpos")).toInt();
        yPos = query.value(rec.indexOf("ypos")).toInt();
        width = query.value(rec.indexOf("width")).toInt();
        length = query.value(rec.indexOf("length")).toInt();
        ui_Auth.close();
        ui_Reg.close();
        this->setGeometry(xPos,yPos,width, length);
        this->show();
    }
}

void MainWindow::registerWindowShow()
{
    ui_Auth.hide();
    ui_Reg.show();
}

void MainWindow::authorizationWindowShow()
{
    ui_Reg.hide();
    ui_Auth.show();
}

void MainWindow::testform1WindowShow()
{
    ui_Modules.hide();
    ui_TF[1].show();
}

void MainWindow::registerUser()
{
    if(ui_Reg.checkPass())
    {
        QSqlQuery query;
        QSqlRecord rec;
        QString str_t = "SELECT COUNT(*) "
                        "FROM userlist;";
        db_input = str_t;
        if(!query.exec(db_input))
        {
            qDebug() << "Unable to get number " << query.lastError() << " : " << query.lastQuery();
            return;
        }
        else
        {
            query.next();
            rec = query.record();
            user_counter = rec.value(0).toInt();
            qDebug() << user_counter;
        }

        m_userfname = ui_Reg.getFname();
        m_usersname = ui_Reg.getSname();
        m_userthname = ui_Reg.getTHname();
        m_useremail = ui_Reg.getEmail();
        m_userpass = ui_Reg.getPass();
        user_counter++;
        str_t = "INSERT INTO userlist(number, name, sname, thname, email, pass, xpos, ypos, width, length)"
                "VALUES(%1, '%2', '%3', '%4', '%5', '%6', %7, %8, %9, %10);";
        db_input = str_t .arg(user_counter)
                         .arg(m_userfname)
                         .arg(m_usersname)
                         .arg(m_userthname)
                         .arg(m_useremail)
                         .arg(m_userpass)
                         .arg(0)
                         .arg(0)
                         .arg(800)
                         .arg(400);

        if(!query.exec(db_input))
        {
            qDebug() << "Unable to insert data"  << query.lastError() << " : " << query.lastQuery();
        }
        else
        {
            ui_Reg.hide();
            ui_Auth.show();
        }
    }
    else
    {
        qDebug() << "Confirm password coorectly";
    }

}

void MainWindow::display()
{
    ui_Auth.show();
}

void MainWindow::MainWindowShow()
{
    ui_Modules.hide();
    this->show();
}

MainWindow::~MainWindow()
{
    if(m_loginSuccesfull)
    {
        QString str_t = "UPDATE userlist "
                        "SET xpos = %2, ypos = %3, width = %4, length = %5 "
                        "WHERE name = '%1';";
        db_input = str_t .arg(m_useremail)
                         .arg(this->x())
                         .arg(this->y())
                         .arg(this->width())
                         .arg(this->height());
        QSqlQuery query;
        if(!query.exec(db_input))
        {
            qDebug() << "Unable to insert data"  << query.lastError() << " : " << query.lastQuery() ;
        }
    }
    mw_db.removeDatabase("authorisation");
    qDebug() << "MainWindow Destroyed";
    delete ui;
    exit(0);
}

bool MainWindow::connectDB()
{
    mw_db = QSqlDatabase::addDatabase("QSQLITE");
    mw_db.setDatabaseName("./testDB.db");
    if(!mw_db.open())
    {
        qDebug() << "Cannot open database: " << mw_db.lastError();
        return false;
    }
    return true;
}
/*_______________________________________________________________________________________________________________*/

void MainWindow::nextTFWindowShow(int a)
{
    if (ui_TF[a].n < Quantity)
    {
        ui_TF[a].hide();
        ui_TF[a + 1].show();
    }
};

void MainWindow::backTFWindowShow(int a)
{
    if (ui_TF[a].n > 1)
    {
        ui_TF[a].hide();
        ui_TF[a - 1].show();
    }
};




/*_______________________________________________________________________________________________________________*/

void MainWindow::on_start_pushButton_clicked()
{
    this->hide();
    ui_Modules.show();
}


void MainWindow::on_results_pushButton_clicked()
{

}


void MainWindow::on_exit_pushButton_clicked()
{
    this->close();
}

