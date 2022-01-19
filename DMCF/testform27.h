#ifndef TESTFORM27_H
#define TESTFORM27_H

#include <QDialog>

namespace Ui {
class testform27;
}

class testform27 : public QDialog
{
    Q_OBJECT

public:
    explicit testform27(QWidget *parent = nullptr);
    ~testform27();

private:
    Ui::testform27 *ui;
};

#endif // TESTFORM27_H
