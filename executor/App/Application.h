#pragma once

// Include externla deps
#include <QObject>

namespace App
{
    class Application :  public QObject
    {
        Q_OBJECT

        public:
            Application(QObject *parent);
            ~Application();

    };
}

