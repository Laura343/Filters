#include "Camera.h"

CameraWidget::CameraWidget(QWidget *parent)
    : QWidget(parent)
{
    goToPhotos_button = new QPushButton("Add a photo");
    goToFilter_button = new QPushButton("Click");

}

