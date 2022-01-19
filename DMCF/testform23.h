#ifndef TESTFORM23_H
#define TESTFORM23_H

#include <QDialog>

namespace Ui {
class testform23;
}

class testform23 : public QDialog
{
    Q_OBJECT

public:
    explicit testform23(QWidget *parent = nullptr);
    ~testform23();

private:
    Ui::testform23 *ui;
};

#endif // TESTFORM23_H
