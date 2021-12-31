#ifndef FILEMENU_H
#define FILEMENU_H

#include "mainwindow.h"
#include <QList>
#include <QFile>
#include <QTextStream>
#include <QtWidgets/QListWidget>

#define SHOW_DATE 0
#define SHOW_SRCH 1

class FileMenu
{
public:
    FileMenu();
    int file_count();
    void menu_add(QString file_name);
    void menu_del(QString file_name);
    void show_all();
    void show_all(QListWidget *listWidget);
    void show_key(QString key_word, int mask);

private:
    int file_num;
    QList <QString> file_queue;
    QListWidget *listWidget;

    void menu_write();
    void reset_id();
    void item_add(QString name_str, int num);
};

extern FileMenu* menu;

#endif // FILEMENU_H
