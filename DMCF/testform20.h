#ifndef TESTFORM20_H
#define TESTFORM20_H

#include <QDialog>

namespace Ui {
class testform20;
}

class testform20 : public QDialog
{
    Q_OBJECT

public:
    explicit testform20(QWidget *parent = nullptr);
    ~testform20();

private:
    Ui::testform20 *ui;
};

#endif // TESTFORM20_H
