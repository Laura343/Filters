#include "Photos.h"

PhotosWidget::PhotosWidget(QWidget *parent)
    : QWidget(parent)
{
    fromPhotosBack_button = new QPushButton("go to Camera");

    QPalette pal = QPalette();

    // set red background
    pal.setColor(QPalette::Window, Qt::red);

    this->setAutoFillBackground(true);
    this->setPalette(pal);
}

