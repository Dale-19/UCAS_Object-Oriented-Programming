#include "srchwindow.h"
#include "ui_srchwindow.h"
#include "filemenu.h"
#include "editwindow.h"

SrchWindow::SrchWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SrchWindow)
{
    ui->setupUi(this);
    setFixedSize(490,160);
    connect(ui->lineEdit,SIGNAL(returnPressed()),this,SLOT(on_pushButton_clicked()));
}

SrchWindow::~SrchWindow()
{
    delete ui;
}

void SrchWindow::on_pushButton_2_clicked()
{
    close();
}

MainSrchWindow::MainSrchWindow() : SrchWindow()
{
    ui->pushButton->setText("查找文档");
}

void MainSrchWindow::closeEvent(QCloseEvent *event)
{
    menu->show_all();
    event->accept();
}

void MainSrchWindow::on_pushButton_clicked()
{
    QString srch_str = ui->lineEdit->text();
    menu->show_key(srch_str, SHOW_SRCH);
}

EditSrchWindow::EditSrchWindow() : SrchWindow()
{
    ui->pushButton->setText("查找下一个");
}

void EditSrchWindow::on_pushButton_clicked()
{
    QString srch_str = ui->lineEdit->text();
    emit send_key(srch_str);
}
