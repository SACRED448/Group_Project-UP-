#ifndef TESTFORM14_H
#define TESTFORM14_H

#include <QDialog>

namespace Ui {
class testform14;
}

class testform14 : public QDialog
{
    Q_OBJECT

public:
    explicit testform14(QWidget *parent = nullptr);
    ~testform14();

private:
    Ui::testform14 *ui;
};

#endif // TESTFORM14_H
