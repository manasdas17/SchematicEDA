/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue 1. May 19:24:19 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *newBarAct;
    QAction *openBarAct;
    QAction *saveBarAct;
    QAction *newAct;
    QAction *openAct;
    QAction *saveAct;
    QAction *saveAsAct;
    QAction *closeAct;
    QAction *closeAllAct;
    QAction *exitAct;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPast;
    QAction *actionDelete;
    QAction *actionSelect_All;
    QAction *actionCompletition;
    QAction *actionCompile;
    QAction *actionCustomize;
    QAction *aboutAct;
    QAction *compileAct;
    QAction *actionTransient;
    QAction *actionStatic;
    QAction *actionFrequency;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menuEdit;
    QMenu *menuOptions;
    QMenu *menuView;
    QMenu *menuTools;
    QMenu *menuHelp;
    QMenu *menuAnalyse;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(996, 577);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMouseTracking(false);
        MainWindow->setLocale(QLocale(QLocale::Russian, QLocale::RussianFederation));
        MainWindow->setAnimated(false);
        newBarAct = new QAction(MainWindow);
        newBarAct->setObjectName(QString::fromUtf8("newBarAct"));
        openBarAct = new QAction(MainWindow);
        openBarAct->setObjectName(QString::fromUtf8("openBarAct"));
        saveBarAct = new QAction(MainWindow);
        saveBarAct->setObjectName(QString::fromUtf8("saveBarAct"));
        newAct = new QAction(MainWindow);
        newAct->setObjectName(QString::fromUtf8("newAct"));
        openAct = new QAction(MainWindow);
        openAct->setObjectName(QString::fromUtf8("openAct"));
        saveAct = new QAction(MainWindow);
        saveAct->setObjectName(QString::fromUtf8("saveAct"));
        saveAsAct = new QAction(MainWindow);
        saveAsAct->setObjectName(QString::fromUtf8("saveAsAct"));
        closeAct = new QAction(MainWindow);
        closeAct->setObjectName(QString::fromUtf8("closeAct"));
        closeAllAct = new QAction(MainWindow);
        closeAllAct->setObjectName(QString::fromUtf8("closeAllAct"));
        exitAct = new QAction(MainWindow);
        exitAct->setObjectName(QString::fromUtf8("exitAct"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPast = new QAction(MainWindow);
        actionPast->setObjectName(QString::fromUtf8("actionPast"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QString::fromUtf8("actionSelect_All"));
        actionCompletition = new QAction(MainWindow);
        actionCompletition->setObjectName(QString::fromUtf8("actionCompletition"));
        actionCompile = new QAction(MainWindow);
        actionCompile->setObjectName(QString::fromUtf8("actionCompile"));
        actionCustomize = new QAction(MainWindow);
        actionCustomize->setObjectName(QString::fromUtf8("actionCustomize"));
        aboutAct = new QAction(MainWindow);
        aboutAct->setObjectName(QString::fromUtf8("aboutAct"));
        compileAct = new QAction(MainWindow);
        compileAct->setObjectName(QString::fromUtf8("compileAct"));
        actionTransient = new QAction(MainWindow);
        actionTransient->setObjectName(QString::fromUtf8("actionTransient"));
        actionStatic = new QAction(MainWindow);
        actionStatic->setObjectName(QString::fromUtf8("actionStatic"));
        actionFrequency = new QAction(MainWindow);
        actionFrequency->setObjectName(QString::fromUtf8("actionFrequency"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout_2->addWidget(plainTextEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 996, 21));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(menubar->sizePolicy().hasHeightForWidth());
        menubar->setSizePolicy(sizePolicy2);
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuHelp->setEnabled(true);
        QFont font;
        font.setFamily(QString::fromUtf8("Tahoma"));
        menuHelp->setFont(font);
        menuAnalyse = new QMenu(menubar);
        menuAnalyse->setObjectName(QString::fromUtf8("menuAnalyse"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        sizePolicy2.setHeightForWidth(statusbar->sizePolicy().hasHeightForWidth());
        statusbar->setSizePolicy(sizePolicy2);
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        sizePolicy2.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy2);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuAnalyse->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menu->addSeparator();
        menu->addAction(newAct);
        menu->addAction(openAct);
        menu->addSeparator();
        menu->addAction(saveAct);
        menu->addAction(saveAsAct);
        menu->addAction(closeAct);
        menu->addAction(closeAllAct);
        menu->addSeparator();
        menu->addAction(exitAct);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPast);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_All);
        menuTools->addAction(actionCompletition);
        menuTools->addAction(actionCompile);
        menuTools->addAction(actionCustomize);
        menuHelp->addAction(aboutAct);
        menuAnalyse->addAction(actionTransient);
        menuAnalyse->addAction(actionStatic);
        menuAnalyse->addAction(actionFrequency);
        toolBar->addAction(newBarAct);
        toolBar->addAction(openBarAct);
        toolBar->addAction(saveBarAct);
        toolBar->addAction(compileAct);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SchematicEDA", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        MainWindow->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        newBarAct->setText(QApplication::translate("MainWindow", "New", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        newBarAct->setToolTip(QApplication::translate("MainWindow", "New", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        openBarAct->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        saveBarAct->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        newAct->setText(QApplication::translate("MainWindow", "New", 0, QApplication::UnicodeUTF8));
        newAct->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        openAct->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        openAct->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        saveAct->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        saveAct->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        saveAsAct->setText(QApplication::translate("MainWindow", "Save As...", 0, QApplication::UnicodeUTF8));
        saveAsAct->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+S", 0, QApplication::UnicodeUTF8));
        closeAct->setText(QApplication::translate("MainWindow", "Close", 0, QApplication::UnicodeUTF8));
        closeAct->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", 0, QApplication::UnicodeUTF8));
        closeAllAct->setText(QApplication::translate("MainWindow", "Close All", 0, QApplication::UnicodeUTF8));
        exitAct->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0, QApplication::UnicodeUTF8));
        actionPast->setText(QApplication::translate("MainWindow", "Past", 0, QApplication::UnicodeUTF8));
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        actionSelect_All->setText(QApplication::translate("MainWindow", "Select All", 0, QApplication::UnicodeUTF8));
        actionCompletition->setText(QApplication::translate("MainWindow", "Complition", 0, QApplication::UnicodeUTF8));
        actionCompile->setText(QApplication::translate("MainWindow", "Compile", 0, QApplication::UnicodeUTF8));
        actionCustomize->setText(QApplication::translate("MainWindow", "Customize", 0, QApplication::UnicodeUTF8));
        aboutAct->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        compileAct->setText(QApplication::translate("MainWindow", "Compile", 0, QApplication::UnicodeUTF8));
        actionTransient->setText(QApplication::translate("MainWindow", "Transient", 0, QApplication::UnicodeUTF8));
        actionStatic->setText(QApplication::translate("MainWindow", "Static", 0, QApplication::UnicodeUTF8));
        actionFrequency->setText(QApplication::translate("MainWindow", "Frequency", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuAnalyse->setTitle(QApplication::translate("MainWindow", "Analyse", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
