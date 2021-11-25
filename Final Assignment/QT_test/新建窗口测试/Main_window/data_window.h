#ifndef DATA_WINDOW_H
#define DATA_WINDOW_H

#include <QDialog>

namespace Ui {
class Data_window;
}

class Data_window : public QDialog
{
    Q_OBJECT

public:
    explicit Data_window(QWidget *parent = nullptr);
    ~Data_window();

private:
    Ui::Data_window *ui;
};

#endif // DATA_WINDOW_H
