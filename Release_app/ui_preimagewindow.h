/********************************************************************************
** Form generated from reading UI file 'preimagewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREIMAGEWINDOW_H
#define UI_PREIMAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_PreImageWindow
{
public:
    QGridLayout *gridLayout;
    QLineEdit *OPortlineEdit;
    QDialogButtonBox *buttonBox;
    QComboBox *comboBox;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_5;
    QComboBox *IPcomboBox;

    void setupUi(QDialog *PreImageWindow)
    {
        if (PreImageWindow->objectName().isEmpty())
            PreImageWindow->setObjectName(QString::fromUtf8("PreImageWindow"));
        PreImageWindow->resize(392, 266);
        gridLayout = new QGridLayout(PreImageWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        OPortlineEdit = new QLineEdit(PreImageWindow);
        OPortlineEdit->setObjectName(QString::fromUtf8("OPortlineEdit"));

        gridLayout->addWidget(OPortlineEdit, 1, 4, 1, 1);

        buttonBox = new QDialogButtonBox(PreImageWindow);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 2, 1, 1);

        comboBox = new QComboBox(PreImageWindow);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 2, 1, 1);

        label_4 = new QLabel(PreImageWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label = new QLabel(PreImageWindow);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_5 = new QLabel(PreImageWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 3, 1, 1);

        IPcomboBox = new QComboBox(PreImageWindow);
        IPcomboBox->setObjectName(QString::fromUtf8("IPcomboBox"));

        gridLayout->addWidget(IPcomboBox, 1, 2, 1, 1);

        QWidget::setTabOrder(comboBox, OPortlineEdit);

        retranslateUi(PreImageWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreImageWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreImageWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(PreImageWindow);
    } // setupUi

    void retranslateUi(QDialog *PreImageWindow)
    {
        PreImageWindow->setWindowTitle(QApplication::translate("PreImageWindow", "Dialog", nullptr));
        OPortlineEdit->setText(QString());
        comboBox->setItemText(0, QApplication::translate("PreImageWindow", "high", nullptr));
        comboBox->setItemText(1, QApplication::translate("PreImageWindow", "medium", nullptr));
        comboBox->setItemText(2, QApplication::translate("PreImageWindow", "low", nullptr));

        label_4->setText(QApplication::translate("PreImageWindow", "Your IP :", nullptr));
        label->setText(QApplication::translate("PreImageWindow", "Stream Quality : ", nullptr));
        label_5->setText(QApplication::translate("PreImageWindow", "Chosen Port :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreImageWindow: public Ui_PreImageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREIMAGEWINDOW_H
