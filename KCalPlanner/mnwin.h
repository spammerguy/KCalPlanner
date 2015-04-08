#ifndef MNWIN_H
#define MNWIN_H

#include <QMainWindow>

namespace Ui {
    class MnWin;
}

class MnWin : public QMainWindow {
    Q_OBJECT
public:
    explicit MnWin(QWidget* parent=0);
    ~MnWin();

private:
    Ui::MnWin* ui;

};

#endif // MNWIN_H
