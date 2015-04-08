#include "mnwin.h"
#include "ui_mnwin.h"

MnWin::MnWin (QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::MnWin)
{
    ui->setupUi(this);
}

MnWin::~MnWin () {
    delete ui;
}
