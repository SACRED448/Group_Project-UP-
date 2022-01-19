#ifndef TESTFORM32_H
#define TESTFORM32_H

#include <QDialog>

namespace Ui {
class testform32;
}

class testform32 : public QDialog
{
    Q_OBJECT

public:
    explicit testform32(QWidget *parent = nullptr);
    ~testform32();

private:
    Ui::testform32 *ui;
};

#endif // TESTFORM32_H
