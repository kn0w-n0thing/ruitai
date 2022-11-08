#include <QVBoxLayout>

#include "mainwindow.h"
#include "metaltableview.h"
#include "adjustparamview.h""
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(geometry().width(), geometry().height());


    // metal table layout
    QVBoxLayout *metalTableTabLayout = new QVBoxLayout(ui->metal_table_tab);
    MetalTableView* leftMetalTable = new MetalTableView;
    leftMetalTable->setTableName("合金表A");
    MetalTableView* rightMetalTable = new MetalTableView;
    rightMetalTable->setTableName("合金表B");
    metalTableTabLayout->setDirection(QBoxLayout::LeftToRight);
    metalTableTabLayout->addWidget(leftMetalTable);
    metalTableTabLayout->addWidget(rightMetalTable);

    // adjust parameter layout
    QVBoxLayout *parameterTabLayout = new QVBoxLayout(ui->parameter_tab);
    AdjustParamView* leftParamterView = new AdjustParamView;
    leftParamterView->setTableName("A校正参数记录");
    AdjustParamView* rightParamterView = new AdjustParamView;
    rightMetalTable->setTableName("B校正参数记录");
    parameterTabLayout->setDirection(QBoxLayout::LeftToRight);
    parameterTabLayout->addWidget(leftParamterView);
    parameterTabLayout->addWidget(rightParamterView);
}

MainWindow::~MainWindow()
{
    delete ui;
}

