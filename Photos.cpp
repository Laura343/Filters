#include "Photos.h"

PhotosWidget::PhotosWidget(QWidget *parent)
    : QWidget(parent)
{
    fromPhotosBack_button = new QPushButton("go to Camera");

    lay=new QVBoxLayout;
    lay->addWidget(fromPhotosBack_button);


    for(int i=0;i<path_array.size();i++)
    {
        QToolButton* button = new QToolButton(this);
        button->setIcon(QIcon(path_array[i]));
        button->setIconSize(QSize(200, 200));
        button->setAutoRaise(true);
        button->setStyleSheet("QToolButton { border: none; }");
        button_array.append(button);
    }

    grid_lay = new QGridLayout();
    for(int i=0;i<button_array.size();i++)
    {
        grid_lay->addWidget(button_array[i],i/3,i%3);
    }

    lay->addLayout(grid_lay);
    setLayout(lay);
}
