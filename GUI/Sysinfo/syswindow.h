#ifndef SYSWINDOW_H
#define SYSWINDOW_H

#include <QMainWindow>
#include "sysCPU.h"

namespace Ui {
  class sysWindow;
}

class sysWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit sysWindow(QWidget *parent = 0);
  sysCPU s;
  ~sysWindow();

private:
  Ui::sysWindow *ui;
};

#endif // SYSWINDOW_H
