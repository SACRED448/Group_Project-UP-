#ifndef TESTFORM8_H
#define TESTFORM8_H

#include <QDialog>

namespace Ui {
class test8;
}

class test8 : public QDialog
{
    Q_OBJECT

public:
    explicit test8(QWidget *parent = nullptr);
    ~test8();

private:
    Ui::test8 *ui;
};

#endif // TESTFORM8_H
