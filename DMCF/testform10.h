#ifndef TESTFORM10_H
#define TESTFORM10_H

#include <QDialog>

namespace Ui {
class testform10;
}

class testform10 : public QDialog
{
    Q_OBJECT

public:
    explicit testform10(QWidget *parent = nullptr);
    ~testform10();

private:
    Ui::testform10 *ui;
};

#endif // TESTFORM10_H
