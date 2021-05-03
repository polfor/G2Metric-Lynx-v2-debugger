/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *StreamButton;
    QLabel *label_3;
    QComboBox *actcomboBox;
    QLineEdit *arglineEdit;
    QLabel *label_6;
    QLineEdit *IPlineEdit;
    QPushButton *ManageButton;
    QPushButton *ZeroConfButton;
    QPushButton *ConnectButton;
    QLineEdit *PortlineEdit;
    QLabel *label_7;
    QComboBox *modcomboBox;
    QPushButton *CommandButton;
    QTextEdit *Debugger;
    QLabel *label_5;
    QLabel *label_2;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(498, 322);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        StreamButton = new QPushButton(centralWidget);
        StreamButton->setObjectName(QString::fromUtf8("StreamButton"));

        gridLayout->addWidget(StreamButton, 6, 4, 1, 2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 5, 1, 1);

        actcomboBox = new QComboBox(centralWidget);
        actcomboBox->setObjectName(QString::fromUtf8("actcomboBox"));

        gridLayout->addWidget(actcomboBox, 5, 2, 1, 1);

        arglineEdit = new QLineEdit(centralWidget);
        arglineEdit->setObjectName(QString::fromUtf8("arglineEdit"));

        gridLayout->addWidget(arglineEdit, 6, 2, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 6, 1, 1, 1);

        IPlineEdit = new QLineEdit(centralWidget);
        IPlineEdit->setObjectName(QString::fromUtf8("IPlineEdit"));

        gridLayout->addWidget(IPlineEdit, 0, 4, 1, 1);

        ManageButton = new QPushButton(centralWidget);
        ManageButton->setObjectName(QString::fromUtf8("ManageButton"));

        gridLayout->addWidget(ManageButton, 5, 4, 1, 2);

        ZeroConfButton = new QPushButton(centralWidget);
        ZeroConfButton->setObjectName(QString::fromUtf8("ZeroConfButton"));

        gridLayout->addWidget(ZeroConfButton, 0, 1, 1, 2);

        ConnectButton = new QPushButton(centralWidget);
        ConnectButton->setObjectName(QString::fromUtf8("ConnectButton"));

        gridLayout->addWidget(ConnectButton, 0, 8, 1, 1);

        PortlineEdit = new QLineEdit(centralWidget);
        PortlineEdit->setObjectName(QString::fromUtf8("PortlineEdit"));

        gridLayout->addWidget(PortlineEdit, 0, 7, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 4, 1, 1, 1);

        modcomboBox = new QComboBox(centralWidget);
        modcomboBox->addItem(QString());
        modcomboBox->setObjectName(QString::fromUtf8("modcomboBox"));

        gridLayout->addWidget(modcomboBox, 4, 2, 1, 1);

        CommandButton = new QPushButton(centralWidget);
        CommandButton->setObjectName(QString::fromUtf8("CommandButton"));

        gridLayout->addWidget(CommandButton, 4, 4, 1, 2);

        Debugger = new QTextEdit(centralWidget);
        Debugger->setObjectName(QString::fromUtf8("Debugger"));
        Debugger->setReadOnly(true);

        gridLayout->addWidget(Debugger, 8, 0, 1, 9);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 498, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(ZeroConfButton, IPlineEdit);
        QWidget::setTabOrder(IPlineEdit, PortlineEdit);
        QWidget::setTabOrder(PortlineEdit, ConnectButton);
        QWidget::setTabOrder(ConnectButton, modcomboBox);
        QWidget::setTabOrder(modcomboBox, CommandButton);
        QWidget::setTabOrder(CommandButton, actcomboBox);
        QWidget::setTabOrder(actcomboBox, ManageButton);
        QWidget::setTabOrder(ManageButton, arglineEdit);
        QWidget::setTabOrder(arglineEdit, StreamButton);
        QWidget::setTabOrder(StreamButton, Debugger);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        StreamButton->setText(QApplication::translate("MainWindow", "Camera stream", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Port :", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Arguments", nullptr));
        IPlineEdit->setText(QString());
        ManageButton->setText(QApplication::translate("MainWindow", "Manage your system", nullptr));
        ZeroConfButton->setText(QApplication::translate("MainWindow", "Choose a system", nullptr));
        ConnectButton->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        PortlineEdit->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "Module", nullptr));
        modcomboBox->setItemText(0, QApplication::translate("MainWindow", "camera", nullptr));

        CommandButton->setText(QApplication::translate("MainWindow", "Send single command", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Action", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "IP :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
