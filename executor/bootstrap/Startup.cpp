#include "Startup.h"

// Include externla deps
#include <QObject>

// Include applcation class
#include "App/Application.h"

namespace Bootstrap
{

    // Location for the main application settings file
    static auto SETTINGS_FILE = QStringLiteral("executor.json");

    Startup::Startup()
        : m_isValid(true),
          m_application(*new App::Application(this))
    {

    }

    Startup::~Startup()
    {

    }

}

