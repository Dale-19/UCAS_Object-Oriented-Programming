#ifndef FILEMENU_H
#define FILEMENU_H

#include <QList>
#include <QFile>
#include <QTextStream>
#include <QtWidgets/QListWidget>

class FileMenu
{
public:
    int file_num;
    FileMenu();
    void menu_add(QString file_name);
    void menu_del(QString file_name);
    void item_add(QListWidget *listWidget);

private:
    QList <QString> file_queue;
    QListWidget *listWidget;
};

extern FileMenu* menu;

#endif // FILEMENU_H
