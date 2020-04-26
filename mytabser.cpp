#include "mytabser.h"
#include "mytabserdialog.h"

#include <QDebug>
#include <QWidget>
#include <QMessageBox>

TabserLabel::TabserLabel(QWidget *parent) :
    QLabel(parent)
{
    setMouseTracking(true);
    setAttribute(Qt::WA_Hover);
    setAttribute(Qt::WA_MouseTracking);
}

void TabserLabel::mousePressEvent(QMouseEvent *evt)
{
    Q_UNUSED(evt)
    QMessageBox::information(0,"titel2","from tabserlabel");
}

MyTabser::MyTabser(QWidget *parent) :
    QWidget(parent)
{
    setMouseTracking(true);
    setAttribute(Qt::WA_Hover);
    setAttribute(Qt::WA_MouseTracking);

    lbl = new QLabel("text",this);
    lbl->setStyleSheet("background-color:yellow;");
    lbl->move(5,5);
    lbl->resize(84,20);
    lbl->show();
}

void MyTabser::mousePressEvent(QMouseEvent *evt)
{
    Q_UNUSED(evt)
    QMessageBox::information(0,"titel","beeeasddsfdfs");
}
