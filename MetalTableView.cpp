#include <QStandardItemModel>

#include "MetalTableView.h"
#include "ui_metaltableview.h"

MetalTableView::MetalTableView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MetalTableView)
{
    ui->setupUi(this);
    // table name rendering
    QFont font = ui->table_name_label->font();
    font.setPointSize(24);
    ui->table_name_label->setFont(font);

    // table rendering
    const QStringList columnNames = {"合金号", "样板1", "补偿值", "样板2", "补偿值"};
    QStandardItemModel* model = new QStandardItemModel();
    model->setHorizontalHeaderLabels(columnNames);
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setVisible(true);
    ui->tableView->setShowGrid(true);
    ui->tableView->setVisible(true);

    // test codes
    QStandardItem* item1 = new QStandardItem("text1");
    QStandardItem* item2 = new QStandardItem("text2");
    QStandardItem* item3 = new QStandardItem("text3");
    QStandardItem* item4 = new QStandardItem("text4");
    QStandardItem* item5 = new QStandardItem("text5");

    model->appendRow(QList<QStandardItem*>() << item1 << item2 << item3 << item4 << item5);
    ui->tableView->show();
}

MetalTableView::~MetalTableView()
{
    delete ui;
}

void MetalTableView::setTableName(const QString& title) {
    ui->table_name_label->setText(title);
}
