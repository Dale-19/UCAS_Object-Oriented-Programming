#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "sub_window.h"
#include "ui_sub_window.h"

#include "data_window.h"
#include "ui_data_window.h"

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
    Sub_window *New_window = new Sub_window;
    New_window->show();
}

void MainWindow::on_calendarWidget_clicked(const QDate &date)
{
    Data_window *New_window = new Data_window;
    New_window->show();
}
