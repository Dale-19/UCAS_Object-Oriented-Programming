/********************************************************************************
** Form generated from reading UI file 'repwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPWINDOW_H
#define UI_REPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RepWindow
{
public:
    QPushButton *pushButton_replace;
    QPushButton *pushButton_find;
    QLineEdit *srch_text;
    QLabel *label;
    QPushButton *pushButton_replaceAll;
    QPushButton *pushButton_cancel;
    QLineEdit *rep_text;
    QLabel *label_2;

    void setupUi(QWidget *RepWindow)
    {
        if (RepWindow->objectName().isEmpty())
            RepWindow->setObjectName(QString::fromUtf8("RepWindow"));
        RepWindow->resize(490, 200);
        pushButton_replace = new QPushButton(RepWindow);
        pushButton_replace->setObjectName(QString::fromUtf8("pushButton_replace"));
        pushButton_replace->setGeometry(QRect(349, 70, 121, 30));
        pushButton_find = new QPushButton(RepWindow);
        pushButton_find->setObjectName(QString::fromUtf8("pushButton_find"));
        pushButton_find->setGeometry(QRect(349, 30, 121, 30));
        srch_text = new QLineEdit(RepWindow);
        srch_text->setObjectName(QString::fromUtf8("srch_text"));
        srch_text->setGeometry(QRect(79, 30, 251, 21));
        srch_text->setCursorPosition(0);
        label = new QLabel(RepWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 81, 20));
        pushButton_replaceAll = new QPushButton(RepWindow);
        pushButton_replaceAll->setObjectName(QString::fromUtf8("pushButton_replaceAll"));
        pushButton_replaceAll->setGeometry(QRect(350, 110, 121, 30));
        pushButton_cancel = new QPushButton(RepWindow);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(350, 150, 121, 30));
        rep_text = new QLineEdit(RepWindow);
        rep_text->setObjectName(QString::fromUtf8("rep_text"));
        rep_text->setGeometry(QRect(79, 60, 251, 21));
        rep_text->setCursorPosition(0);
        label_2 = new QLabel(RepWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 81, 20));

        retranslateUi(RepWindow);

        QMetaObject::connectSlotsByName(RepWindow);
    } // setupUi

    void retranslateUi(QWidget *RepWindow)
    {
        RepWindow->setWindowTitle(QCoreApplication::translate("RepWindow", "Form", nullptr));
        pushButton_replace->setText(QCoreApplication::translate("RepWindow", "\346\233\277\346\215\242", nullptr));
        pushButton_find->setText(QCoreApplication::translate("RepWindow", "\346\237\245\346\211\276\344\270\213\344\270\200\344\270\252", nullptr));
#if QT_CONFIG(tooltip)
        srch_text->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("RepWindow", "\346\237\245\346\211\276\345\206\205\345\256\271\357\274\232", nullptr));
        pushButton_replaceAll->setText(QCoreApplication::translate("RepWindow", "\346\233\277\346\215\242\345\205\250\351\203\250", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("RepWindow", "\345\217\226\346\266\210", nullptr));
#if QT_CONFIG(tooltip)
        rep_text->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("RepWindow", "\346\233\277\346\215\242\345\206\205\345\256\271\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RepWindow: public Ui_RepWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPWINDOW_H
