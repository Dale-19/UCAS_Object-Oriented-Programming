#ifndef SRCHWINDOW_H
#define SRCHWINDOW_H

#include <QWidget>

namespace Ui {
class SrchWindow;
}

class SrchWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SrchWindow(QWidget *parent = nullptr);
    ~SrchWindow();

signals:
    void send_key(QString);

private slots:
    virtual void on_pushButton_clicked() = 0;

    void on_pushButton_2_clicked();

protected:
    Ui::SrchWindow *ui;
};

class MainSrchWindow : public SrchWindow
{
public:
    MainSrchWindow();
    void closeEvent(QCloseEvent *event);
private:
    void on_pushButton_clicked();
};

class EditSrchWindow : public SrchWindow
{
public:
    EditSrchWindow();
private:
    void on_pushButton_clicked();
};

#endif // SRCHWINDOW_H
