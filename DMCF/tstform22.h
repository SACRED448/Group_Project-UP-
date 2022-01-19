#ifndef TSTFORM22_H
#define TSTFORM22_H

#include <QDialog>

namespace Ui {
class tstform22;
}

class tstform22 : public QDialog
{
    Q_OBJECT

public:
    explicit tstform22(QWidget *parent = nullptr);
    ~tstform22();

private:
    Ui::tstform22 *ui;
};

#endif // TSTFORM22_H
