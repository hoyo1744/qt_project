#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolBar>
#include <QStackedWidget>
#include <QGridLayout>
#include "homewidget.h"
#include "pcinspectionwidget.h"
#include "pcoptimizationwidget.h"
#include "passwdmanagementtoolwidget.h"
#include "reportwidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

//method
public:
    void Init();


//value
public:
    QToolBar* toolbar;
    QStackedWidget* stackedWidget;
    QAction* act[5];
    homeWidget* hWidget;
    pcInspectionWidget* ispWidget;
    pcOptimizationWidget* pcoptWidget;
    passwdManagementToolWidget* passmntWidget;
    reportWidget* rptWidget;
    QGridLayout* grid;

//slots
public slots:
    void homeTrigger();
    void pcInspectionTrigger();
    void passwdManagementToolTrigger();
    void pcOptimizationTrigger();
    void reportTrigger();

    //void homeShow();
    //void pcInspectionShow();
    //void passwdManagementToolShow();
    //void pcOptimizationShow();
    //void reportShow();



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
