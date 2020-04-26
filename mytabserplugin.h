#ifndef MYTABSERPLUGIN_H
#define MYTABSERPLUGIN_H

#include <QDesignerCustomWidgetInterface>
#include <QMouseEvent>
#include "mytabser.h"

class MyTabserPlugin :
    public QObject,
    public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    MyTabserPlugin(QObject *parent = 0);

    bool isContainer() const;
    bool isInitialized() const;
    QIcon icon() const;
    QString domXml() const;
    QString group() const;
    QString includeFile() const;
    QString name() const;
    QString toolTip() const;
    QString whatsThis() const;
    QWidget *createWidget(QWidget *parent);
    void initialize(QDesignerFormEditorInterface *core);

private:
    bool m_initialized;

    MyTabser * dialogTabser = nullptr;
};

#endif
