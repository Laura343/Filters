#include "mainwindow.h"

#include <QMouseEvent>
#include <QPushButton>
#include <QStackedLayout>
#include <QStackedLayout>
#include <QVBoxLayout>

#include "Camera.h"
#include "Filter.h"
#include "Photos.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    cameraWidget = new CameraWidget;
    photosWidget = new PhotosWidget;
    filterWidget = new FilterWidget;

    stackedLayout = new QStackedLayout;
    stackedLayout->addWidget(cameraWidget);
    stackedLayout->addWidget(photosWidget);
    stackedLayout->addWidget(filterWidget);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(stackedLayout);
    setLayout(mainLayout);
}

MainWindow::~MainWindow()
{

}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    const auto randomViewIndex = event->timestamp() % 3;
    stackedLayout->setCurrentIndex(randomViewIndex);
}



