#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    ui->setupUi(this);
    Init();

}

void MainWindow::Init()
{
    grid=new QGridLayout;
    stackedWidget=new QStackedWidget;

    hWidget=new homeWidget;
    ispWidget=new pcInspectionWidget;
    pcoptWidget=new pcOptimizationWidget;
    passmntWidget=new passwdManagementToolWidget;
    rptWidget=new reportWidget;

    stackedWidget->addWidget(hWidget);
    stackedWidget->addWidget(ispWidget);
    stackedWidget->addWidget(pcoptWidget);
    stackedWidget->addWidget(rptWidget);
    stackedWidget->addWidget(passmntWidget);

    toolbar=new QToolBar(this);

    act[0]=new QAction("HOME",this);
    act[1]=new QAction("PC Inspection",this);
    act[2]=new QAction("Passwd Management Tool",this);
    act[3]=new QAction("PC Optimization",this);
    act[4]=new QAction("Report",this);

    toolbar->setToolButtonStyle(Qt::ToolButtonTextOnly);

    for(int i=0;i<5;i++)
    {
        toolbar->addAction(act[i]);
    }

    connect(act[0],SIGNAL(triggered()),this,SLOT(homeTrigger()));
    connect(act[1],SIGNAL(triggered()),this,SLOT(pcInspectionTrigger()));
    connect(act[2],SIGNAL(triggered()),this,SLOT(passwdManagementToolTrigger()));
    connect(act[3],SIGNAL(triggered()),this,SLOT(pcOptimizationTrigger()));
    connect(act[4],SIGNAL(triggered()),this,SLOT(reportTrigger()));



    this->addToolBar(toolbar);
    this->resize(900,600);
    grid->addWidget(stackedWidget);
    this->centralWidget()->setLayout(grid);
}


void MainWindow::homeTrigger()
{
   stackedWidget->setCurrentIndex(0);
}

void MainWindow::pcInspectionTrigger()
{
    stackedWidget->setCurrentIndex(1);
}

void MainWindow::passwdManagementToolTrigger()
{
    stackedWidget->setCurrentIndex(2);
}

void MainWindow::pcOptimizationTrigger()
{
    stackedWidget->setCurrentIndex(3);
}

void MainWindow::reportTrigger()
{
    stackedWidget->setCurrentIndex(4);
}

MainWindow::~MainWindow()
{
    delete ui;
}
