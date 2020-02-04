#ifndef PASSWDMANAGEMENTTOOLWIDGET_H
#define PASSWDMANAGEMENTTOOLWIDGET_H

#include <QWidget>

namespace Ui {
class passwdManagementToolWidget;
}

class passwdManagementToolWidget : public QWidget
{
    Q_OBJECT

public:
    explicit passwdManagementToolWidget(QWidget *parent = 0);
    ~passwdManagementToolWidget();

private:
    Ui::passwdManagementToolWidget *ui;
};

#endif // PASSWDMANAGEMENTTOOLWIDGET_H
