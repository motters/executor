// Include external deps
#include <QCoreApplication>

// Include startup class
#include "Bootstrap/Startup.h"

int main(int argc, char *argv[])
{
    // Start app
    QCoreApplication app(argc, argv);

    // Attach message handler
    //qInstallMessageHandler(fileMessageHandler);

    // Boot the applcation
    Bootstrap::Startup loader;

    // If successfull return event loop
    if (loader.success())
    {
       return app.exec();
    }

    // End app
    return -1;
}
