#include "Filter.h"

FilterWidget::FilterWidget(QWidget *parent)
    : QWidget(parent)
{
    fromFilterback_button=new QPushButton("go back");

    QPalette pal = QPalette();

    // set blue background
    pal.setColor(QPalette::Window, Qt::blue);

    this->setAutoFillBackground(true);
    this->setPalette(pal);
}
