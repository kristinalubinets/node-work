/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(462, 409);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Downloads/icoo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setToolTipDuration(0);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	border-top-color:  darkcyan;\n"
"	background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.409091 rgba(0, 61, 255, 69), stop:0.414773 rgba(0, 115, 255, 84), stop:0.585227 rgba(0, 255, 244, 69), stop:0.642045 rgba(0, 104, 255, 101), stop:0.732955 rgba(0, 115, 255, 69));\n"
"    border: 3px groove darkcyan;\n"
"     border-radius: 20px;\n"
"    padding: 2px 4px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setToolTipDuration(0);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 60, 111, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setBold(true);
        font.setItalic(true);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setMouseTracking(true);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: lightblue;\n"
"    border: 2px groove DarkCyan;\n"
"     border-radius: 20px;\n"
"    padding: 2px 4px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 60, 101, 41));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setMouseTracking(true);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: lightblue;\n"
"    border: 2px groove DarkCyan;\n"
"     border-radius: 20px;\n"
"    padding: 2px 4px\n"
"   }\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 90, 441, 201));
        label->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px;\n"
"     border-radius: 40px;\n"
"    padding: 4px 6px\n"
"  }\n"
"\n"
""));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/yp_adobespark.png")));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 270, 261, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe Script"));
        font1.setPointSize(24);
        font1.setBold(false);
        font1.setItalic(false);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 75 24pt \"Segoe Script\";\n"
"color: rgb(120, 255, 244);\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 290, 51, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setItalic(true);
        label_3->setFont(font2);
        label_3->setMouseTracking(true);
        label_3->setWordWrap(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(390, 280, 71, 71));
        label_4->setMouseTracking(true);
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icon_adobespark.png")));
        MainWindow->setCentralWidget(centralwidget);
        label_4->raise();
        pushButton->raise();
        pushButton_2->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 462, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Easy Recycling", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Plastic Types", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Location", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Easy Recyclyng ", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
