#ifndef TESTFORM4_H
#define TESTFORM4_H

#include <QDialog>

namespace Ui {
class testform4;
}

class testform4 : public QDialog
{
    Q_OBJECT

public:
    explicit testform4(QWidget *parent = nullptr);
    ~testform4();

private:
    Ui::testform4 *ui;
};

#endif // TESTFORM4_H
