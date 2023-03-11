#ifndef CAMERA_H
#define CAMERA_H

#include <QWidget>
#include <QPushButton>

class CameraWidget : public QWidget
{
    Q_OBJECT

public:
    CameraWidget(QWidget *parent = nullptr);

//private:
    QPushButton *goToPhotos_button;
    QPushButton *goToFilter_button;
};



#endif // CAMERA_H

