#ifndef ADJUSTPARAMVIEW_H
#define ADJUSTPARAMVIEW_H

#include <QWidget>

namespace Ui {
class AdjustParamView;
}

class AdjustParamView : public QWidget
{
    Q_OBJECT

public:
    explicit AdjustParamView(QWidget *parent = nullptr);
    ~AdjustParamView();
    void setTableName(const QString& title);

private:
    Ui::AdjustParamView *ui;
};

#endif // ADJUSTPARAMVIEW_H
