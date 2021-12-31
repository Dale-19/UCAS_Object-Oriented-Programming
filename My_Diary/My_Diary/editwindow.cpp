#include "editwindow.h"
#include "ui_editwindow.h"
#include "filemenu.h"
#include "srchwindow.h"
#include "ui_srchwindow.h"
#include "repwindow.h"

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

void EditWindow::set_file_name(QString name_str)
{
    this->file_name = name_str;
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
    QTextStream stream_in(&fp);
    ui->textEdit->setPlainText(stream_in.readAll());
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

void EditWindow::srch_content(QString content_str)
{
    if(content_str == NULL)
    {

    }
    else if(ui->textEdit->find(content_str))//如果找到了
    {
        // 查找到后高亮显示
        QPalette palette = ui->textEdit->palette();
        palette.setColor(QPalette::Highlight,palette.color(QPalette::Active,QPalette::Highlight));
        ui->textEdit->setPalette(palette);
    }
    else                //如果没找到，就把光标移到开头再找（循环），如果还找不到就是没有
    {
        ui->textEdit->moveCursor(QTextCursor::Start);
        if(ui->textEdit->find(content_str))
        {
            QPalette palette = ui->textEdit->palette();
            palette.setColor(QPalette::Highlight,palette.color(QPalette::Active,QPalette::Highlight));
            ui->textEdit->setPalette(palette);
        }
        else
        {
            QMessageBox::information(this,tr("注意"),tr("没有找到内容"),QMessageBox::Ok);
        }
    }
}

void EditWindow::rep_content(QString content_str, QString dest_str, int mode)
{
    if(mode == 0)
    {
        //替换
        //单击替换后先检测当前光标选定的内容是不是find的内容
        //如果是，就直接替换，并尝试找下一个；否则类似find的功能，从头开始找一个
        QTextCursor now_cursor = ui->textEdit->textCursor();
        QString select_str = now_cursor.selectedText();
        if(select_str != content_str)
        {
            srch_content(content_str);
        }
        else
        {
            now_cursor.insertText(dest_str);
            srch_content(content_str);
        }
    }
    else
    {
        //替换全部
        QString tmp_str = ui->textEdit->toPlainText();
        tmp_str.replace(content_str, dest_str);
        ui->textEdit->setText(tmp_str);
    }
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
    QString num_str = QString::number(menu->file_count()+1);
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
    menu->show_all();
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

void EditWindow::on_action_back_triggered()
{
    ui->textEdit->undo();
}

void EditWindow::on_action_restore_triggered()
{
    ui->textEdit->redo();
}

void EditWindow::on_action_cut_triggered()
{
    ui->textEdit->cut();
}

void EditWindow::on_action_copy_triggered()
{
    ui->textEdit->copy();
}

void EditWindow::on_action_paste_triggered()
{
    ui->textEdit->paste();
}

void EditWindow::on_action_all_triggered()
{
    ui->textEdit->selectAll();
}

void EditWindow::on_action_search_triggered()
{
    EditSrchWindow *New_window = new EditSrchWindow;
    connect(New_window,SIGNAL(send_key(QString)),this,SLOT(srch_content(QString)));
    New_window->show();
}

void EditWindow::on_action_replace_triggered()
{
    RepWindow *New_window = new RepWindow;
    connect(New_window,SIGNAL(send_key(QString)),this,SLOT(srch_content(QString)));
    connect(New_window,SIGNAL(send_repkey(QString, QString, int)),
                    this,SLOT(rep_content(QString, QString, int)));
    New_window->show();
}

void EditWindow::on_action_saveas_triggered()
{
    QString curPath = QDir::currentPath()+"/diary_files/"+file_name;
    QString dlgTitle = "另存为";
    QString filter = "所有文件(*.*);;文本文件(*.txt)";
    QString dirPath = QFileDialog::getSaveFileName(this, dlgTitle, curPath, filter, Q_NULLPTR,
                                        QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);

    //如果选择的路径无效，则不保存
    if (!dirPath.isEmpty())
    {
       QFileInfo fileInfo(dirPath);
       if(fileInfo.exists())
           QFile::remove(dirPath);
       QMessageBox::warning(NULL,"测试",curPath);
       QFile::copy(curPath, dirPath);
    }
}
