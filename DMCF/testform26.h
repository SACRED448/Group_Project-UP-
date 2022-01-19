#ifndef TESTFORM26_H
#define TESTFORM26_H

#include <QDialog>

namespace Ui {
class testform26;
}

class testform26 : public QDialog
{
    Q_OBJECT

public:
    explicit testform26(QWidget *parent = nullptr);
    ~testform26();

private:
    Ui::testform26 *ui;
};

#endif // TESTFORM26_H
