#ifndef PHOTOS_H
#define PHOTOS_H

#include <QWidget>
#include <QPushButton>

class PhotosWidget : public QWidget
{
    Q_OBJECT

public:
    PhotosWidget(QWidget *parent = nullptr);

private:
    QPushButton *fromPhotosBack_button;
};



#endif // PHOTOS_H


