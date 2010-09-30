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
    FilesPanel *leftFilesPanel = new FilesPanel();
    ui->leftFilesPanelPlaceholder->addWidget(leftFilesPanel);

    FilesPanel *rightFilesPanel = new FilesPanel();
    ui->rightFilesPanelPlaceholder->addWidget(rightFilesPanel);
}
