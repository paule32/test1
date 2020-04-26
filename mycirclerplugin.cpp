#include "mycircler.h"
#include "mycirclerplugin.h"

#include <QtPlugin>

MyCirclerPlugin::MyCirclerPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void MyCirclerPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool MyCirclerPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *MyCirclerPlugin::createWidget(QWidget *parent)
{
    return new MyCircler(parent);
}

QString MyCirclerPlugin::name() const
{
    return QLatin1String("MyCircler");
}

QString MyCirclerPlugin::group() const
{
    return QLatin1String("TestGruppe");
}

QIcon MyCirclerPlugin::icon() const
{
    return QIcon();
}

QString MyCirclerPlugin::toolTip() const
{
    return QLatin1String("testung zweier");
}

QString MyCirclerPlugin::whatsThis() const
{
    return QLatin1String("bulpblap");
}

bool MyCirclerPlugin::isContainer() const
{
    return false;
}

QString MyCirclerPlugin::domXml() const
{
    return QLatin1String("<widget class=\"MyCircler\" name=\"myCircler\">\n</widget>\n");
}

QString MyCirclerPlugin::includeFile() const
{
    return QLatin1String("mycircler.h");
}

