#ifndef TESTFORM33_H
#define TESTFORM33_H

#include <QDialog>

namespace Ui {
class testform33;
}

class testform33 : public QDialog
{
    Q_OBJECT

public:
    explicit testform33(QWidget *parent = nullptr);
    ~testform33();

private:
    Ui::testform33 *ui;
};

#endif // TESTFORM33_H
