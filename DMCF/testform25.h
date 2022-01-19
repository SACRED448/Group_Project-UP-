#ifndef TESTFORM25_H
#define TESTFORM25_H

#include <QDialog>

namespace Ui {
class testform25;
}

class testform25 : public QDialog
{
    Q_OBJECT

public:
    explicit testform25(QWidget *parent = nullptr);
    ~testform25();

private:
    Ui::testform25 *ui;
};

#endif // TESTFORM25_H
