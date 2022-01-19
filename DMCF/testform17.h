#ifndef TESTFORM17_H
#define TESTFORM17_H

#include <QDialog>

namespace Ui {
class testform17;
}

class testform17 : public QDialog
{
    Q_OBJECT

public:
    explicit testform17(QWidget *parent = nullptr);
    ~testform17();

private:
    Ui::testform17 *ui;
};

#endif // TESTFORM17_H
