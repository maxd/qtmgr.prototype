#include <QtGui>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filespanel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setupFilesPanels();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupFilesPanels()
{
//    QSplitter *filesPanelsSplitter = new QSplitter(this);
//    FilesPanel *leftFilesPanel = new FilesPanel();
//    FilesPanel *rightFilesPanel = new FilesPanel();
//    filesPanelsSplitter->addWidget(leftFilesPanel);
//    filesPanelsSplitter->addWidget(rightFilesPanel);
}
