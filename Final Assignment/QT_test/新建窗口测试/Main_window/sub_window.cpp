#include "sub_window.h"
#include "ui_sub_window.h"

Sub_window::Sub_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sub_window)
{
    ui->setupUi(this);
}

Sub_window::~Sub_window()
{
    delete ui;
}
