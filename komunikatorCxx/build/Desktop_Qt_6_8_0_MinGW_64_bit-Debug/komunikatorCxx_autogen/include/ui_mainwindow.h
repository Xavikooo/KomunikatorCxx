/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_Login;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_Exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(770, 386);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 761, 341));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 120, 71, 20));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 150, 71, 20));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_Login = new QLineEdit(groupBox);
        lineEdit_Login->setObjectName("lineEdit_Login");
        lineEdit_Login->setGeometry(QRect(220, 120, 241, 21));
        lineEdit_Password = new QLineEdit(groupBox);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setGeometry(QRect(220, 150, 241, 21));
        lineEdit_Password->setEchoMode(QLineEdit::EchoMode::Normal);
        pushButton_Login = new QPushButton(groupBox);
        pushButton_Login->setObjectName("pushButton_Login");
        pushButton_Login->setGeometry(QRect(230, 210, 201, 21));
        pushButton_Exit = new QPushButton(groupBox);
        pushButton_Exit->setObjectName("pushButton_Exit");
        pushButton_Exit->setGeometry(QRect(230, 250, 111, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 770, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Haslo", nullptr));
        pushButton_Login->setText(QCoreApplication::translate("MainWindow", "Zaloguj", nullptr));
        pushButton_Exit->setText(QCoreApplication::translate("MainWindow", "Wyjdz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
