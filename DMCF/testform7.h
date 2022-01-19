#ifndef TESTFORM7_H
#define TESTFORM7_H

#include <QDialog>

namespace Ui {
class test7;
}

class test7 : public QDialog
{
    Q_OBJECT

public:
    explicit test7(QWidget *parent = nullptr);
    ~test7();

private:
    Ui::test7 *ui;
};

#endif // TESTFORM7_H
