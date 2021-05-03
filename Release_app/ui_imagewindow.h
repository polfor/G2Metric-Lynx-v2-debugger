/********************************************************************************
** Form generated from reading UI file 'imagewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEWINDOW_H
#define UI_IMAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ImageWindow
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *FPSlabel;
    QPushButton *pushButton_2;
    QLabel *ImageLabel;

    void setupUi(QDialog *ImageWindow)
    {
        if (ImageWindow->objectName().isEmpty())
            ImageWindow->setObjectName(QString::fromUtf8("ImageWindow"));
        ImageWindow->resize(877, 518);
        gridLayout = new QGridLayout(ImageWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(ImageWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCheckable(true);
        pushButton->setAutoRepeat(false);
        pushButton->setAutoRepeatDelay(0);
        pushButton->setAutoRepeatInterval(200);

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);

        FPSlabel = new QLabel(ImageWindow);
        FPSlabel->setObjectName(QString::fromUtf8("FPSlabel"));

        gridLayout->addWidget(FPSlabel, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(ImageWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 3, 1, 1);

        ImageLabel = new QLabel(ImageWindow);
        ImageLabel->setObjectName(QString::fromUtf8("ImageLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ImageLabel->sizePolicy().hasHeightForWidth());
        ImageLabel->setSizePolicy(sizePolicy);
        ImageLabel->setScaledContents(true);

        gridLayout->addWidget(ImageLabel, 0, 0, 1, 4);


        retranslateUi(ImageWindow);

        QMetaObject::connectSlotsByName(ImageWindow);
    } // setupUi

    void retranslateUi(QDialog *ImageWindow)
    {
        ImageWindow->setWindowTitle(QApplication::translate("ImageWindow", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("ImageWindow", "Start Streaming", nullptr));
        FPSlabel->setText(QString());
        pushButton_2->setText(QApplication::translate("ImageWindow", "Stop Streaming", nullptr));
        ImageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ImageWindow: public Ui_ImageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEWINDOW_H
