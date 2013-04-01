#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui/QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //resize the edit
    ui->textEdit->setGeometry(0,0,this->width(),this->height());
    //conect those signal
    connect(ui->action_About,SIGNAL(triggered()),this,SLOT(aboutAction()));
    connect(ui->action_Save,SIGNAL(triggered()),this,SLOT(saveAction()));
    this->setWindowTitle(this->windowTitle()+" - "+ui->textEdit->documentTitle());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent * event)
{
    ui->textEdit->setGeometry(0,0,this->width(),this->height());
}

void MainWindow::aboutAction()
{
    QMessageBox::information(NULL,tr("About"),tr("<h2>QNotepad</h2><br /><h3>Author:wengpingbo@gmail.com</h3><h3>Version:1.0</h3>"));
}

void MainWindow::saveAction()
{
    QMessageBox::information(this,tr("test"),ui->textEdit->document()->toPlainText());
}
