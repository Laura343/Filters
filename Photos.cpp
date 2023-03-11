#include "Photos.h"
#include <QFileDialog>

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

    connect(button_array[4],&QToolButton::clicked,this,&PhotosWidget::addPhoto);
}

void PhotosWidget::addPhoto()
{
    QString filePath = QFileDialog::getOpenFileName(nullptr, "Open File", "", "JPEG files (*.jpg);;All files (*.*)");
    QToolButton* button = new QToolButton(this);
    button->setIcon(QIcon(filePath));
    button->setIconSize(QSize(200, 200));
    button->setAutoRaise(true);
    button->setStyleSheet("QToolButton { border: none; }");
    button_array.append(button);


    QToolButton* tmp=new QToolButton;
    tmp=button_array[button_array.size()-2];
    button_array[button_array.size()-2]=button_array[button_array.size()-1];
    button_array[button_array.size()-1]=tmp;

    lay->removeItem(grid_lay);
    if (grid_lay)
    {
        delete grid_lay;
    }

    grid_lay= new QGridLayout();
    for(int i=0;i<button_array.size();i++)
    {
        grid_lay->addWidget(button_array[i],i/3,i%3);
    }
    lay->addLayout(grid_lay);
    setLayout(grid_lay);

}


