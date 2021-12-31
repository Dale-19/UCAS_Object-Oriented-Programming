#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "editwindow.h"
#include "filemenu.h"
#include "srchwindow.h"

FileMenu *menu = new FileMenu;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(870,500);
    last_date = "Not a date";
    last_file = "Not a file";

    menu->show_all(ui->listWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_new_clicked()
{
    EditWindow *New_window = new EditWindow;
    New_window->new_window();
}

void MainWindow::on_pushButton_delete_clicked()
{
    if(last_file == "Not a file")
    {
        QMessageBox::warning(NULL,"警告","请先选择一个文件！");
    }
    else
    {
        QString file_name = last_file.right(19);
        file_name.replace(4, 1, "_");
        file_name.replace(7, 1, "_");
        file_name.replace(10, 1, "_");
        file_name.replace(13, 1, "_");
        file_name.replace(16, 1, "_");
        file_name += ".txt";

        QMessageBox box;
        box.setWindowTitle("提示");
        box.setText("确定删除文件 \""+file_name+"\" 吗？");
        box.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
        int ret = box.exec();
        if(ret == QMessageBox::Yes)
        {
            //删除对应文件
            menu->menu_del(file_name);
            last_file = "Not a file";
        }
        else
        {
            //不执行操作
        }
    }
}

void MainWindow::on_pushButton_search_clicked()
{
    MainSrchWindow *New_window = new MainSrchWindow;
    New_window->show();
}

void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QString tmp = item->text();
    QString file_name = tmp.right(19);
    file_name.replace(4, 1, "_");
    file_name.replace(7, 1, "_");
    file_name.replace(10, 1, "_");
    file_name.replace(13, 1, "_");
    file_name.replace(16, 1, "_");
    file_name += ".txt";
    EditWindow *New_window = new EditWindow;
    New_window->set_file_name(file_name);
    New_window->IO_open("./diary_files/"+file_name);
}

void MainWindow::on_calendarWidget_clicked(const QDate &date)
{
    QString date_str = date.toString("yyyy_MM_dd");
    if(last_date != date_str)
    {
        last_date = date_str;
        //刷新显示区
        menu->show_key(date_str, SHOW_DATE);
        //QMessageBox::warning(NULL,"警告",date_str);
    }
    else
    {
        last_date = "Not a date";
        //恢复显示区
        menu->show_all(ui->listWidget);
    }
}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    last_file = item->text();
}
