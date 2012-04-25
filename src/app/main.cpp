#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setOrganizationName("Niktech");
    app.setApplicationName("SchematicEDA");

    MainWindow mainWin;
    mainWin.show();
    
    return app.exec();
}
