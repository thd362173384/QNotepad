/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Create;
    QAction *action_Open;
    QAction *action_Save;
    QAction *action_Save_As;
    QAction *action_Exit;
    QAction *action_Undo;
    QAction *action_Repeat;
    QAction *action_Copy;
    QAction *action_Paste;
    QAction *action_Delete;
    QAction *action_Cut;
    QAction *action_Find;
    QAction *action_Find_Next;
    QAction *action_Find_Forward;
    QAction *action_Replace;
    QAction *action_Jump_To;
    QAction *action_Font;
    QAction *action_About;
    QAction *action_AutoIndent;
    QAction *action_WordWrap;
    QAction *action_LineNumber;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Edit;
    QMenu *menu_Search;
    QMenu *menu_Option;
    QMenu *menu_Help;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 400);
        action_Create = new QAction(MainWindow);
        action_Create->setObjectName(QString::fromUtf8("action_Create"));
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        action_Save_As = new QAction(MainWindow);
        action_Save_As->setObjectName(QString::fromUtf8("action_Save_As"));
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QString::fromUtf8("action_Exit"));
        action_Undo = new QAction(MainWindow);
        action_Undo->setObjectName(QString::fromUtf8("action_Undo"));
        action_Repeat = new QAction(MainWindow);
        action_Repeat->setObjectName(QString::fromUtf8("action_Repeat"));
        action_Copy = new QAction(MainWindow);
        action_Copy->setObjectName(QString::fromUtf8("action_Copy"));
        action_Paste = new QAction(MainWindow);
        action_Paste->setObjectName(QString::fromUtf8("action_Paste"));
        action_Delete = new QAction(MainWindow);
        action_Delete->setObjectName(QString::fromUtf8("action_Delete"));
        action_Cut = new QAction(MainWindow);
        action_Cut->setObjectName(QString::fromUtf8("action_Cut"));
        action_Find = new QAction(MainWindow);
        action_Find->setObjectName(QString::fromUtf8("action_Find"));
        action_Find_Next = new QAction(MainWindow);
        action_Find_Next->setObjectName(QString::fromUtf8("action_Find_Next"));
        action_Find_Forward = new QAction(MainWindow);
        action_Find_Forward->setObjectName(QString::fromUtf8("action_Find_Forward"));
        action_Replace = new QAction(MainWindow);
        action_Replace->setObjectName(QString::fromUtf8("action_Replace"));
        action_Jump_To = new QAction(MainWindow);
        action_Jump_To->setObjectName(QString::fromUtf8("action_Jump_To"));
        action_Font = new QAction(MainWindow);
        action_Font->setObjectName(QString::fromUtf8("action_Font"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        action_AutoIndent = new QAction(MainWindow);
        action_AutoIndent->setObjectName(QString::fromUtf8("action_AutoIndent"));
        action_AutoIndent->setCheckable(true);
        action_WordWrap = new QAction(MainWindow);
        action_WordWrap->setObjectName(QString::fromUtf8("action_WordWrap"));
        action_WordWrap->setCheckable(true);
        action_LineNumber = new QAction(MainWindow);
        action_LineNumber->setObjectName(QString::fromUtf8("action_LineNumber"));
        action_LineNumber->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(91, 41, 229, 199));
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit->setAcceptRichText(false);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 25));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Edit = new QMenu(menuBar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        menu_Search = new QMenu(menuBar);
        menu_Search->setObjectName(QString::fromUtf8("menu_Search"));
        menu_Option = new QMenu(menuBar);
        menu_Option->setObjectName(QString::fromUtf8("menu_Option"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Edit->menuAction());
        menuBar->addAction(menu_Search->menuAction());
        menuBar->addAction(menu_Option->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_Create);
        menu_File->addAction(action_Open);
        menu_File->addAction(action_Save);
        menu_File->addAction(action_Save_As);
        menu_File->addAction(action_Exit);
        menu_Edit->addAction(action_Undo);
        menu_Edit->addAction(action_Repeat);
        menu_Edit->addSeparator();
        menu_Edit->addAction(action_Copy);
        menu_Edit->addAction(action_Paste);
        menu_Edit->addAction(action_Delete);
        menu_Edit->addAction(action_Cut);
        menu_Search->addAction(action_Find);
        menu_Search->addAction(action_Find_Next);
        menu_Search->addAction(action_Find_Forward);
        menu_Search->addAction(action_Replace);
        menu_Search->addSeparator();
        menu_Search->addAction(action_Jump_To);
        menu_Option->addAction(action_Font);
        menu_Option->addAction(action_AutoIndent);
        menu_Option->addAction(action_WordWrap);
        menu_Option->addAction(action_LineNumber);
        menu_Help->addAction(action_About);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QNotepad", 0, QApplication::UnicodeUTF8));
        action_Create->setText(QApplication::translate("MainWindow", "&New", 0, QApplication::UnicodeUTF8));
        action_Open->setText(QApplication::translate("MainWindow", "&Open", 0, QApplication::UnicodeUTF8));
        action_Save->setText(QApplication::translate("MainWindow", "&Save", 0, QApplication::UnicodeUTF8));
        action_Save_As->setText(QApplication::translate("MainWindow", "&Save As", 0, QApplication::UnicodeUTF8));
        action_Exit->setText(QApplication::translate("MainWindow", "&Exit", 0, QApplication::UnicodeUTF8));
        action_Undo->setText(QApplication::translate("MainWindow", "&Undo", 0, QApplication::UnicodeUTF8));
        action_Repeat->setText(QApplication::translate("MainWindow", "&Repeat", 0, QApplication::UnicodeUTF8));
        action_Copy->setText(QApplication::translate("MainWindow", "&Copy", 0, QApplication::UnicodeUTF8));
        action_Paste->setText(QApplication::translate("MainWindow", "&Paste", 0, QApplication::UnicodeUTF8));
        action_Delete->setText(QApplication::translate("MainWindow", "&Delete", 0, QApplication::UnicodeUTF8));
        action_Cut->setText(QApplication::translate("MainWindow", "&Cut", 0, QApplication::UnicodeUTF8));
        action_Find->setText(QApplication::translate("MainWindow", "&Find", 0, QApplication::UnicodeUTF8));
        action_Find_Next->setText(QApplication::translate("MainWindow", "Find &Next", 0, QApplication::UnicodeUTF8));
        action_Find_Forward->setText(QApplication::translate("MainWindow", "Find &Forward", 0, QApplication::UnicodeUTF8));
        action_Replace->setText(QApplication::translate("MainWindow", "&Replace", 0, QApplication::UnicodeUTF8));
        action_Jump_To->setText(QApplication::translate("MainWindow", "&Jump To", 0, QApplication::UnicodeUTF8));
        action_Font->setText(QApplication::translate("MainWindow", "&Font", 0, QApplication::UnicodeUTF8));
        action_About->setText(QApplication::translate("MainWindow", "&About", 0, QApplication::UnicodeUTF8));
        action_AutoIndent->setText(QApplication::translate("MainWindow", "&AutoIndent", 0, QApplication::UnicodeUTF8));
        action_WordWrap->setText(QApplication::translate("MainWindow", "&WordWrap", 0, QApplication::UnicodeUTF8));
        action_LineNumber->setText(QApplication::translate("MainWindow", "&LineNumber", 0, QApplication::UnicodeUTF8));
        textEdit->setDocumentTitle(QApplication::translate("MainWindow", "Untitled", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menu_Edit->setTitle(QApplication::translate("MainWindow", "&Edit", 0, QApplication::UnicodeUTF8));
        menu_Search->setTitle(QApplication::translate("MainWindow", "&Search", 0, QApplication::UnicodeUTF8));
        menu_Option->setTitle(QApplication::translate("MainWindow", "&Option", 0, QApplication::UnicodeUTF8));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
