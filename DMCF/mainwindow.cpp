#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "auth_window.h"
#include "reg_window.h"
#include "modules.h"
#include <QMessageBox>
#include <QtDebug>

int number_of_correct_answers = 0;

int array_of_answer[33];

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

    connect(&ui_TF1,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF1WindowShow()));
    connect(&ui_TF1,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF1WindowShow()));

    connect(&ui_TF2,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF2WindowShow()));
    connect(&ui_TF2,SIGNAL(back_button_clicked()),
            this,SLOT(backTF2WindowShow()));
    connect(&ui_TF2,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF2WindowShow()));

    connect(&ui_TF3,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF3WindowShow()));
    connect(&ui_TF3,SIGNAL(back_button_clicked()),
            this,SLOT(backTF3WindowShow()));
    connect(&ui_TF3,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF3WindowShow()));

    connect(&ui_TF4,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF4WindowShow()));
    connect(&ui_TF4,SIGNAL(back_button_clicked()),
            this,SLOT(backTF4WindowShow()));
    connect(&ui_TF4,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF4WindowShow()));

    connect(&ui_TF5,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF5WindowShow()));
    connect(&ui_TF5,SIGNAL(back_button_clicked()),
            this,SLOT(backTF5WindowShow()));
    connect(&ui_TF5,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF5WindowShow()));

    connect(&ui_TF6,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF6WindowShow()));
    connect(&ui_TF6,SIGNAL(back_button_clicked()),
            this,SLOT(backTF6WindowShow()));
    connect(&ui_TF6,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF6WindowShow()));

    connect(&ui_TF7,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF7WindowShow()));
    connect(&ui_TF7,SIGNAL(back_button_clicked()),
            this,SLOT(backTF7WindowShow()));
    connect(&ui_TF7,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF7WindowShow()));

    connect(&ui_TF8,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF8WindowShow()));
    connect(&ui_TF8,SIGNAL(back_button_clicked()),
            this,SLOT(backTF8WindowShow()));
    connect(&ui_TF8,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF8WindowShow()));

    connect(&ui_TF9,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF9WindowShow()));
    connect(&ui_TF9,SIGNAL(back_button_clicked()),
            this,SLOT(backTF9WindowShow()));
    connect(&ui_TF9,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF9WindowShow()));

    connect(&ui_TF10,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF10WindowShow()));
    connect(&ui_TF10,SIGNAL(back_button_clicked()),
            this,SLOT(backTF10WindowShow()));
    connect(&ui_TF10,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF10WindowShow()));

    connect(&ui_TF11,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF11WindowShow()));
    connect(&ui_TF11,SIGNAL(back_button_clicked()),
            this,SLOT(backTF11WindowShow()));
    connect(&ui_TF11,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF11WindowShow()));

    connect(&ui_TF12,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF12WindowShow()));
    connect(&ui_TF12,SIGNAL(back_button_clicked()),
            this,SLOT(backTF12WindowShow()));
    connect(&ui_TF12,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF12WindowShow()));

    connect(&ui_TF13,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF13WindowShow()));
    connect(&ui_TF13,SIGNAL(back_button_clicked()),
            this,SLOT(backTF13WindowShow()));
    connect(&ui_TF13,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF13WindowShow()));

    connect(&ui_TF14,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF14WindowShow()));
    connect(&ui_TF14,SIGNAL(back_button_clicked()),
            this,SLOT(backTF14WindowShow()));
    connect(&ui_TF14,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF14WindowShow()));

    connect(&ui_TF15,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF15WindowShow()));
    connect(&ui_TF15,SIGNAL(back_button_clicked()),
            this,SLOT(backTF15WindowShow()));
    connect(&ui_TF15,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF15WindowShow()));

    connect(&ui_TF16,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF16WindowShow()));
    connect(&ui_TF16,SIGNAL(back_button_clicked()),
            this,SLOT(backTF16WindowShow()));
    connect(&ui_TF16,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF16WindowShow()));

    connect(&ui_TF17,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF17WindowShow()));
    connect(&ui_TF17,SIGNAL(back_button_clicked()),
            this,SLOT(backTF17WindowShow()));
    connect(&ui_TF17,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF17WindowShow()));

    connect(&ui_TF18,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF18WindowShow()));
    connect(&ui_TF18,SIGNAL(back_button_clicked()),
            this,SLOT(backTF18WindowShow()));
    connect(&ui_TF18,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF18WindowShow()));

    connect(&ui_TF19,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF19WindowShow()));
    connect(&ui_TF19,SIGNAL(back_button_clicked()),
            this,SLOT(backTF19WindowShow()));
    connect(&ui_TF19,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF19WindowShow()));

    connect(&ui_TF20,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF20WindowShow()));
    connect(&ui_TF20,SIGNAL(back_button_clicked()),
            this,SLOT(backTF20WindowShow()));
    connect(&ui_TF20,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF20WindowShow()));

    connect(&ui_TF21,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF21WindowShow()));
    connect(&ui_TF21,SIGNAL(back_button_clicked()),
            this,SLOT(backTF21WindowShow()));
    connect(&ui_TF21,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF21WindowShow()));

    connect(&ui_TF22,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF22WindowShow()));
    connect(&ui_TF22,SIGNAL(back_button_clicked()),
            this,SLOT(backTF22WindowShow()));
    connect(&ui_TF22,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF22WindowShow()));

    connect(&ui_TF23,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF23WindowShow()));
    connect(&ui_TF23,SIGNAL(back_button_clicked()),
            this,SLOT(backTF23WindowShow()));
    connect(&ui_TF23,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF23WindowShow()));

    connect(&ui_TF24,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF24WindowShow()));
    connect(&ui_TF24,SIGNAL(back_button_clicked()),
            this,SLOT(backTF24WindowShow()));
    connect(&ui_TF24,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF24WindowShow()));

    connect(&ui_TF25,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF25WindowShow()));
    connect(&ui_TF25,SIGNAL(back_button_clicked()),
            this,SLOT(backTF25WindowShow()));
    connect(&ui_TF25,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF25WindowShow()));

    connect(&ui_TF26,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF26WindowShow()));
    connect(&ui_TF26,SIGNAL(back_button_clicked()),
            this,SLOT(backTF26WindowShow()));
    connect(&ui_TF26,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF26WindowShow()));

    connect(&ui_TF27,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF27WindowShow()));
    connect(&ui_TF27,SIGNAL(back_button_clicked()),
            this,SLOT(backTF27WindowShow()));
    connect(&ui_TF27,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF27WindowShow()));

    connect(&ui_TF28,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF28WindowShow()));
    connect(&ui_TF28,SIGNAL(back_button_clicked()),
            this,SLOT(backTF28WindowShow()));
    connect(&ui_TF28,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF28WindowShow()));

    connect(&ui_TF29,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF29WindowShow()));
    connect(&ui_TF29,SIGNAL(back_button_clicked()),
            this,SLOT(backTF29WindowShow()));
    connect(&ui_TF29,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF29WindowShow()));

    connect(&ui_TF30,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF30WindowShow()));
    connect(&ui_TF30,SIGNAL(back_button_clicked()),
            this,SLOT(backTF30WindowShow()));
    connect(&ui_TF30,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF30WindowShow()));

    connect(&ui_TF31,SIGNAL(next_button_clicked()),
            this,SLOT(nextTF31WindowShow()));
    connect(&ui_TF31,SIGNAL(back_button_clicked()),
            this,SLOT(backTF31WindowShow()));
    connect(&ui_TF31,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF31WindowShow()));

    connect(&ui_TF32,SIGNAL(back_button_clicked()),
            this,SLOT(backTF32WindowShow()));
    connect(&ui_TF32,SIGNAL(finish_button_clicked()),
            this,SLOT(finishTF32WindowShow()));


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
    ui_TF1.show();
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

void MainWindow::nextTF1WindowShow()
{
    if(ui_TF1.a){
        array_of_answer[1] = 1;
    }
    ui_TF1.hide();
    ui_TF2.show();
};

void MainWindow::finishTF1WindowShow()
{
    if(ui_TF1.a){
        array_of_answer[1] = 1;
    }
     ui_TF1.hide();

};


void MainWindow::nextTF2WindowShow()
{
    if(ui_TF2.a){
        array_of_answer[2] = 1;
    }
    ui_TF2.hide();
    ui_TF3.show();
};

void MainWindow::backTF2WindowShow()
{
    ui_TF2.hide();
    ui_TF1.show();
};

void MainWindow::finishTF2WindowShow()
{
    if(ui_TF2.a){
        array_of_answer[2] = 1;
    }
    ui_TF2.hide();

};


void MainWindow::nextTF3WindowShow()
{
    if(ui_TF3.a){
        array_of_answer[3] = 1;
    }
    ui_TF3.hide();
    ui_TF4.show();
};

void MainWindow::backTF3WindowShow()
{
    ui_TF3.hide();
    ui_TF2.show();
};

void MainWindow::finishTF3WindowShow()
{
    if(ui_TF3.a){
        array_of_answer[3] = 1;
    }
     ui_TF3.hide();

};


void MainWindow::nextTF4WindowShow()
{
    if(ui_TF4.a){
        array_of_answer[4] = 1;
    }
    ui_TF4.hide();
    ui_TF5.show();
};

void MainWindow::backTF4WindowShow()
{
    ui_TF4.hide();
    ui_TF3.show();
};

void MainWindow::finishTF4WindowShow()
{
    if(ui_TF4.a){
        array_of_answer[4] = 1;
    }
     ui_TF4.hide();

};


void MainWindow::nextTF5WindowShow()
{
    if(ui_TF5.a){
        array_of_answer[5] = 1;
    }
    ui_TF5.hide();
    ui_TF6.show();
};

void MainWindow::backTF5WindowShow()
{
    ui_TF5.hide();
    ui_TF4.show();
};

void MainWindow::finishTF5WindowShow()
{
    if(ui_TF5.a){
        array_of_answer[5] = 1;
    }
     ui_TF5.hide();

};


void MainWindow::nextTF6WindowShow()
{
    if(ui_TF6.a){
        array_of_answer[6] = 1;
    }
    ui_TF6.hide();
    ui_TF7.show();
};

void MainWindow::backTF6WindowShow()
{
    ui_TF6.hide();
    ui_TF5.show();
};

void MainWindow::finishTF6WindowShow()
{
    if(ui_TF6.a){
        array_of_answer[6] = 1;
    }
     ui_TF6.hide();

};


void MainWindow::nextTF7WindowShow()
{
    if(ui_TF7.a){
        array_of_answer[7] = 1;
    }
    ui_TF7.hide();
    ui_TF8.show();
};

void MainWindow::backTF7WindowShow()
{
    ui_TF7.hide();
    ui_TF6.show();
};

void MainWindow::finishTF7WindowShow()
{
    if(ui_TF7.a){
        array_of_answer[7] = 1;
    }
     ui_TF7.hide();

};


void MainWindow::nextTF8WindowShow()
{
    if(ui_TF8.a){
        array_of_answer[8] = 1;
    }
    ui_TF8.hide();
    ui_TF9.show();
};

void MainWindow::backTF8WindowShow()
{
    ui_TF8.hide();
    ui_TF7.show();
};

void MainWindow::finishTF8WindowShow()
{
    if(ui_TF8.a){
        array_of_answer[8] = 1;
    }
     ui_TF8.hide();

};


void MainWindow::nextTF9WindowShow()
{
    if(ui_TF9.a){
        array_of_answer[9] = 1;
    }
    ui_TF9.hide();
    ui_TF10.show();
};

void MainWindow::backTF9WindowShow()
{
    ui_TF9.hide();
    ui_TF8.show();
};

void MainWindow::finishTF9WindowShow()
{
    if(ui_TF9.a){
        array_of_answer[9] = 1;
    }
     ui_TF9.hide();

};


void MainWindow::nextTF10WindowShow()
{
    if(ui_TF10.a){
        array_of_answer[10] = 1;
    }
    ui_TF10.hide();
    ui_TF11.show();
};

void MainWindow::backTF10WindowShow()
{
    ui_TF10.hide();
    ui_TF9.show();
};

void MainWindow::finishTF10WindowShow()
{
    if(ui_TF10.a){
        array_of_answer[10] = 1;
    }
     ui_TF10.hide();

};


void MainWindow::nextTF11WindowShow()
{
    if(ui_TF11.a){
        array_of_answer[11] = 1;
    }
    ui_TF11.hide();
    ui_TF12.show();
};

void MainWindow::backTF11WindowShow()
{
    ui_TF11.hide();
    ui_TF10.show();
};

void MainWindow::finishTF11WindowShow()
{
    if(ui_TF11.a){
        array_of_answer[11] = 1;
    }
     ui_TF11.hide();

};


void MainWindow::nextTF12WindowShow()
{
    if(ui_TF12.a){
        array_of_answer[12] = 1;
    }
    ui_TF12.hide();
    ui_TF13.show();
};

void MainWindow::backTF12WindowShow()
{
    ui_TF12.hide();
    ui_TF11.show();
};

void MainWindow::finishTF12WindowShow()
{
    if(ui_TF12.a){
        array_of_answer[12] = 1;
    }
     ui_TF12.hide();

};


void MainWindow::nextTF13WindowShow()
{
    if(ui_TF13.a){
        array_of_answer[13] = 1;
    }
    ui_TF13.hide();
    ui_TF14.show();
};

void MainWindow::backTF13WindowShow()
{
    ui_TF13.hide();
    ui_TF12.show();
};

void MainWindow::finishTF13WindowShow()
{
    if(ui_TF13.a){
        array_of_answer[13] = 1;
    }
     ui_TF13.hide();

};


void MainWindow::nextTF14WindowShow()
{
    if(ui_TF14.a){
        array_of_answer[14] = 1;
    }
    ui_TF14.hide();
    ui_TF15.show();
};

void MainWindow::backTF14WindowShow()
{
    ui_TF14.hide();
    ui_TF13.show();
};

void MainWindow::finishTF14WindowShow()
{
    if(ui_TF14.a){
        array_of_answer[14] = 1;
    }
     ui_TF14.hide();

};


void MainWindow::nextTF15WindowShow()
{
    if(ui_TF15.a){
        array_of_answer[15] = 1;
    }
    ui_TF15.hide();
    ui_TF16.show();
};

void MainWindow::backTF15WindowShow()
{
    ui_TF15.hide();
    ui_TF14.show();
};

void MainWindow::finishTF15WindowShow()
{
    if(ui_TF15.a){
        array_of_answer[15] = 1;
    }
     ui_TF15.hide();

};


void MainWindow::nextTF16WindowShow()
{
    if(ui_TF16.a){
        array_of_answer[16] = 1;
    }
    ui_TF16.hide();
    ui_TF17.show();
};

void MainWindow::backTF16WindowShow()
{
    ui_TF16.hide();
    ui_TF15.show();
};

void MainWindow::finishTF16WindowShow()
{
    if(ui_TF16.a){
        array_of_answer[16] = 1;
    }
     ui_TF11.hide();

}


void MainWindow::nextTF17WindowShow()
{
    if(ui_TF17.a){
        array_of_answer[17] = 1;
    }
    ui_TF17.hide();
    ui_TF18.show();
};

void MainWindow::backTF17WindowShow()
{
    ui_TF17.hide();
    ui_TF16.show();
};

void MainWindow::finishTF17WindowShow()
{
    if(ui_TF17.a){
        array_of_answer[17] = 1;
    }
     ui_TF17.hide();

};


void MainWindow::nextTF18WindowShow()
{
    if(ui_TF18.a){
        array_of_answer[18] = 1;
    }
    ui_TF18.hide();
    ui_TF19.show();
};

void MainWindow::backTF18WindowShow()
{
    ui_TF18.hide();
    ui_TF17.show();
};

void MainWindow::finishTF18WindowShow()
{
    if(ui_TF18.a){
        array_of_answer[18] = 1;
    }
     ui_TF18.hide();

};


void MainWindow::nextTF19WindowShow()
{
    if(ui_TF19.a){
        array_of_answer[19] = 1;
    }
    ui_TF19.hide();
    ui_TF20.show();
};

void MainWindow::backTF19WindowShow()
{
    ui_TF19.hide();
    ui_TF18.show();
};

void MainWindow::finishTF19WindowShow()
{
    if(ui_TF19.a){
        array_of_answer[19] = 1;
    }
     ui_TF19.hide();

};


void MainWindow::nextTF20WindowShow()
{
    if(ui_TF20.a){
        array_of_answer[20] = 1;
    }
    ui_TF20.hide();
    ui_TF21.show();
};

void MainWindow::backTF20WindowShow()
{
    ui_TF20.hide();
    ui_TF19.show();
};

void MainWindow::finishTF20WindowShow()
{
    if(ui_TF20.a){
        array_of_answer[20] = 1;
    }
     ui_TF20.hide();

};


void MainWindow::nextTF21WindowShow()
{
    if(ui_TF21.a){
        array_of_answer[21] = 1;
    }
    ui_TF21.hide();
    ui_TF22.show();
};

void MainWindow::backTF21WindowShow()
{
    ui_TF21.hide();
    ui_TF20.show();
};

void MainWindow::finishTF21WindowShow()
{
    if(ui_TF21.a){
        array_of_answer[21] = 1;
    }
     ui_TF21.hide();

};


void MainWindow::nextTF22WindowShow()
{
    if(ui_TF22.a){
        array_of_answer[22] = 1;
    }
    ui_TF22.hide();
    ui_TF23.show();
};

void MainWindow::backTF22WindowShow()
{
    ui_TF22.hide();
    ui_TF21.show();
};

void MainWindow::finishTF22WindowShow()
{
    if(ui_TF22.a){
        array_of_answer[22] = 1;
    }
     ui_TF22.hide();

};


void MainWindow::nextTF23WindowShow()
{
    if(ui_TF23.a){
        array_of_answer[23] = 1;
    }
    ui_TF23.hide();
    ui_TF24.show();
};

void MainWindow::backTF23WindowShow()
{
    ui_TF23.hide();
    ui_TF22.show();
};

void MainWindow::finishTF23WindowShow()
{
    if(ui_TF23.a){
        array_of_answer[23] = 1;
    }
     ui_TF23.hide();

};


void MainWindow::nextTF24WindowShow()
{
    if(ui_TF24.a){
        array_of_answer[24] = 1;
    }
    ui_TF24.hide();
    ui_TF25.show();
};

void MainWindow::backTF24WindowShow()
{
    ui_TF24.hide();
    ui_TF23.show();
};

void MainWindow::finishTF24WindowShow()
{
    if(ui_TF24.a){
        array_of_answer[24] = 1;
    }
     ui_TF24.hide();

};


void MainWindow::nextTF25WindowShow()
{
    if(ui_TF25.a){
        array_of_answer[25] = 1;
    }
    ui_TF25.hide();
    ui_TF26.show();
};

void MainWindow::backTF25WindowShow()
{
    ui_TF25.hide();
    ui_TF24.show();
};

void MainWindow::finishTF25WindowShow()
{
    if(ui_TF25.a){
        array_of_answer[25] = 1;
    }
    ui_TF25.hide();

};


void MainWindow::nextTF26WindowShow()
{
    if(ui_TF26.a){
        array_of_answer[26] = 1;
    }
    ui_TF26.hide();
    ui_TF27.show();
};

void MainWindow::backTF26WindowShow()
{
    ui_TF26.hide();
    ui_TF25.show();
};

void MainWindow::finishTF26WindowShow()
{
    if(ui_TF26.a){
        array_of_answer[26] = 1;
    }
     ui_TF26.hide();

};


void MainWindow::nextTF27WindowShow()
{
    if(ui_TF27.a){
        array_of_answer[27] = 1;
    }
    ui_TF27.hide();
    ui_TF28.show();
};

void MainWindow::backTF27WindowShow()
{
    ui_TF27.hide();
    ui_TF26.show();
};

void MainWindow::finishTF27WindowShow()
{
    if(ui_TF27.a){
        array_of_answer[27] = 1;
    }
     ui_TF27.hide();

};


void MainWindow::nextTF28WindowShow()
{
    if(ui_TF28.a){
        array_of_answer[28] = 1;
    }
    ui_TF28.hide();
    ui_TF29.show();
};

void MainWindow::backTF28WindowShow()
{
    ui_TF28.hide();
    ui_TF27.show();
};

void MainWindow::finishTF28WindowShow()
{
    if(ui_TF28.a){
        array_of_answer[28] = 1;
    }
     ui_TF28.hide();

};


void MainWindow::nextTF29WindowShow()
{
    if(ui_TF29.a){
        array_of_answer[29] = 1;
    }
    ui_TF29.hide();
    ui_TF30.show();
};

void MainWindow::backTF29WindowShow()
{
    ui_TF29.hide();
    ui_TF28.show();
};

void MainWindow::finishTF29WindowShow()
{
    if(ui_TF29.a){
        array_of_answer[29] = 1;
    }
     ui_TF29.hide();

};


void MainWindow::nextTF30WindowShow()
{
    if(ui_TF30.a){
        array_of_answer[30] = 1;
    }
    ui_TF30.hide();
    ui_TF31.show();
};

void MainWindow::backTF30WindowShow()
{
    ui_TF30.hide();
    ui_TF29.show();
};

void MainWindow::finishTF30WindowShow()
{
    if(ui_TF30.a){
        array_of_answer[30] = 1;
    }
     ui_TF30.hide();

};


void MainWindow::nextTF31WindowShow()
{
    if(ui_TF31.a){
        array_of_answer[31] = 1;
    }
    ui_TF31.hide();
    ui_TF32.show();
};

void MainWindow::backTF31WindowShow()
{
    ui_TF31.hide();
    ui_TF30.show();
};

void MainWindow::finishTF31WindowShow()
{
    if(ui_TF31.a){
        array_of_answer[31] = 1;
    }
     ui_TF31.hide();

};


void MainWindow::backTF32WindowShow()
{
    ui_TF32.hide();
    ui_TF31.show();
};

void MainWindow::finishTF32WindowShow()
{
    if(ui_TF32.a){
        array_of_answer[32] = 1;
    }
     ui_TF32.hide();

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

