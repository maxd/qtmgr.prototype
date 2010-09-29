#ifndef FILESPANEL_H
#define FILESPANEL_H

#include <QWidget>

namespace Ui {
    class FilesPanel;
}

class FilesPanel : public QWidget
{
    Q_OBJECT

public:
    explicit FilesPanel(QWidget *parent = 0);
    ~FilesPanel();

private:
    Ui::FilesPanel *ui;
};

#endif // FILESPANEL_H
