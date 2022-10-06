#ifndef METALTABLEVIEW_H
#define METALTABLEVIEW_H

#include <QWidget>

namespace Ui {
class MetalTableView;
}

class MetalTableView : public QWidget
{
    Q_OBJECT

public:
    explicit MetalTableView(QWidget *parent = nullptr);
    ~MetalTableView();
    void setTableName(const QString& title);

private:
    Ui::MetalTableView *ui;
};

#endif // METALTABLEVIEW_H
