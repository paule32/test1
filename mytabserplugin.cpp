#include "mytabser.h"
#include "mytabserplugin.h"

#include <QtPlugin>
#include <QAction>
#include <QMenu>
#include <QMessageBox>

MyTabserPlugin::MyTabserPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void MyTabserPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    m_initialized = true;
}

bool MyTabserPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *MyTabserPlugin::createWidget(QWidget *parent)
{
    return new MyTabser(parent);
}

QString MyTabserPlugin::name() const
{
    return QLatin1String("MyTabser");
}

QString MyTabserPlugin::group() const
{
    return QLatin1String("TestGruppe");
}

QIcon MyTabserPlugin::icon() const
{
    return QIcon();
}

QString MyTabserPlugin::toolTip() const
{
    return QLatin1String("test1");
}

QString MyTabserPlugin::whatsThis() const
{
    return QLatin1String("eine testung");
}

bool MyTabserPlugin::isContainer() const
{
    return false;
}

QString MyTabserPlugin::domXml() const
{
    return QLatin1String("<widget class=\"MyTabser\" name=\"myTabser\">\n</widget>\n");
}

QString MyTabserPlugin::includeFile() const
{
    return QLatin1String("mytabser.h");
}
