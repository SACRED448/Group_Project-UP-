#ifndef TESTFORM24_H
#define TESTFORM24_H

#include <QDialog>

namespace Ui {
class testform24;
}

class testform24 : public QDialog
{
    Q_OBJECT

public:
    explicit testform24(QWidget *parent = nullptr);
    ~testform24();

private:
    Ui::testform24 *ui;
};

#endif // TESTFORM24_H
