#ifndef REPORTWIDGET_H
#define REPORTWIDGET_H

#include <QWidget>

namespace Ui {
class reportWidget;
}

class reportWidget : public QWidget
{
    Q_OBJECT

public:
    explicit reportWidget(QWidget *parent = 0);
    ~reportWidget();

private:
    Ui::reportWidget *ui;
};

#endif // REPORTWIDGET_H
