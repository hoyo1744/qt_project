#include "pcoptimizationwidget.h"
#include "ui_pcoptimizationwidget.h"

pcOptimizationWidget::pcOptimizationWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pcOptimizationWidget)
{
    ui->setupUi(this);
}

pcOptimizationWidget::~pcOptimizationWidget()
{
    delete ui;
}
