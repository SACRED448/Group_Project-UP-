#ifndef TESTFORM15_H
#define TESTFORM15_H

#include <QDialog>

namespace Ui {
class testform15;
}

class testform15 : public QDialog
{
    Q_OBJECT

public:
    explicit testform15(QWidget *parent = nullptr);
    ~testform15();

private:
    Ui::testform15 *ui;
};

#endif // TESTFORM15_H
