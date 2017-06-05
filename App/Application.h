#pragma once

// Include externla deps
#include <QObject>

// Include the setting contain
#include "Settings/Container.h"

namespace App
{
    class Application :  public QObject
    {
        Q_OBJECT

        public:
            Application(QObject *parent);
            ~Application();

            // Settings container
            Settings::Container& settings_container;

    };
}

