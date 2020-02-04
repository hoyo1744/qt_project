#ifndef PCOPTIMIZATIONWIDGET_H
#define PCOPTIMIZATIONWIDGET_H

#include <QWidget>

namespace Ui {
class pcOptimizationWidget;
}

class pcOptimizationWidget : public QWidget
{
    Q_OBJECT

public:
    explicit pcOptimizationWidget(QWidget *parent = 0);
    ~pcOptimizationWidget();

private:
    Ui::pcOptimizationWidget *ui;
};

#endif // PCOPTIMIZATIONWIDGET_H
