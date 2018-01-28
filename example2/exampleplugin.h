#pragma once

#include "example_global.h"

#include <extensionsystem/iplugin.h>

namespace Example2 {
namespace Internal {

class WelcomeMode;
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
    void onActionAbout();

private:
	WelcomeMode *m_welcomeMode = nullptr;
};

} // namespace Internal
} // namespace Example
