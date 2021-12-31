#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QListWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_new_clicked();

    void on_pushButton_delete_clicked();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_calendarWidget_clicked(const QDate &date);

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_search_clicked();

private:
    QString last_date;
    QString last_file;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
