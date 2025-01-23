/********************************************************************************
** Form generated from reading UI file 'ClientChatWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTCHATWIDGET_H
#define UI_CLIENTCHATWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientChatWidget
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *lstMessages;
    QWidget *wdgSend;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSend;
    QLineEdit *lnMessage;
    QLabel *label;

    void setupUi(QWidget *ClientChatWidget)
    {
        if (ClientChatWidget->objectName().isEmpty())
            ClientChatWidget->setObjectName("ClientChatWidget");
        ClientChatWidget->resize(764, 517);
        verticalLayout = new QVBoxLayout(ClientChatWidget);
        verticalLayout->setObjectName("verticalLayout");
        lstMessages = new QListWidget(ClientChatWidget);
        lstMessages->setObjectName("lstMessages");

        verticalLayout->addWidget(lstMessages);

        wdgSend = new QWidget(ClientChatWidget);
        wdgSend->setObjectName("wdgSend");
        horizontalLayout = new QHBoxLayout(wdgSend);
        horizontalLayout->setObjectName("horizontalLayout");
        btnSend = new QPushButton(wdgSend);
        btnSend->setObjectName("btnSend");

        horizontalLayout->addWidget(btnSend);

        lnMessage = new QLineEdit(wdgSend);
        lnMessage->setObjectName("lnMessage");

        horizontalLayout->addWidget(lnMessage);

        label = new QLabel(wdgSend);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label);


        verticalLayout->addWidget(wdgSend);


        retranslateUi(ClientChatWidget);

        QMetaObject::connectSlotsByName(ClientChatWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientChatWidget)
    {
        ClientChatWidget->setWindowTitle(QCoreApplication::translate("ClientChatWidget", "Form", nullptr));
        btnSend->setText(QCoreApplication::translate("ClientChatWidget", "wyslij", nullptr));
        label->setText(QCoreApplication::translate("ClientChatWidget", "Napisz wiadomosc:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientChatWidget: public Ui_ClientChatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTCHATWIDGET_H
