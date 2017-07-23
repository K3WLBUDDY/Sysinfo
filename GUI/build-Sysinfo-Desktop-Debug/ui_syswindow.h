/********************************************************************************
** Form generated from reading UI file 'syswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSWINDOW_H
#define UI_SYSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sysWindow
{
public:
    QWidget *centralWidget;

    void setupUi(QMainWindow *sysWindow)
    {
        if (sysWindow->objectName().isEmpty())
            sysWindow->setObjectName(QStringLiteral("sysWindow"));
        sysWindow->resize(400, 300);
        centralWidget = new QWidget(sysWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sysWindow->setCentralWidget(centralWidget);

        retranslateUi(sysWindow);

        QMetaObject::connectSlotsByName(sysWindow);
    } // setupUi

    void retranslateUi(QMainWindow *sysWindow)
    {
        sysWindow->setWindowTitle(QApplication::translate("sysWindow", "sysWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sysWindow: public Ui_sysWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSWINDOW_H
