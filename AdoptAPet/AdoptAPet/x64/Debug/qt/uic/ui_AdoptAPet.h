/********************************************************************************
** Form generated from reading UI file 'AdoptAPet.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADOPTAPET_H
#define UI_ADOPTAPET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdoptAPetClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AdoptAPetClass)
    {
        if (AdoptAPetClass->objectName().isEmpty())
            AdoptAPetClass->setObjectName("AdoptAPetClass");
        AdoptAPetClass->resize(600, 400);
        menuBar = new QMenuBar(AdoptAPetClass);
        menuBar->setObjectName("menuBar");
        AdoptAPetClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AdoptAPetClass);
        mainToolBar->setObjectName("mainToolBar");
        AdoptAPetClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(AdoptAPetClass);
        centralWidget->setObjectName("centralWidget");
        AdoptAPetClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AdoptAPetClass);
        statusBar->setObjectName("statusBar");
        AdoptAPetClass->setStatusBar(statusBar);

        retranslateUi(AdoptAPetClass);

        QMetaObject::connectSlotsByName(AdoptAPetClass);
    } // setupUi

    void retranslateUi(QMainWindow *AdoptAPetClass)
    {
        AdoptAPetClass->setWindowTitle(QCoreApplication::translate("AdoptAPetClass", "AdoptAPet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdoptAPetClass: public Ui_AdoptAPetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADOPTAPET_H
