#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "editwindow.h"
#include "ui_editwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
//新建
    EditWindow *New_window = new EditWindow;
    New_window->show();
}
