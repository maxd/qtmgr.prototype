#ifndef COMMANDLINEEDITOR_H
#define COMMANDLINEEDITOR_H

#include <QWidget>

namespace Ui {
    class CommandLineEditor;
}

class CommandLineEditor : public QWidget
{
    Q_OBJECT

public:
    explicit CommandLineEditor(QWidget *parent = 0);
    ~CommandLineEditor();

private:
    Ui::CommandLineEditor *ui;
};

#endif // COMMANDLINEEDITOR_H
