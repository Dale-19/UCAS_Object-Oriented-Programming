#ifndef EDITWINDOW_H
#define EDITWINDOW_H

#include <QMainWindow>
#include <QDateTime>
#include <QFile>
#include <QDir>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

namespace Ui {
class EditWindow;
}

class EditWindow : public QMainWindow
{
    Q_OBJECT

public:
    QString file_name;

    explicit EditWindow(QWidget *parent = nullptr);
    ~EditWindow();
    void closeEvent(QCloseEvent *event);
    void open_file();
    bool IO_open(const QString &file_name);
    void new_window();

private slots:
    bool window_close();
    void set_change_status();
    void text_init();
    bool IO_save(const QString &file_name);
    void save_text();

    void on_action_new_triggered();

    void on_action_open_triggered();

    void on_action_save_triggered();

    void on_action_autosave_toggled(bool arg1);

    void on_action_exit_triggered();

private:
    Ui::EditWindow *ui;
    bool is_changed;
    bool auto_save;
};

#endif // EDITWINDOW_H
