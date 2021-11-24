#include "filemenu.h"

FileMenu::FileMenu()
{
    this->listWidget = NULL;
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

void FileMenu::menu_add(QString file_name)
{
    if(!this->file_queue.contains(file_name))
    {
        this->file_queue.append(file_name);
        this->file_num++;
    }
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
    }//没必要每次都从头重写一遍menu.txt，后面改成新增了文件后改第一行和加最后一行就行了
}

void FileMenu::item_add(QListWidget *listWidget)
{
    if(this->listWidget == NULL)
    {
        this->listWidget = listWidget;
    }
    this->listWidget->clear();
    for(int i = 0; i < this->file_num; i++)
    {
       QString string = this->file_queue.at(i);
       string.replace(4, 1, "/");
       string.replace(7, 1, "/");
       string.replace(10, 1, " ");
       string.replace(13, 1, ":");
       string.replace(16, 1, ":");
       QString file_name = string.left(19);
       QString target_str = "第" + QString::number(i+1) + "篇: " + file_name;
       this->listWidget->addItem(target_str);
    }//这个也要考虑，要是后续会输出部分内容了那就得每次刷新，要是维持只输出创建时间那没必要每次save都刷新
}
