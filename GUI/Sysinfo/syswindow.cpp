#include "syswindow.h"
#include "ui_syswindow.h"

sysWindow::sysWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::sysWindow)
{
  ui->setupUi(this);

  s.setVendorID();
  s.setSignature();
  s.setBrandString();

  //ui->label_2->setText(QString::fromStdString(s.getVendorID()));
}

sysWindow::~sysWindow()
{
  delete ui;
}
