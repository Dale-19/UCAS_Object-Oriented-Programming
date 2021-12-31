/********************************************************************************
** Form generated from reading UI file 'srchwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SRCHWINDOW_H
#define UI_SRCHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SrchWindow
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QWidget *SrchWindow)
    {
        if (SrchWindow->objectName().isEmpty())
            SrchWindow->setObjectName(QString::fromUtf8("SrchWindow"));
        SrchWindow->resize(490, 160);
        pushButton = new QPushButton(SrchWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 40, 121, 30));
        lineEdit = new QLineEdit(SrchWindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 40, 251, 21));
        lineEdit->setCursorPosition(0);
        label = new QLabel(SrchWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(11, 40, 81, 20));
        pushButton_2 = new QPushButton(SrchWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 80, 121, 30));

        retranslateUi(SrchWindow);

        QMetaObject::connectSlotsByName(SrchWindow);
    } // setupUi

    void retranslateUi(QWidget *SrchWindow)
    {
        SrchWindow->setWindowTitle(QCoreApplication::translate("SrchWindow", "\346\220\234\347\264\242", nullptr));
        pushButton->setText(QCoreApplication::translate("SrchWindow", "\346\237\245\346\211\276", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("SrchWindow", "\346\237\245\346\211\276\345\206\205\345\256\271\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SrchWindow", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SrchWindow: public Ui_SrchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SRCHWINDOW_H
