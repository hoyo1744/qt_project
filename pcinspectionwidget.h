#ifndef PCINSPECTIONWIDGET_H
#define PCINSPECTIONWIDGET_H

#include <QWidget>

namespace Ui {
class pcInspectionWidget;
}

class pcInspectionWidget : public QWidget
{
    Q_OBJECT

public:
    explicit pcInspectionWidget(QWidget *parent = 0);
    ~pcInspectionWidget();

private:
    Ui::pcInspectionWidget *ui;
};

#endif // PCINSPECTIONWIDGET_H
