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
    QAction *action_back;
    QAction *action_cut;
    QAction *action_copy;
    QAction *action_paste;
    QAction *action_delete;
    QAction *action_search;
    QAction *action_replace;
    QAction *action_all;
    QAction *action_restore;
    QAction *action_autosave;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menuaction_edit;
    QMenu *menu_2;
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
        action_open->setShortcutVisibleInContextMenu(true);
        action_save = new QAction(EditWindow);
        action_save->setObjectName(QString::fromUtf8("action_save"));
        action_save->setShortcutVisibleInContextMenu(true);
        action_saveas = new QAction(EditWindow);
        action_saveas->setObjectName(QString::fromUtf8("action_saveas"));
        action_exit = new QAction(EditWindow);
        action_exit->setObjectName(QString::fromUtf8("action_exit"));
        action_exit->setShortcutVisibleInContextMenu(true);
        action_back = new QAction(EditWindow);
        action_back->setObjectName(QString::fromUtf8("action_back"));
        action_cut = new QAction(EditWindow);
        action_cut->setObjectName(QString::fromUtf8("action_cut"));
        action_copy = new QAction(EditWindow);
        action_copy->setObjectName(QString::fromUtf8("action_copy"));
        action_paste = new QAction(EditWindow);
        action_paste->setObjectName(QString::fromUtf8("action_paste"));
        action_delete = new QAction(EditWindow);
        action_delete->setObjectName(QString::fromUtf8("action_delete"));
        action_search = new QAction(EditWindow);
        action_search->setObjectName(QString::fromUtf8("action_search"));
        action_replace = new QAction(EditWindow);
        action_replace->setObjectName(QString::fromUtf8("action_replace"));
        action_all = new QAction(EditWindow);
        action_all->setObjectName(QString::fromUtf8("action_all"));
        action_restore = new QAction(EditWindow);
        action_restore->setObjectName(QString::fromUtf8("action_restore"));
        action_autosave = new QAction(EditWindow);
        action_autosave->setObjectName(QString::fromUtf8("action_autosave"));
        action_autosave->setCheckable(true);
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
        menuaction_edit = new QMenu(menubar);
        menuaction_edit->setObjectName(QString::fromUtf8("menuaction_edit"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        EditWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(EditWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EditWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menuaction_edit->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action_new);
        menu->addAction(action_open);
        menu->addAction(action_save);
        menu->addAction(action_saveas);
        menu->addSeparator();
        menu->addAction(action_exit);
        menuaction_edit->addAction(action_back);
        menuaction_edit->addAction(action_restore);
        menuaction_edit->addSeparator();
        menuaction_edit->addAction(action_cut);
        menuaction_edit->addAction(action_copy);
        menuaction_edit->addAction(action_paste);
        menuaction_edit->addSeparator();
        menuaction_edit->addAction(action_search);
        menuaction_edit->addAction(action_replace);
        menuaction_edit->addSeparator();
        menuaction_edit->addAction(action_all);
        menu_2->addAction(action_autosave);

        retranslateUi(EditWindow);

        QMetaObject::connectSlotsByName(EditWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EditWindow)
    {
        EditWindow->setWindowTitle(QString());
        action_new->setText(QCoreApplication::translate("EditWindow", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(shortcut)
        action_new->setShortcut(QCoreApplication::translate("EditWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        action_open->setText(QCoreApplication::translate("EditWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(shortcut)
        action_open->setShortcut(QCoreApplication::translate("EditWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_save->setText(QCoreApplication::translate("EditWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(shortcut)
        action_save->setShortcut(QCoreApplication::translate("EditWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_saveas->setText(QCoreApplication::translate("EditWindow", "\345\217\246\345\255\230\344\270\272", nullptr));
#if QT_CONFIG(shortcut)
        action_saveas->setShortcut(QCoreApplication::translate("EditWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_exit->setText(QCoreApplication::translate("EditWindow", "\351\200\200\345\207\272", nullptr));
        action_back->setText(QCoreApplication::translate("EditWindow", "\346\222\244\351\224\200", nullptr));
#if QT_CONFIG(shortcut)
        action_back->setShortcut(QCoreApplication::translate("EditWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        action_cut->setText(QCoreApplication::translate("EditWindow", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(shortcut)
        action_cut->setShortcut(QCoreApplication::translate("EditWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        action_copy->setText(QCoreApplication::translate("EditWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(shortcut)
        action_copy->setShortcut(QCoreApplication::translate("EditWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        action_paste->setText(QCoreApplication::translate("EditWindow", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(shortcut)
        action_paste->setShortcut(QCoreApplication::translate("EditWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        action_delete->setText(QCoreApplication::translate("EditWindow", "\345\210\240\351\231\244", nullptr));
#if QT_CONFIG(shortcut)
        action_delete->setShortcut(QCoreApplication::translate("EditWindow", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        action_search->setText(QCoreApplication::translate("EditWindow", "\346\237\245\346\211\276", nullptr));
#if QT_CONFIG(shortcut)
        action_search->setShortcut(QCoreApplication::translate("EditWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        action_replace->setText(QCoreApplication::translate("EditWindow", "\346\233\277\346\215\242", nullptr));
        action_all->setText(QCoreApplication::translate("EditWindow", "\345\205\250\351\200\211", nullptr));
#if QT_CONFIG(shortcut)
        action_all->setShortcut(QCoreApplication::translate("EditWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        action_restore->setText(QCoreApplication::translate("EditWindow", "\346\201\242\345\244\215", nullptr));
#if QT_CONFIG(shortcut)
        action_restore->setShortcut(QCoreApplication::translate("EditWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        action_autosave->setText(QCoreApplication::translate("EditWindow", "\350\207\252\345\212\250\344\277\235\345\255\230", nullptr));
        textEdit->setHtml(QCoreApplication::translate("EditWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        menu->setTitle(QCoreApplication::translate("EditWindow", "\346\226\207\344\273\266", nullptr));
        menuaction_edit->setTitle(QCoreApplication::translate("EditWindow", "\347\274\226\350\276\221", nullptr));
        menu_2->setTitle(QCoreApplication::translate("EditWindow", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditWindow: public Ui_EditWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITWINDOW_H
