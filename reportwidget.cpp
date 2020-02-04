#include "reportwidget.h"
#include "ui_reportwidget.h"

reportWidget::reportWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reportWidget)
{
    ui->setupUi(this);
}

reportWidget::~reportWidget()
{
    delete ui;
}
