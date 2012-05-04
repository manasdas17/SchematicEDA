//#include <extensionsystem/pluginmanager.h>
#include <QtGui/QApplication>
#include "mainwindow.h"


static inline QStringList getPluginPaths()
{
    /*
    QStringList rc;
    // Figure out root:  Up one from 'bin'
    QDir rootDir = QApplication::applicationDirPath();
    rootDir.cdUp();
    const QString rootDirPath = rootDir.canonicalPath();
#if !defined(Q_OS_MAC)
    // 1) "plugins" (Win/Linux)
    QString pluginPath = rootDirPath;
    pluginPath += QLatin1Char('/');
    //pluginPath += QLatin1String(IDE_LIBRARY_BASENAME);
    pluginPath += QLatin1String("/qtcreator/plugins");
    rc.push_back(pluginPath);
#else
    // 2) "PlugIns" (OS X)
    QString pluginPath = rootDirPath;
    pluginPath += QLatin1String("/PlugIns");
    rc.push_back(pluginPath);
#endif
    // 3) <localappdata>/plugins/<ideversion>
    //    where <localappdata> is e.g.
    //    <drive>:\Users\<username>\AppData\Local\Nokia\qtcreator on Windows Vista and later
    //    $XDG_DATA_HOME or ~/.local/share/Nokia/qtcreator on Linux
    //    ~/Library/Application Support/Nokia/Qt Creator on Mac
    pluginPath = QDesktopServices::storageLocation(QDesktopServices::DataLocation);
    pluginPath += QLatin1String("/Nokia/");
#if !defined(Q_OS_MAC)
    pluginPath += QLatin1String("qtcreator");
#else
    pluginPath += QLatin1String("Qt Creator");
#endif
    pluginPath += QLatin1String("/plugins/");
    //pluginPath += QLatin1String(Core::Constants::IDE_VERSION_LONG);
    rc.push_back(pluginPath);
    return rc;
    */

}

int main(int argc, char *argv[])
{/*
    QString settingsPath;
    QStringList arguments = app.arguments();  // adapted arguments list is passed to plugin manager later
    QMutableStringListIterator it(arguments);
    while (it.hasNext()) {
        const QString &arg = it.next();
        if (arg == QLatin1String(SETTINGS_OPTION)) {
            it.remove();
            if (it.hasNext()) {
                settingsPath = QDir::fromNativeSeparators(it.next());
                it.remove();
            }
        }
    }
    if (!settingsPath.isEmpty())
        QSettings::setPath(QSettings::IniFormat, QSettings::UserScope, settingsPath);

    // Must be done before any QSettings class is created
    QSettings::setPath(QSettings::IniFormat, QSettings::SystemScope,
            QCoreApplication::applicationDirPath()+QLatin1String(SHARE_PATH));
    // plugin manager takes control of this settings object
    QSettings *settings = new QSettings(QSettings::IniFormat, QSettings::UserScope,
                                 QLatin1String("Nokia"), QLatin1String("QtCreator"));
    */
    QApplication app(argc, argv);
    app.setOrganizationName("Niktech");
    app.setApplicationName("SchematicEDA");
/*
    ExtensionSystem::PluginManager pluginManager;

    const QStringList pluginPaths = getPluginPaths();
    pluginManager.setPluginPaths(pluginPaths);
    pluginManager.loadPlugins();

    // shutdown plugin manager on the exit
    QObject::connect(&app, SIGNAL(aboutToQuit()), &pluginManager, SLOT(shutdown()));
*/
   MainWindow mainWin;
   mainWin.show();
    
   return app.exec();
}
