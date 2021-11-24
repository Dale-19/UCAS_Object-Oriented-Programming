#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "editwindow.h"
#include "filemenu.h"

FileMenu *menu = new FileMenu;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(870,500);

    menu->item_add(ui->listWidget);
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
    New_window->file_name = file_name;
    New_window->IO_open("./diary_files/"+file_name);
}
