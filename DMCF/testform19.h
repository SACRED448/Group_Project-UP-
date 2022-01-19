#ifndef TESTFORM19_H
#define TESTFORM19_H

#include <QDialog>

namespace Ui {
class testform19;
}

class testform19 : public QDialog
{
    Q_OBJECT

public:
    explicit testform19(QWidget *parent = nullptr);
    ~testform19();

private:
    Ui::testform19 *ui;
};

#endif // TESTFORM19_H
