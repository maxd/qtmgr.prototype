#include "commandlineeditor.h"
#include "ui_commandlineeditor.h"

CommandLineEditor::CommandLineEditor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CommandLineEditor)
{
    ui->setupUi(this);
}

CommandLineEditor::~CommandLineEditor()
{
    delete ui;
}
