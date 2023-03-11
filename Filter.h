#ifndef FILTER_H
#define FILTER_H

#include <QWidget>
#include <QPushButton>

class FilterWidget: public QWidget
{
    Q_OBJECT
public:
    FilterWidget(QWidget *parent = nullptr);

private:
    QPushButton* fromFilterback_button;
};

#endif // FILTER_H
