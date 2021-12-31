#include "filemenu.h"

FileMenu::FileMenu()
{
    QFile fp("./diary_files/menu.txt");
    if(fp.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream stream_in(&fp);
        QString line;
        int line_num = 1;
        while(stream_in.readLineInto(&line))
        {
            if(line_num == 1)
            {
                this->file_num = line.toInt();
            }
            else
            {
                this->file_queue += line;
            }
            line_num++;
        }
        fp.close();
    }
}

int FileMenu::file_count()
{
    return file_num;
}

void FileMenu::menu_add(QString file_name)
{
    if(!this->file_queue.contains(file_name))
    {
        this->file_queue.append(file_name);
        this->file_num++;
    }
    menu_write();//没必要每次都从头重写一遍menu.txt，新增了文件后改第一行和加最后一行就行了
}

void FileMenu::menu_del(QString file_name)
{
    this->file_num--;
    int pos = this->file_queue.indexOf(file_name);
    this->file_queue.removeAt(pos);
    menu_write();
    show_all();

    QString old_path = "./diary_files/" + file_name;
    QString new_path = "./diary_files/" + file_name.left(19) + "（已删除）.txt";
    QFile::rename(old_path, new_path);

    reset_id();
}

void FileMenu::menu_write()
{
    QFile fp("./diary_files/menu.txt");
    if(fp.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream stream_out(&fp);
        stream_out<<this->file_num<<endl;
        for(int i=0;i<this->file_num;i++)
        {
            QString str = this->file_queue[i];
            stream_out<<str<<endl;
        }
        fp.close();
    }
}

void FileMenu::reset_id()
{
    for(int i = 0; i < this->file_num; i++)
    {
       QString string = this->file_queue.at(i);
       QFile fp("./diary_files/" + string);
       QString tmp = "日记编号: " + QString::number(i+1) + "\r\n";
       if(fp.open(QIODevice::ReadOnly | QIODevice::Text))
       {
           QTextStream stream_in(&fp);
           QString line;
           int line_num = 1;
           while(stream_in.readLineInto(&line))
           {
               if(line_num != 1)
               {
                   tmp += line + "\r\n";
               }
               line_num++;
           }
           fp.close();
       }
       if(fp.open(QIODevice::WriteOnly | QIODevice::Text))
       {
           QTextStream stream_out(&fp);
           stream_out<<tmp<<endl;
           fp.close();
       }
    }
}

void FileMenu::item_add(QString name_str, int num)
{
    name_str.replace(4, 1, "/");
    name_str.replace(7, 1, "/");
    name_str.replace(10, 1, " ");
    name_str.replace(13, 1, ":");
    name_str.replace(16, 1, ":");
    QString file_name = name_str.left(19);
    QString target_str = "第" + QString::number(num) + "篇: " + file_name;
    this->listWidget->addItem(target_str);
}

void FileMenu::show_all()
{
    this->listWidget->clear();
    for(int i = 0; i < this->file_num; i++)
    {
       QString string = this->file_queue.at(i);
       item_add(string, i+1);
    }
}

void FileMenu::show_all(QListWidget *listWidget)
{
    this->listWidget = listWidget;
    show_all();
}

void FileMenu::show_key(QString key_word, int mask)
{
    switch (mask)
    {
        case SHOW_DATE:         //根据日期显示(key_word为日期)
            this->listWidget->clear();
            for(int i = 0; i < this->file_num; i++)
            {
               QString string = this->file_queue.at(i);
               if(string.left(10) == key_word)
               {
                   item_add(string, i+1);
               }
            }
            break;
        case SHOW_SRCH:         //搜索功能(搜索key_word)
            this->listWidget->clear();
            for(int i = 0; i < this->file_num; i++)
            {
               QString string = this->file_queue.at(i);
               QFile fp("./diary_files/" + string);
               if(fp.open(QIODevice::ReadOnly | QIODevice::Text))
               {
                   QTextStream stream_in(&fp);
                   QString content_str = stream_in.readAll();
                   int num = content_str.contains(key_word);
                   if(num)
                   {
                       item_add(string, i+1);
                   }
                   fp.close();
               }
            }
            break;
        default:
            break;
    }
}
