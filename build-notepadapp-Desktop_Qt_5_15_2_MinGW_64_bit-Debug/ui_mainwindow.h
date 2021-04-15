/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOPen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionBold;
    QAction *actionItalics;
    QAction *actionUnderline;
    QAction *actionSelect_font;
    QAction *actionFont_Color;
    QAction *actionBackground_Color;
    QAction *actionRedo_2;
    QAction *actionUndo_2;
    QAction *actionPrint;
    QAction *actionAbout_Notepad;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuFont;
    QMenu *menuAbout;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(688, 277);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/.qrc/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOPen = new QAction(MainWindow);
        actionOPen->setObjectName(QString::fromUtf8("actionOPen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/.qrc/icons/open.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actionOPen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/.qrc/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/.qrc/icons/save as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon3);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/.qrc/icons/exit.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/.qrc/icons/copy.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon5);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/.qrc/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon6);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/.qrc/icons/paste.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon7);
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/.qrc/icons/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon8);
        actionItalics = new QAction(MainWindow);
        actionItalics->setObjectName(QString::fromUtf8("actionItalics"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/.qrc/icons/italics.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalics->setIcon(icon9);
        actionUnderline = new QAction(MainWindow);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/.qrc/icons/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon10);
        actionSelect_font = new QAction(MainWindow);
        actionSelect_font->setObjectName(QString::fromUtf8("actionSelect_font"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/.qrc/icons/font.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_font->setIcon(icon11);
        actionFont_Color = new QAction(MainWindow);
        actionFont_Color->setObjectName(QString::fromUtf8("actionFont_Color"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/.qrc/icons/fontcolour.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont_Color->setIcon(icon12);
        actionBackground_Color = new QAction(MainWindow);
        actionBackground_Color->setObjectName(QString::fromUtf8("actionBackground_Color"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/.qrc/icons/background.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBackground_Color->setIcon(icon13);
        actionRedo_2 = new QAction(MainWindow);
        actionRedo_2->setObjectName(QString::fromUtf8("actionRedo_2"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/.qrc/icons/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo_2->setIcon(icon14);
        actionUndo_2 = new QAction(MainWindow);
        actionUndo_2->setObjectName(QString::fromUtf8("actionUndo_2"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/.qrc/icons/undo.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo_2->setIcon(icon15);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/.qrc/icons/print.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon16);
        actionAbout_Notepad = new QAction(MainWindow);
        actionAbout_Notepad->setObjectName(QString::fromUtf8("actionAbout_Notepad"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/.qrc/icons/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Notepad->setIcon(icon17);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 688, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuFont = new QMenu(menubar);
        menuFont->setObjectName(QString::fromUtf8("menuFont"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuFont->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOPen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo_2);
        menuEdit->addAction(actionRedo_2);
        menuEdit->addSeparator();
        menuEdit->addAction(actionPrint);
        menuFont->addAction(actionBold);
        menuFont->addAction(actionItalics);
        menuFont->addAction(actionUnderline);
        menuFont->addSeparator();
        menuFont->addAction(actionSelect_font);
        menuFont->addAction(actionFont_Color);
        menuFont->addAction(actionBackground_Color);
        menuAbout->addAction(actionAbout_Notepad);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOPen);
        toolBar->addSeparator();
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSave_as);
        toolBar->addSeparator();
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionPaste);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo_2);
        toolBar->addAction(actionRedo_2);
        toolBar->addSeparator();
        toolBar->addAction(actionBold);
        toolBar->addAction(actionItalics);
        toolBar->addAction(actionUnderline);
        toolBar->addAction(actionSelect_font);
        toolBar->addAction(actionFont_Color);
        toolBar->addAction(actionBackground_Color);
        toolBar->addSeparator();
        toolBar->addAction(actionPrint);
        toolBar->addAction(actionAbout_Notepad);
        toolBar->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOPen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionBold->setText(QCoreApplication::translate("MainWindow", "Bold", nullptr));
        actionItalics->setText(QCoreApplication::translate("MainWindow", "Italics", nullptr));
        actionUnderline->setText(QCoreApplication::translate("MainWindow", "Underline", nullptr));
        actionSelect_font->setText(QCoreApplication::translate("MainWindow", "Select font", nullptr));
        actionFont_Color->setText(QCoreApplication::translate("MainWindow", "Font Color", nullptr));
        actionBackground_Color->setText(QCoreApplication::translate("MainWindow", "Background Color", nullptr));
        actionRedo_2->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionUndo_2->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        actionAbout_Notepad->setText(QCoreApplication::translate("MainWindow", "About Notepad", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuFont->setTitle(QCoreApplication::translate("MainWindow", "Font", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
