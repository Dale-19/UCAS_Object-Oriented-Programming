/********************************************************************************
** Form generated from reading UI file 'sub_window.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUB_WINDOW_H
#define UI_SUB_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Sub_window
{
public:
    QLabel *label;

    void setupUi(QDialog *Sub_window)
    {
        if (Sub_window->objectName().isEmpty())
            Sub_window->setObjectName(QString::fromUtf8("Sub_window"));
        Sub_window->resize(400, 300);
        label = new QLabel(Sub_window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 100, 261, 121));

        retranslateUi(Sub_window);

        QMetaObject::connectSlotsByName(Sub_window);
    } // setupUi

    void retranslateUi(QDialog *Sub_window)
    {
        Sub_window->setWindowTitle(QCoreApplication::translate("Sub_window", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Sub_window", "This is a sub-window.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sub_window: public Ui_Sub_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUB_WINDOW_H
