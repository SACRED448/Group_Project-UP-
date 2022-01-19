#ifndef TESTFORM16_H
#define TESTFORM16_H

#include <QDialog>

namespace Ui {
class testform16;
}

class testform16 : public QDialog
{
    Q_OBJECT

public:
    explicit testform16(QWidget *parent = nullptr);
    ~testform16();

private:
    Ui::testform16 *ui;
};

#endif // TESTFORM16_H
