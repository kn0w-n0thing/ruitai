#include <QStandardItemModel>

#include "adjustparamview.h"
#include "ui_adjustparamview.h"

AdjustParamView::AdjustParamView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdjustParamView)
{
    ui->setupUi(this);

    // table name rendering
    QFont font = ui->table_name_label->font();
    font.setPointSize(24);
    ui->table_name_label->setFont(font);

    // table rendering
    const QStringList columnNames = {"日期", "时间", "AICS", "AICZ", "flag", "射线修正值"};
    QStandardItemModel* model = new QStandardItemModel();
    model->setHorizontalHeaderLabels(columnNames);
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setVisible(true);
    ui->tableView->setShowGrid(true);
    ui->tableView->setVisible(true);
}

AdjustParamView::~AdjustParamView()
{
    delete ui;
}

void AdjustParamView::setTableName(const QString& title) {
    ui->table_name_label->setText(title);
}
