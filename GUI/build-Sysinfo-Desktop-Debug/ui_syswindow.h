/********************************************************************************
** Form generated from reading UI file 'syswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sysWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *sysWindow)
    {
        if (sysWindow->objectName().isEmpty())
            sysWindow->setObjectName(QStringLiteral("sysWindow"));
        sysWindow->resize(400, 300);
        centralWidget = new QWidget(sysWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 20, 81, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 20, 121, 20));
        sysWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(sysWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        sysWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(sysWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        sysWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(sysWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        sysWindow->setStatusBar(statusBar);

        retranslateUi(sysWindow);

        QMetaObject::connectSlotsByName(sysWindow);
    } // setupUi

    void retranslateUi(QMainWindow *sysWindow)
    {
        sysWindow->setWindowTitle(QApplication::translate("sysWindow", "sysWindow", Q_NULLPTR));
        label->setText(QApplication::translate("sysWindow", "Vendor ID :", Q_NULLPTR));
        label_2->setText(QApplication::translate("sysWindow", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sysWindow: public Ui_sysWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSWINDOW_H
