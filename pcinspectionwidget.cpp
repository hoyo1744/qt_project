#include "pcinspectionwidget.h"
#include "ui_pcinspectionwidget.h"

pcInspectionWidget::pcInspectionWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pcInspectionWidget)
{
    ui->setupUi(this);
}

pcInspectionWidget::~pcInspectionWidget()
{
    delete ui;
}
