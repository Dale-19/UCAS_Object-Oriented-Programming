#ifndef REPWINDOW_H
#define REPWINDOW_H

#include <QWidget>

namespace Ui {
class RepWindow;
}

class RepWindow : public QWidget
{
    Q_OBJECT

public:
    explicit RepWindow(QWidget *parent = nullptr);
    ~RepWindow();

signals:
    void send_key(QString);
    void send_repkey(QString, QString, int);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_find_clicked();

    void on_pushButton_replace_clicked();

    void on_pushButton_replaceAll_clicked();

    void on_pushButton_cancel_clicked();

private:
    Ui::RepWindow *ui;
};

#endif // REPWINDOW_H
