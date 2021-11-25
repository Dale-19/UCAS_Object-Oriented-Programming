#ifndef SUB_WINDOW_H
#define SUB_WINDOW_H

#include <QDialog>

namespace Ui {
class Sub_window;
}

class Sub_window : public QDialog
{
    Q_OBJECT

public:
    explicit Sub_window(QWidget *parent = nullptr);
    ~Sub_window();

private:
    Ui::Sub_window *ui;
};

#endif // SUB_WINDOW_H
