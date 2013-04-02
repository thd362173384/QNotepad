#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui/QMessageBox>
#include <QtGui/QFileDialog>
#include <QtGui/QFontDialog>
#include <QtGui/QCloseEvent>
#include <fstream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //resize the edit
    ui->textEdit->setGeometry(0,0,this->width(),this->height()-45);
    editorStatus=new state();
    //conect those signal
    connect(ui->action_About,SIGNAL(triggered()),this,SLOT(aboutAction()));
    connect(ui->action_Save,SIGNAL(triggered()),this,SLOT(saveAction()));
    connect(editorStatus,SIGNAL(statusChanged()),this,SLOT(updateCaption()));
    connect(ui->textEdit,SIGNAL(textChanged()),this,SLOT(textChangedStatus()));
    connect(ui->action_Exit,SIGNAL(triggered()),this,SLOT(closeAction()));
    connect(ui->action_New,SIGNAL(triggered()),this,SLOT(newAction()));
    connect(ui->action_Open,SIGNAL(triggered()),this,SLOT(openAction()));
    connect(ui->action_Save_As,SIGNAL(triggered()),this,SLOT(saveasAction()));
    connect(ui->action_Font,SIGNAL(triggered()),this,SLOT(fontAction()));
    connect(ui->action_WordWrap,SIGNAL(triggered(bool)),this,SLOT(wordwrapAction(bool)));
    connect(ui->action_Undo,SIGNAL(triggered()),ui->textEdit,SLOT(undo()));
    connect(ui->action_Copy,SIGNAL(triggered()),ui->textEdit,SLOT(copy()));
    connect(ui->action_Cut,SIGNAL(triggered()),ui->textEdit,SLOT(cut()));
    connect(ui->action_Paste,SIGNAL(triggered()),ui->textEdit,SLOT(paste()));
    connect(ui->action_Repeat,SIGNAL(triggered()),ui->textEdit,SLOT(redo()));
    //connect(ui->action_Delete,SIGNAL(triggered()),ui->textEdit,SLOT(clear()));
    //connect(this,SIGNAL(destroyed()),this,SLOT(closeAction()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent * event)
{
    ui->textEdit->setGeometry(0,0,this->width(),this->height()-45);
    event->accept();
}

void MainWindow::aboutAction()
{
    QMessageBox::information(NULL,tr("About"),tr("<h2>QNotepad</h2><br /><h3>Author:wengpingbo@gmail.com</h3><h3>Version:1.0</h3>"));
}

void MainWindow::saveAction()
{
    if(editorStatus->getfilePath()==""){
        QString path=QFileDialog::getSaveFileName(this,tr("Save File"),".",tr("ALL File(*)"));
        if(path.length()!=0){
            editorStatus->setfilePath(path);
            editorStatus->setfileName(path.section("/",-1));
        }
        else return;
    }
    std::ofstream ofile(editorStatus->getfilePath().toStdString().c_str());
    if(!ofile){
        QMessageBox::about(this,tr("ERROR"),tr("Save file failed!\nPlease make sure you have the permission!"));
        editorStatus->setfilePath("");
    }
    else{
        ofile<<ui->textEdit->document()->toPlainText().toStdString();
        ofile.close();
        editorStatus->setstatus(state::SAVED);
    }
}

void MainWindow::updateCaption()
{
    QString title="";
    if(editorStatus->getfileName()!="") title.append(" - "+editorStatus->getfileName());
    else title.append(" - Untitled");
    if(editorStatus->getstatus()==state::MODIFIED || editorStatus->getstatus()==state::NEW)
        title.append("*");
    this->setWindowTitle(this->windowTitle().section(" - ",0,0)+title);
}

void MainWindow::textChangedStatus()
{
    editorStatus->setstatus(state::MODIFIED);
}

void MainWindow::newAction()
{
    ui->textEdit->setDocument(new QTextDocument(this));
    editorStatus->setstatus(state::NEW);
    editorStatus->setfileName("");
    editorStatus->setfilePath("");
}

void MainWindow::openAction()
{
    char buf[500]; //buffer
    QString temp;
    QString path=QFileDialog::getOpenFileName(this,tr("Open File"),".",tr("ALL File(*)"));
    if(path.length()!=0)
    {
        std::ifstream ifile(path.toStdString().c_str());
        if(!ifile)
            QMessageBox::about(this,tr("ERROR"),tr("Read file failed!\nPlease make sure you have the permission!"));
        else
        {
            while(!ifile.eof())
            {
                ifile.getline(buf,500);
                temp.append(buf);
                temp.append("\n");
            }
            ifile.close();
            ui->textEdit->setDocument(new QTextDocument(temp,this));
            editorStatus->setfilePath(path);
            editorStatus->setfileName(path.section("/",-1));
            editorStatus->setstatus(state::SAVED);
        }
    }
}

void MainWindow::saveasAction()
{
    QString path=QFileDialog::getSaveFileName(this,tr("Sava As"),".",tr("ALL Files(*)"));
    if(path.length()!=0)
    {
        std::ofstream ofile(path.toStdString().c_str());
        if(!ofile)
            QMessageBox::about(this,tr("ERROR"),tr("Open file failed!\nPlease make sure you have the permission!"));
        else
        {
            ofile<<ui->textEdit->document()->toPlainText().toStdString();
            ofile.close();
            editorStatus->setfilePath(path);
            editorStatus->setfileName(path.section("/",-1));
            editorStatus->setstatus(state::SAVED);
        }
    }
}

void MainWindow::closeEvent(QCloseEvent * event)
{
    if(editorStatus->getstatus()==state::MODIFIED)
    {
         QMessageBox msgBox;
         msgBox.setText(tr("The document has been modified."));
         msgBox.setInformativeText(tr("Do you want to save your changes?"));
         msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
         msgBox.setDefaultButton(QMessageBox::Save);
         msgBox.setWindowTitle(tr("Critical"));
         int ret = msgBox.exec();
         if(ret==QMessageBox::Save)
             saveAction();
         else if(ret==QMessageBox::Discard)
             event->accept();
         else event->ignore();
    }
}

void MainWindow::closeAction()
{
    this->close();
}

void MainWindow::fontAction()
{
    bool ok;
    QFont font=QFontDialog::getFont(&ok,this);
    if(ok)
        ui->textEdit->setCurrentFont(font);
}

void MainWindow::wordwrapAction(bool t)
{
    if(t) ui->textEdit->setLineWrapMode(QTextEdit::WidgetWidth);
    else ui->textEdit->setLineWrapMode(QTextEdit::NoWrap);
}
