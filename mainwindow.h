#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "state.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    state *editorStatus;
private slots:
    void aboutAction();
    void saveAction();
    void newAction();
    void openAction();
    void saveasAction();
    void closeAction();
    void fontAction();
    void wordwrapAction(bool);
    void updateCaption();
    void textChangedStatus();
protected:
    void resizeEvent(QResizeEvent * event);
    void closeEvent(QCloseEvent * event);
};

#endif // MAINWINDOW_H
