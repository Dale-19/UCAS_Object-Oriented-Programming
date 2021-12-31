#include "repwindow.h"
#include "ui_repwindow.h"

RepWindow::RepWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RepWindow)
{
    ui->setupUi(this);
    setFixedSize(490,200);
    connect(ui->srch_text,SIGNAL(returnPressed()),this,SLOT(on_pushButton_find_clicked()));
    connect(ui->rep_text,SIGNAL(returnPressed()),this,SLOT(on_pushButton_replace_clicked()));
}

RepWindow::~RepWindow()
{
    delete ui;
}

void RepWindow::on_pushButton_find_clicked()
{
    QString srch_str = ui->srch_text->text();
    emit send_key(srch_str);
}

void RepWindow::on_pushButton_replace_clicked()
{
    QString srch_str = ui->srch_text->text();
    QString dest_str = ui->rep_text->text();
    emit send_repkey(srch_str, dest_str, 0);
}

void RepWindow::on_pushButton_replaceAll_clicked()
{
    QString srch_str = ui->srch_text->text();
    QString dest_str = ui->rep_text->text();
    emit send_repkey(srch_str, dest_str, 1);
}

void RepWindow::on_pushButton_cancel_clicked()
{
    close();
}
