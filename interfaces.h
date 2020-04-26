#ifndef INTERFACES_H
#define INTERFACES_H

#include <QtPlugin>

class QImage;
class QPainter;
class QWidget;
class QPainterPath;
class QPoint;
class QRect;
class QString;
class QStringList;

class BrushInterface
{
public:
    virtual ~BrushInterface() {}

    virtual QStringList brushes() const = 0;
    virtual QRect mousePress(const QString &brush, QPainter &painter,
                             const QPoint &pos) = 0;
    virtual QRect mouseMove(const QString &brush, QPainter &painter,
                            const QPoint &oldPos, const QPoint &newPos) = 0;
    virtual QRect mouseRelease(const QString &brush, QPainter &painter,
                               const QPoint &pos) = 0;
};

#define BrushInterface_iid "net.kallup.BrushInterface"

#endif // INTERFACES_H
