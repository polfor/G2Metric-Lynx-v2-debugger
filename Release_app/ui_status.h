/********************************************************************************
** Form generated from reading UI file 'status.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUS_H
#define UI_STATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Status
{
public:
    QGridLayout *gridLayout;
    QTextEdit *DisplaytextEdit;
    QPushButton *SavepushButton;
    QLabel *label_3;
    QPushButton *StatuspushButton;
    QPushButton *LoadpushButton;
    QPushButton *SendpushButton;

    void setupUi(QDialog *Status)
    {
        if (Status->objectName().isEmpty())
            Status->setObjectName(QString::fromUtf8("Status"));
        Status->resize(410, 495);
        gridLayout = new QGridLayout(Status);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        DisplaytextEdit = new QTextEdit(Status);
        DisplaytextEdit->setObjectName(QString::fromUtf8("DisplaytextEdit"));
        DisplaytextEdit->setReadOnly(true);

        gridLayout->addWidget(DisplaytextEdit, 2, 1, 4, 2);

        SavepushButton = new QPushButton(Status);
        SavepushButton->setObjectName(QString::fromUtf8("SavepushButton"));

        gridLayout->addWidget(SavepushButton, 7, 2, 1, 1);

        label_3 = new QLabel(Status);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        StatuspushButton = new QPushButton(Status);
        StatuspushButton->setObjectName(QString::fromUtf8("StatuspushButton"));
        StatuspushButton->setMinimumSize(QSize(0, 23));

        gridLayout->addWidget(StatuspushButton, 1, 1, 1, 1);

        LoadpushButton = new QPushButton(Status);
        LoadpushButton->setObjectName(QString::fromUtf8("LoadpushButton"));

        gridLayout->addWidget(LoadpushButton, 7, 1, 1, 1);

        SendpushButton = new QPushButton(Status);
        SendpushButton->setObjectName(QString::fromUtf8("SendpushButton"));

        gridLayout->addWidget(SendpushButton, 8, 1, 1, 2);


        retranslateUi(Status);

        QMetaObject::connectSlotsByName(Status);
    } // setupUi

    void retranslateUi(QDialog *Status)
    {
        Status->setWindowTitle(QApplication::translate("Status", "Dialog", nullptr));
        SavepushButton->setText(QApplication::translate("Status", "Save Preset", nullptr));
        label_3->setText(QApplication::translate("Status", "Loaded Preset / Current Status :", nullptr));
        StatuspushButton->setText(QApplication::translate("Status", "Get Status", nullptr));
        LoadpushButton->setText(QApplication::translate("Status", "Load Preset", nullptr));
        SendpushButton->setText(QApplication::translate("Status", "Send Preset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Status: public Ui_Status {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUS_H
