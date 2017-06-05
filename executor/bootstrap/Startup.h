#pragma once

// Include externla deps
#include <QObject>

// Include applcation class
#include "App/Application.h"

namespace Bootstrap
{

    class Startup  :  public QObject
    {
        Q_OBJECT

        public:
            Startup();
            ~Startup();
            bool success() const { return this->m_isValid; }

        private:
             QObject* m_root;
             bool m_isValid;
             App::Application& m_application;
    };

}
