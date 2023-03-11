#include "Camera.h"
#include <QVBoxLayout>

CameraWidget::CameraWidget(QWidget *parent)
    : QWidget(parent)
{
    goToPhotos_button = new QPushButton("Add a photo");
    goToFilter_button = new QPushButton("Click");

    QVBoxLayout* lay=new QVBoxLayout;
    lay->addWidget(goToFilter_button);
    lay->addWidget(goToPhotos_button);
    setLayout(lay);

}

