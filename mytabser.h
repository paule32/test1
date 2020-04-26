#ifndef MYTABSER_H
#define MYTABSER_H

#include <QWidget>
#include <QLabel>
#include <QDialog>
#include <QMouseEvent>

class TabserLabel: public QLabel
{
    Q_OBJECT

public:
    TabserLabel(QWidget * parent = nullptr);
protected:
    void mousePressEvent(QMouseEvent * evt);
};

class MyTabser : public QWidget
{
    Q_OBJECT

public:
    MyTabser(QWidget *parent = 0);

    QLabel * lbl = nullptr;

protected:
    void mousePressEvent(QMouseEvent * evt);
};

#endif
