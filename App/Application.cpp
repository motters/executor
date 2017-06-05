#include "Application.h"

// Include externla deps
#include <QObject>

// Include the setting contain
#include "Settings/Container.h"

namespace App
{

    /**
     * Class constructor
     *
     * @brief Application::Application
     * @param parent
     */
    Application::Application(QObject* parent)
        : QObject(parent),

          // Create instance of the settings container
          settings_container(*new Settings::Container)
    {

    }


    /**
     * Class destructor performs:
     *
     * @brief Application::~Application
     */
    Application::~Application()
    {

    }


}
