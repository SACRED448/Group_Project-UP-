#ifndef TESTFORM21_H
#define TESTFORM21_H

#include <QDialog>

namespace Ui {
class testform21;
}

class testform21 : public QDialog
{
    Q_OBJECT

public:
    explicit testform21(QWidget *parent = nullptr);
    ~testform21();

private:
    Ui::testform21 *ui;
};

#endif // TESTFORM21_H
