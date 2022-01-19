#ifndef TESTFORM9_H
#define TESTFORM9_H

#include <QDialog>

namespace Ui {
class testform9;
}

class testform9 : public QDialog
{
    Q_OBJECT

public:
    explicit testform9(QWidget *parent = nullptr);
    ~testform9();

private:
    Ui::testform9 *ui;
};

#endif // TESTFORM9_H
