/********************************************************************************
** Form generated from reading UI file 'slam.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLAM_H
#define UI_SLAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SlamClass
{
public:
    QWidget *centralWidget;
    QLabel *frame_Current;
    QLabel *frame_Obstacles_DirMove;
    QLabel *frame_Maps;
    QLabel *label_CurrentFrame;
    QLabel *label_Obstacles_DirMove;
    QLabel *label_Maps;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SlamClass)
    {
        if (SlamClass->objectName().isEmpty())
            SlamClass->setObjectName(QStringLiteral("SlamClass"));
        SlamClass->resize(1280, 768);
        centralWidget = new QWidget(SlamClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame_Current = new QLabel(centralWidget);
        frame_Current->setObjectName(QStringLiteral("frame_Current"));
        frame_Current->setGeometry(QRect(0, 50, 320, 240));
        frame_Obstacles_DirMove = new QLabel(centralWidget);
        frame_Obstacles_DirMove->setObjectName(QStringLiteral("frame_Obstacles_DirMove"));
        frame_Obstacles_DirMove->setGeometry(QRect(0, 350, 320, 240));
        frame_Maps = new QLabel(centralWidget);
        frame_Maps->setObjectName(QStringLiteral("frame_Maps"));
        frame_Maps->setGeometry(QRect(570, 90, 640, 480));
        label_CurrentFrame = new QLabel(centralWidget);
        label_CurrentFrame->setObjectName(QStringLiteral("label_CurrentFrame"));
        label_CurrentFrame->setGeometry(QRect(0, 30, 91, 16));
        label_Obstacles_DirMove = new QLabel(centralWidget);
        label_Obstacles_DirMove->setObjectName(QStringLiteral("label_Obstacles_DirMove"));
        label_Obstacles_DirMove->setGeometry(QRect(0, 320, 181, 16));
        label_Maps = new QLabel(centralWidget);
        label_Maps->setObjectName(QStringLiteral("label_Maps"));
        label_Maps->setGeometry(QRect(570, 10, 47, 13));
        SlamClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SlamClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 21));
        SlamClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SlamClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SlamClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SlamClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SlamClass->setStatusBar(statusBar);

        retranslateUi(SlamClass);

        QMetaObject::connectSlotsByName(SlamClass);
    } // setupUi

    void retranslateUi(QMainWindow *SlamClass)
    {
        SlamClass->setWindowTitle(QApplication::translate("SlamClass", "Slam", 0));
        frame_Current->setText(QString());
        frame_Obstacles_DirMove->setText(QString());
        frame_Maps->setText(QString());
        label_CurrentFrame->setText(QApplication::translate("SlamClass", "Current Frame", 0));
        label_Obstacles_DirMove->setText(QApplication::translate("SlamClass", "Obstacles and Direction of move", 0));
        label_Maps->setText(QApplication::translate("SlamClass", "Maps", 0));
    } // retranslateUi

};

namespace Ui {
    class SlamClass: public Ui_SlamClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLAM_H
