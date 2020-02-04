#include "homewidget.h"
#include "ui_homewidget.h"

homeWidget::homeWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::homeWidget)
{
    ui->setupUi(this);
}

homeWidget::~homeWidget()
{
    delete ui;
}
