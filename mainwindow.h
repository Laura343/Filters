#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

class QStackedLayout;
class QMouseEvent;
class CameraWidget;
class PhotosWidget;
class FilterWidget;

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void mousePressEvent (QMouseEvent *event);

private:
    QStackedLayout *stackedLayout;
    CameraWidget *cameraWidget;
    PhotosWidget *photosWidget;
    FilterWidget *filterWidget;
};


#endif // MAINWINDOW_H



