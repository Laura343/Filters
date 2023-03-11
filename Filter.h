#ifndef FILTER_H
#define FILTER_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QString>

class FilterWidget: public QWidget
{
    Q_OBJECT
public:
    FilterWidget(QWidget *parent = nullptr);

//private:
    QVBoxLayout* lay;
    QPushButton* fromFilterback_button;
    QLabel* image;
    void setImage(QString);
};

#endif // FILTER_H
