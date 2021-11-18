/********************************************************************************
** Form generated from reading UI file 'editwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITWINDOW_H
#define UI_EDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditWindow
{
public:
    QAction *action_new;
    QAction *action_open;
    QAction *action_save;
    QAction *action_saveas;
    QAction *action_exit;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EditWindow)
    {
        if (EditWindow->objectName().isEmpty())
            EditWindow->setObjectName(QString::fromUtf8("EditWindow"));
        EditWindow->resize(600, 620);
        EditWindow->setMinimumSize(QSize(600, 620));
        EditWindow->setMaximumSize(QSize(600, 620));
        EditWindow->setAcceptDrops(false);
        EditWindow->setToolTipDuration(-2);
        action_new = new QAction(EditWindow);
        action_new->setObjectName(QString::fromUtf8("action_new"));
        action_open = new QAction(EditWindow);
        action_open->setObjectName(QString::fromUtf8("action_open"));
        action_save = new QAction(EditWindow);
        action_save->setObjectName(QString::fromUtf8("action_save"));
        action_saveas = new QAction(EditWindow);
        action_saveas->setObjectName(QString::fromUtf8("action_saveas"));
        action_exit = new QAction(EditWindow);
        action_exit->setObjectName(QString::fromUtf8("action_exit"));
        centralwidget = new QWidget(EditWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 601, 571));
        EditWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EditWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        EditWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(EditWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EditWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action_new);
        menu->addAction(action_open);
        menu->addAction(action_save);
        menu->addAction(action_saveas);
        menu->addSeparator();
        menu->addAction(action_exit);

        retranslateUi(EditWindow);

        QMetaObject::connectSlotsByName(EditWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EditWindow)
    {
        EditWindow->setWindowTitle(QCoreApplication::translate("EditWindow", "\344\270\273\350\217\234\345\215\225", nullptr));
        action_new->setText(QCoreApplication::translate("EditWindow", "\346\226\260\345\273\272", nullptr));
        action_open->setText(QCoreApplication::translate("EditWindow", "\346\211\223\345\274\200", nullptr));
        action_save->setText(QCoreApplication::translate("EditWindow", "\344\277\235\345\255\230", nullptr));
        action_saveas->setText(QCoreApplication::translate("EditWindow", "\345\217\246\345\255\230\344\270\272", nullptr));
        action_exit->setText(QCoreApplication::translate("EditWindow", "\351\200\200\345\207\272", nullptr));
        textEdit->setHtml(QCoreApplication::translate("EditWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\203\275\345\234\250\346\226\260\345\273\272\347\232\204\346\227\266\345\200\231</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\260\261\347\233\264\346\216\245\350\276\223\345\207\272\344\270\200\344\272\233\344\270\234\350\245\277\345\220\227</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">like 2021/11/08</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -"
                        "qt-block-indent:0; text-indent:0px;\">?</p></body></html>", nullptr));
        menu->setTitle(QCoreApplication::translate("EditWindow", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditWindow: public Ui_EditWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITWINDOW_H
