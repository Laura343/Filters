#ifndef PHOTOS_H
#define PHOTOS_H

#include <QWidget>
#include <QPushButton>
#include <QToolButton>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QVector>
#include <QString>

class PhotosWidget : public QWidget
{
    Q_OBJECT

public:
    PhotosWidget(QWidget *parent = nullptr);

//private:
    QPushButton *fromPhotosBack_button;

    QVBoxLayout* lay;
    QGridLayout *grid_lay;
    QVector<QToolButton*> button_array;
    QVector<QString> path_array={"C:/Users/hovha/ACA/ConnectionsBetweenWidgets/image1.jpg",
                                        "C:/Users/hovha/ACA/ConnectionsBetweenWidgets/image2.jpg",
                                        "C:/Users/hovha/ACA/ConnectionsBetweenWidgets/image3.jpg",
                                        "C:/Users/hovha/ACA/ConnectionsBetweenWidgets/image4.jpg",
                                        "C:/Users/hovha/ACA/ConnectionsBetweenWidgets/plus.jpg"};
    void addPhoto();
};



#endif // PHOTOS_H


