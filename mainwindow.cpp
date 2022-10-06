#include <QVBoxLayout>

#include "mainwindow.h"
#include "metaltableview.h"
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

}

MainWindow::~MainWindow()
{
    delete ui;
}

