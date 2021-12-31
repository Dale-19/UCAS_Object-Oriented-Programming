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
    explicit EditWindow(QWidget *parent = nullptr);
    ~EditWindow();
    void closeEvent(QCloseEvent *event);
    void set_file_name(QString name_str);
    void open_file();
    bool IO_open(const QString &file_name);
    void new_window();

private slots:
    bool window_close();
    void set_change_status();
    void text_init();
    bool IO_save(const QString &file_name);
    void save_text();
    void srch_content(QString content_str);
    void rep_content(QString content_str, QString dest_str, int mode);

    void on_action_new_triggered();

    void on_action_open_triggered();

    void on_action_save_triggered();

    void on_action_autosave_toggled(bool arg1);

    void on_action_exit_triggered();

    void on_action_back_triggered();

    void on_action_restore_triggered();

    void on_action_cut_triggered();

    void on_action_copy_triggered();

    void on_action_paste_triggered();

    void on_action_all_triggered();

    void on_action_search_triggered();

    void on_action_replace_triggered();

    void on_action_saveas_triggered();

private:
    QString file_name;
    bool is_changed;
    bool auto_save;

    Ui::EditWindow *ui;
};

#endif // EDITWINDOW_H
