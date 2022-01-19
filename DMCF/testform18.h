#ifndef TESTFORM18_H
#define TESTFORM18_H

#include <QDialog>

namespace Ui {
class testform18;
}

class testform18 : public QDialog
{
    Q_OBJECT

public:
    explicit testform18(QWidget *parent = nullptr);
    ~testform18();

private:
    Ui::testform18 *ui;
};

#endif // TESTFORM18_H
