#include "mainwindow.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QStackedLayout>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    cameraWidget = new CameraWidget;
    photosWidget = new PhotosWidget;
    filterWidget = new FilterWidget;

    QStackedLayout *stackedLayout = new QStackedLayout;
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



