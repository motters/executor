#pragma once

// Include external deps
#include <QObject>
#include <QMap>
#include <QVariantMap>
#include <QString>

// Include setting managers


namespace App { namespace Settings
{
    class Container
    {

        public:
            Container(QObject *parent = 0);

            //App::Settings::General& general;

       private:
            void loadSettings();
            QString getDir();
    };
}}

