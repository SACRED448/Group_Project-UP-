#ifndef TESTFORM31_H
#define TESTFORM31_H

#include <QDialog>

namespace Ui {
class testform31;
}

class testform31 : public QDialog
{
    Q_OBJECT

public:
    explicit testform31(QWidget *parent = nullptr);
    ~testform31();

private:
    Ui::testform31 *ui;
};

#endif // TESTFORM31_H
