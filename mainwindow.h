#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "Camera.h"
#include "Photos.h"
#include "Filter.h"

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    CameraWidget *cameraWidget;
    PhotosWidget *photosWidget;
    FilterWidget *filterWidget;


};


#endif // MAINWINDOW_H



