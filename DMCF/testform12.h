#ifndef TESTFORM12_H
#define TESTFORM12_H

#include <QDialog>

namespace Ui {
class testform12;
}

class testform12 : public QDialog
{
    Q_OBJECT

public:
    explicit testform12(QWidget *parent = nullptr);
    ~testform12();

private:
    Ui::testform12 *ui;
};

#endif // TESTFORM12_H
