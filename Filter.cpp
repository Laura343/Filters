#include "Filter.h"
#include <QPixmap>

FilterWidget::FilterWidget(QWidget *parent)
    : QWidget(parent)
{
    fromFilterback_button=new QPushButton("go back");
    image=new QLabel;

    lay=new QVBoxLayout;
    lay->addWidget(fromFilterback_button);
    lay->addWidget(image);
    setLayout(lay);
}

void FilterWidget::setImage(QString path)
{
    QPixmap pixmap(path);
    image->setPixmap(pixmap);
    if(lay)
    {
        delete lay;
    }
    lay=new QVBoxLayout;
    lay->addWidget(fromFilterback_button);
    lay->addWidget(image);
    setLayout(lay);
}
