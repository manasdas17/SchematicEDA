#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    readSettings();
    connect(ui->newAct, SIGNAL(triggered()), this, SLOT(newFile()));
    connect(ui->newBarAct, SIGNAL(triggered()), this, SLOT(newFile()));
    connect(ui->openAct, SIGNAL(triggered()), this, SLOT(open()));
    connect(ui->saveAct, SIGNAL(triggered()), this, SLOT(save()));
    connect(ui->saveBarAct, SIGNAL(triggered()), this, SLOT(save()));
    connect(ui->saveAsAct, SIGNAL(triggered()), this, SLOT(saveAs()));
    connect(ui->aboutAct, SIGNAL(triggered()), this, SLOT(about()));
    connect(ui->exitAct, SIGNAL(triggered()), this, SLOT(close()));

    connect(ui->plainTextEdit->document(), SIGNAL(contentsChanged()),
                 this, SLOT(documentWasModified()));
    setCurrentFile("");
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newFile()
{
    if (maybeSave())
    {
        ui->plainTextEdit->clear();
        setCurrentFile("");
    }
}

void MainWindow::open()
{
    if (maybeSave())
    {
        QString fileName = QFileDialog::getOpenFileName(this);
        if(!fileName.isEmpty())
            loadFile(fileName);
    }
}

bool MainWindow::save()
{
    if (curFile.isEmpty())
    {
        return saveAs();
    }
    else
    {
        return saveFile(curFile);
    }
}

bool MainWindow::saveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this);
    if (fileName.isEmpty())
        return false;
    return saveFile(fileName);
}

void MainWindow::about()
{
    QMessageBox::about(this, tr("About SchematicEDA"),
                       tr("<b>SchematicEDA</b> is a software tool used\n"
                          "for schematic design and analysis of printed circuit boards\n"
                          "and integrated cicuits."));

}

void MainWindow::loadFile(const QString &fileName)
{
    QFile file(fileName);
    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, tr("SchematicEDA"),
                             tr("Cannot read file %1:\n%2.")
                             .arg(fileName)
                             .arg(file.errorString()));
        return;
    }
    QTextStream in(&file);
#ifndef QT_NO_CURSOR
    QApplication::setOverrideCursor(Qt::WaitCursor);
#endif
    ui->plainTextEdit->setPlainText(in.readAll());
#ifndef QT_NO_CURSOR
    QApplication::restoreOverrideCursor();
#endif
    setCurrentFile(fileName);
    statusBar()->showMessage(tr("File loaded"), 2000);
}

bool MainWindow::saveFile(const QString &fileName)
{
    QFile file(fileName);
         if (!file.open(QFile::WriteOnly | QFile::Text)) {
             QMessageBox::warning(this, tr("SchematicEDA"),
                                  tr("Cannot write file %1:\n%2.")
                                  .arg(fileName)
                                  .arg(file.errorString()));
             return false;
         }

         QTextStream out(&file);
     #ifndef QT_NO_CURSOR
         QApplication::setOverrideCursor(Qt::WaitCursor);
     #endif
         out << ui->plainTextEdit->toPlainText();
     #ifndef QT_NO_CURSOR
         QApplication::restoreOverrideCursor();
     #endif
         setCurrentFile(fileName);
         statusBar()->showMessage(tr("File saved"), 2000);
         return true;

}

void MainWindow::setCurrentFile(const QString &fileName)
{
    curFile = fileName;
    ui->plainTextEdit->document()->setModified(false);
    setWindowModified(false);

    QString shownName = curFile;
    if (curFile.isEmpty())
        shownName = "untitled.txt";
    setWindowFilePath(shownName);
}

QString MainWindow::strippedName(const QString &fullFileName)
 {
     return QFileInfo(fullFileName).fileName();
 }

void MainWindow::documentWasModified()
{
    setWindowModified(ui->plainTextEdit->document()->isModified());
}

void MainWindow::readSettings()
{
    QSettings settings("Niktech", "SchematicEDA");
    QPoint pos = settings.value("pos", QPoint(400, 200)).toPoint();
    QSize size = settings.value("size", QSize(1000, 800)).toSize();
    resize(size);
    move(pos);
}

void MainWindow::writeSettings()
 {
     QSettings settings("Niktech", "SchematicEDA Example");
     settings.setValue("pos", pos());
     settings.setValue("size", size());
 }

bool MainWindow::maybeSave()
 {
     if (ui->plainTextEdit->document()->isModified())
     {
         QMessageBox::StandardButton ret;
         ret = QMessageBox::warning(this, tr("SchematicEDA"),
                      tr("The document has been modified.\n"
                         "Do you want to save your changes?"),
                      QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
         if (ret == QMessageBox::Save)
             return save();
         else if (ret == QMessageBox::Cancel)
             return false;
     }
     return true;
 }

void MainWindow::closeEvent(QCloseEvent *event)
{
    if (maybeSave())
    {
        writeSettings();
        event->accept();
    }
    else
    {
        event->ignore();
    }
}
