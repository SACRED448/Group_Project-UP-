#ifndef TESTFORM6_H
#define TESTFORM6_H

#include <QDialog>

namespace Ui {
class testform6;
}

class testform6 : public QDialog
{
    Q_OBJECT

public:
    explicit testform6(QWidget *parent = nullptr);
    ~testform6();

private:
    Ui::testform6 *ui;
};

#endif // TESTFORM6_H
