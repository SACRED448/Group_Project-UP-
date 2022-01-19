#ifndef TESTFORM5_H
#define TESTFORM5_H

#include <QDialog>

namespace Ui {
class testform5;
}

class testform5 : public QDialog
{
    Q_OBJECT

public:
    explicit testform5(QWidget *parent = nullptr);
    ~testform5();

private:
    Ui::testform5 *ui;
};

#endif // TESTFORM5_H
