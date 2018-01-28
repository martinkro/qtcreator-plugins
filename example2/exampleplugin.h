#pragma once

#include "example_global.h"

#include <extensionsystem/iplugin.h>

namespace Example {
namespace Internal {

class ExamplePlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtCreatorPlugin" FILE "example2.json")

public:
    ExamplePlugin();
    ~ExamplePlugin();

    bool initialize(const QStringList &arguments, QString *errorString);
    void extensionsInitialized();
    ShutdownFlag aboutToShutdown();

private slots:
    void triggerAction();
};

} // namespace Internal
} // namespace Example
