#ifndef TESTFORM30_H
#define TESTFORM30_H

#include <QDialog>

namespace Ui {
class testform30;
}

class testform30 : public QDialog
{
    Q_OBJECT

public:
    explicit testform30(QWidget *parent = nullptr);
    ~testform30();

private:
    Ui::testform30 *ui;
};

#endif // TESTFORM30_H
