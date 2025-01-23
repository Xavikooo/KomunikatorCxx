/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *grpChats;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTabWidget *tbChats;
    QGroupBox *grpClients;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *lstClients;
    QPushButton *DisconnectAll;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->resize(1077, 638);
        centralwidget = new QWidget(MainPage);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        grpChats = new QGroupBox(centralwidget);
        grpChats->setObjectName("grpChats");
        horizontalLayout = new QHBoxLayout(grpChats);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(grpChats);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        tbChats = new QTabWidget(grpChats);
        tbChats->setObjectName("tbChats");

        horizontalLayout->addWidget(tbChats);


        horizontalLayout_3->addWidget(grpChats);

        grpClients = new QGroupBox(centralwidget);
        grpClients->setObjectName("grpClients");
        horizontalLayout_2 = new QHBoxLayout(grpClients);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lstClients = new QListWidget(grpClients);
        lstClients->setObjectName("lstClients");

        horizontalLayout_2->addWidget(lstClients);

        DisconnectAll = new QPushButton(grpClients);
        DisconnectAll->setObjectName("DisconnectAll");

        horizontalLayout_2->addWidget(DisconnectAll);


        horizontalLayout_3->addWidget(grpClients);

        horizontalLayout_3->setStretch(0, 3);
        MainPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1077, 21));
        MainPage->setMenuBar(menubar);
        statusbar = new QStatusBar(MainPage);
        statusbar->setObjectName("statusbar");
        MainPage->setStatusBar(statusbar);

        retranslateUi(MainPage);

        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QMainWindow *MainPage)
    {
        MainPage->setWindowTitle(QCoreApplication::translate("MainPage", "MainWindow", nullptr));
        grpChats->setTitle(QCoreApplication::translate("MainPage", "Chaty", nullptr));
        label->setText(QString());
        grpClients->setTitle(QCoreApplication::translate("MainPage", "Clients", nullptr));
        DisconnectAll->setText(QCoreApplication::translate("MainPage", "rozlacz wszystkich", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
