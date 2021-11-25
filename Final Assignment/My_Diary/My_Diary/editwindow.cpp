#include "editwindow.h"
#include "ui_editwindow.h"
#include "filemenu.h"

#pragma execution_character_set("utf-8")

EditWindow::EditWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditWindow)
{
    ui->setupUi(this);
    setFixedSize(600,620);
    connect(ui->textEdit,SIGNAL(textChanged()),this,SLOT(set_change_status()));
    is_changed = 0;
    auto_save = 0;
}

EditWindow::~EditWindow()
{
    delete ui;
}

void EditWindow::closeEvent(QCloseEvent *event)
{
    bool need_close = window_close();//拦截关闭窗口的行为
    if(need_close) event->accept();
    else event->ignore();
}

void EditWindow::open_file()
{
    QString curPath=QDir::currentPath();
    QString dlgTitle="打开一个文件";
    QString filter="所有文件(*.*);;文本文件(*.txt)";
    file_name=QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
    if (file_name.isEmpty())
        return;
    if(!IO_open(file_name))
    {
        QMessageBox::warning(NULL,"警告","文件打开失败!");
    }
}

bool EditWindow::IO_open(const QString &file_name)
{
    QFile fp(file_name);
    if (!fp.exists())
        return false;
    if (!fp.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;
    QTextStream Stream(&fp);
    ui->textEdit->setPlainText(Stream.readAll());
    fp.close();
    is_changed = 0;
    show();

    return true;
}

void EditWindow::new_window()
{
    text_init();
    show();
}

bool EditWindow::window_close()
{
    if(is_changed==0)
    {
        return 1;
    }
    else
    {
        QMessageBox box;
        box.setWindowTitle("提示");
        box.setText("要保存吗？");
        box.setStandardButtons(QMessageBox::Yes | QMessageBox::No |QMessageBox::Cancel);
        int ret = box.exec();
        if(ret == QMessageBox::Yes)
        {
            save_text();
            return 1;
        }
        else if(ret == QMessageBox::No)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

void EditWindow::set_change_status()
{
    if(auto_save)
    {
        save_text();
    }
    else
    {
        is_changed = 1;
    }
}

void EditWindow::text_init()
{
    QDateTime *DateTime = new QDateTime(QDateTime::currentDateTime());
    QString date_str = DateTime->toString("yyyy/MM/dd hh:mm:ss ddd");
    QString num_str = QString::number(menu->file_num+1);
    QString str = "日记编号: "
                + num_str
                + "\n创建时间: "
                + date_str
                + "\n/**********************************************************************/\n\n";
    ui->textEdit->setText(str);
    ui->textEdit->moveCursor(QTextCursor::End, QTextCursor::MoveAnchor);

    file_name = DateTime->toString("yyyy_MM_dd_hh_mm_ss") + ".txt";
    is_changed = 0;
}

bool EditWindow::IO_save(const QString &file_name)
{
    QFile fp("./diary_files/"+file_name);
    if (!fp.open(QIODevice::WriteOnly | QIODevice::Text))
        return false;
    QTextStream stream_out(&fp);
    QString str=ui->textEdit->toPlainText();
    stream_out<<str<<endl;
    fp.close();
    return true;
}

void EditWindow::save_text()
{
    IO_save(file_name);
    menu->menu_add(file_name);
    menu->item_add(NULL);
    is_changed = 0;
}

void EditWindow::on_action_new_triggered()
{
    new_window();
}

void EditWindow::on_action_open_triggered()
{
    open_file();
}

void EditWindow::on_action_save_triggered()
{
    save_text();
}

void EditWindow::on_action_exit_triggered()
{
    bool need_close = window_close();
    if(need_close) close();
}

void EditWindow::on_action_autosave_toggled(bool arg1)
{
    if(arg1)
    {
        save_text();
    }
    auto_save = arg1;
}
