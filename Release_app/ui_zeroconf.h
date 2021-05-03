/********************************************************************************
** Form generated from reading UI file 'zeroconf.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZEROCONF_H
#define UI_ZEROCONF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ZeroConf
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QPushButton *RefreshpushButton;

    void setupUi(QDialog *ZeroConf)
    {
        if (ZeroConf->objectName().isEmpty())
            ZeroConf->setObjectName(QString::fromUtf8("ZeroConf"));
        ZeroConf->resize(324, 153);
        gridLayout = new QGridLayout(ZeroConf);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(ZeroConf);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);

        RefreshpushButton = new QPushButton(ZeroConf);
        RefreshpushButton->setObjectName(QString::fromUtf8("RefreshpushButton"));

        gridLayout->addWidget(RefreshpushButton, 0, 0, 1, 1);


        retranslateUi(ZeroConf);

        QMetaObject::connectSlotsByName(ZeroConf);
    } // setupUi

    void retranslateUi(QDialog *ZeroConf)
    {
        ZeroConf->setWindowTitle(QApplication::translate("ZeroConf", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ZeroConf", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ZeroConf", "IP", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ZeroConf", "Port", nullptr));
        RefreshpushButton->setText(QApplication::translate("ZeroConf", "Actualiser", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZeroConf: public Ui_ZeroConf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZEROCONF_H
