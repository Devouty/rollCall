/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTreeView *treeView;
    QLabel *strudentName;
    QPushButton *OKButton;
    QPushButton *NOButton;
    QPushButton *returnButton;
    QMenuBar *menuBar;
    QMenu *fileMenu;
    QMenu *viewMenu;
    QMenu *editMenu;
    QMenu *operateMenu;
    QMenu *volumeMenu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(724, 433);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        treeView = new QTreeView(centralWidget);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(0, 0, 161, 371));
        strudentName = new QLabel(centralWidget);
        strudentName->setObjectName(QStringLiteral("strudentName"));
        strudentName->setGeometry(QRect(280, 30, 321, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(48);
        font.setBold(true);
        font.setWeight(75);
        strudentName->setFont(font);
        OKButton = new QPushButton(centralWidget);
        OKButton->setObjectName(QStringLiteral("OKButton"));
        OKButton->setGeometry(QRect(270, 140, 111, 51));
        NOButton = new QPushButton(centralWidget);
        NOButton->setObjectName(QStringLiteral("NOButton"));
        NOButton->setGeometry(QRect(440, 140, 111, 51));
        returnButton = new QPushButton(centralWidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(470, 200, 141, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 724, 23));
        fileMenu = new QMenu(menuBar);
        fileMenu->setObjectName(QStringLiteral("fileMenu"));
        viewMenu = new QMenu(menuBar);
        viewMenu->setObjectName(QStringLiteral("viewMenu"));
        editMenu = new QMenu(menuBar);
        editMenu->setObjectName(QStringLiteral("editMenu"));
        operateMenu = new QMenu(menuBar);
        operateMenu->setObjectName(QStringLiteral("operateMenu"));
        volumeMenu = new QMenu(menuBar);
        volumeMenu->setObjectName(QStringLiteral("volumeMenu"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(fileMenu->menuAction());
        menuBar->addAction(editMenu->menuAction());
        menuBar->addAction(viewMenu->menuAction());
        menuBar->addAction(operateMenu->menuAction());
        menuBar->addAction(volumeMenu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        strudentName->setText(QApplication::translate("MainWindow", "NAME", 0));
        OKButton->setText(QApplication::translate("MainWindow", "\345\210\260\344\272\206\342\225\260(\357\277\243\342\226\275\357\277\243)\342\225\256", 0));
        NOButton->setText(QApplication::translate("MainWindow", "\346\262\241\345\210\260\342\225\256(\342\225\257\342\226\275\342\225\260)\342\225\255", 0));
        returnButton->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200\344\270\212\344\270\200\346\223\215\344\275\234", 0));
        fileMenu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0));
        viewMenu->setTitle(QApplication::translate("MainWindow", "\350\247\206\345\233\276", 0));
        editMenu->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", 0));
        operateMenu->setTitle(QApplication::translate("MainWindow", "\346\223\215\344\275\234", 0));
        volumeMenu->setTitle(QApplication::translate("MainWindow", "\345\243\260\351\237\263", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
