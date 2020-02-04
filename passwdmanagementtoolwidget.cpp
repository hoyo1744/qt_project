#include "passwdmanagementtoolwidget.h"
#include "ui_passwdmanagementtoolwidget.h"

passwdManagementToolWidget::passwdManagementToolWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::passwdManagementToolWidget)
{
    ui->setupUi(this);
}

passwdManagementToolWidget::~passwdManagementToolWidget()
{
    delete ui;
}
