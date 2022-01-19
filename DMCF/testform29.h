#ifndef TESTFORM29_H
#define TESTFORM29_H

#include <QDialog>

namespace Ui {
class testform29;
}

class testform29 : public QDialog
{
    Q_OBJECT

public:
    explicit testform29(QWidget *parent = nullptr);
    ~testform29();

private:
    Ui::testform29 *ui;
};

#endif // TESTFORM29_H
