#ifndef TESTFORM13_H
#define TESTFORM13_H

#include <QDialog>

namespace Ui {
class testform13;
}

class testform13 : public QDialog
{
    Q_OBJECT

public:
    explicit testform13(QWidget *parent = nullptr);
    ~testform13();

private:
    Ui::testform13 *ui;
};

#endif // TESTFORM13_H
