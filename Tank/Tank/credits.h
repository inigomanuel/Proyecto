#ifndef CREDITS_H
#define CREDITS_H

#include <QWidget>

namespace Ui {
class credits;
}

class credits : public QWidget
{
    Q_OBJECT

public:
    explicit credits(QWidget *parent = 0);
    ~credits();

private slots:
    void on_pushButton_clicked();

private:
    Ui::credits *ui;
};

#endif // CREDITS_H
