#include "syswindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  sysWindow w;
  w.show();

  return a.exec();
}
