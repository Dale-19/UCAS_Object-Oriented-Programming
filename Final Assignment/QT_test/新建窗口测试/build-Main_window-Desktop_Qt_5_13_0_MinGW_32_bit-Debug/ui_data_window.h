/********************************************************************************
** Form generated from reading UI file 'data_window.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATA_WINDOW_H
#define UI_DATA_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Data_window
{
public:
    QLabel *label;

    void setupUi(QDialog *Data_window)
    {
        if (Data_window->objectName().isEmpty())
            Data_window->setObjectName(QString::fromUtf8("Data_window"));
        Data_window->resize(400, 300);
        label = new QLabel(Data_window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 90, 231, 121));

        retranslateUi(Data_window);

        QMetaObject::connectSlotsByName(Data_window);
    } // setupUi

    void retranslateUi(QDialog *Data_window)
    {
        Data_window->setWindowTitle(QCoreApplication::translate("Data_window", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Data_window", "This is a date-window.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Data_window: public Ui_Data_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATA_WINDOW_H
