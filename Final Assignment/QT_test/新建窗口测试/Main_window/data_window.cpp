#include "data_window.h"
#include "ui_data_window.h"

Data_window::Data_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Data_window)
{
    ui->setupUi(this);
}

Data_window::~Data_window()
{
    delete ui;
}
