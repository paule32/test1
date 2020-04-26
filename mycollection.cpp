#include "mytabserplugin.h"
#include "mycirclerplugin.h"
#include "mycollection.h"

MyCollection::MyCollection(QObject *parent)
    : QObject(parent)
{
    m_widgets.append(new MyTabserPlugin(this));
    m_widgets.append(new MyCirclerPlugin(this));

}

QList<QDesignerCustomWidgetInterface*> MyCollection::customWidgets() const
{
    return m_widgets;
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(mycollectionplugin, MyCollection)
#endif // QT_VERSION < 0x050000
