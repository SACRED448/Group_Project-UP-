#ifndef TESTFORM11_H
#define TESTFORM11_H

#include <QDialog>

namespace Ui {
class testform11;
}

class testform11 : public QDialog
{
    Q_OBJECT

public:
    explicit testform11(QWidget *parent = nullptr);
    ~testform11();

private:
    Ui::testform11 *ui;
};

#endif // TESTFORM11_H
