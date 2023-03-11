#include "mainwindow.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    resize(500,600);

    cameraWidget = new CameraWidget;
    photosWidget = new PhotosWidget;
    filterWidget = new FilterWidget;

    stackedLayout = new QStackedLayout;
    stackedLayout->addWidget(cameraWidget); //0 index
    stackedLayout->addWidget(photosWidget);  //1 index
    stackedLayout->addWidget(filterWidget);  //2 index

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(stackedLayout);
    setLayout(mainLayout);

    connect(cameraWidget->goToPhotos_button,&QPushButton::clicked,this,[this](){stackedLayout->setCurrentIndex(1);});
    connect(cameraWidget->goToFilter_button,&QPushButton::clicked,this,[this](){
        filterWidget->setImage("C:/Users/hovha/ACA/ConnectionsBetweenWidgets/image0.jpg");
        stackedLayout->setCurrentIndex(2);});
    connect(filterWidget->fromFilterback_button,&QPushButton::clicked,this,[this](){stackedLayout->setCurrentIndex(0);});
    connect(photosWidget->fromPhotosBack_button,&QPushButton::clicked,this,[this](){stackedLayout->setCurrentIndex(0);});

    connect(photosWidget->button_array[0],&QToolButton::clicked,this,[this](){
        filterWidget->setImage(photosWidget->path_array[0]);
        stackedLayout->setCurrentIndex(2);});
    connect(photosWidget->button_array[1],&QToolButton::clicked,this,[this](){
        filterWidget->setImage(photosWidget->path_array[1]);
        stackedLayout->setCurrentIndex(2);});
    connect(photosWidget->button_array[2],&QToolButton::clicked,this,[this](){
        filterWidget->setImage(photosWidget->path_array[2]);
        stackedLayout->setCurrentIndex(2);});
    connect(photosWidget->button_array[3],&QToolButton::clicked,this,[this](){
        filterWidget->setImage(photosWidget->path_array[3]);
        stackedLayout->setCurrentIndex(2);});

}


MainWindow::~MainWindow()
{

}





