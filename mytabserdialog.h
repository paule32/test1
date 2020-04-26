#ifndef MYTABSERDIALOG_H
#define MYTABSERDIALOG_H


#include <QDialog>
#include <QIcon>

class QLabel;
class QPushButton;

class MyTabserDialog : public QDialog
{
    Q_OBJECT

public:
    MyTabserDialog(QWidget * parent = nullptr);

private:
    QPushButton * pusher;
};

#endif // MYTABSERDIALOG_H
