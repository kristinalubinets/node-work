/********************************************************************************
** Form generated from reading UI file 'mainthree.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTHREE_H
#define UI_MAINTHREE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainThree
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainThree)
    {
        if (MainThree->objectName().isEmpty())
            MainThree->setObjectName(QString::fromUtf8("MainThree"));
        MainThree->resize(538, 394);
        MainThree->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Downloads/icoo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainThree->setWindowIcon(icon);
        MainThree->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"\n"
"     border-radius: 10px;\n"
"	background-color: lightblue;;\n"
"    padding: 2px 4px;\n"
"   border: 2px groove DarkCyan;\n"
"}\n"
""));
        centralwidget = new QWidget(MainThree);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 140, 161, 151));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"\n"
"	background-color: rgb(240, 254, 255);\n"
"     border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"\n"
"   border: 2px groove DarkCyan;\n"
"}\n"
""));
        label->setFrameShape(QFrame::NoFrame);
        label->setWordWrap(true);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 50, 101, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"     border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"   	\n"
"   border: 2px groove DarkCyan;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 301, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Print"));
        font.setPointSize(11);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    /* border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"   	background-color: ;*/\n"
"\n"
"color:white;\n"
"   /*border: 1px groove DarkCyan;*/\n"
"}"));
        label_2->setFrameShape(QFrame::NoFrame);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 60, 51, 23));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setBold(true);
        font1.setItalic(true);
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setMouseTracking(true);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0.159091 rgba(95, 255, 120, 248), stop:0.363636 rgba(63, 85, 255, 237), stop:0.573864 rgba(95, 127, 255, 237), stop:0.784091 rgba(95, 248, 255, 244));\n"
"     border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"   border: 2px groove DarkCyan;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 100, 291, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe Print"));
        font2.setPointSize(16);
        font2.setBold(true);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(240, 140, 211, 201));
        label_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     /*border-radius: 10px;*/\n"
"    padding: 2px 4px;\n"
"   border: 2px groove DarkCyan;\n"
"}"));
        label_4->setFrameShape(QFrame::NoFrame);
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/trainer2_adobespark.png")));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 130, 181, 171));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0.159091 rgba(95, 255, 120, 248), stop:0.363636 rgba(63, 85, 255, 237), stop:0.573864 rgba(95, 127, 255, 237), stop:0.784091 rgba(95, 248, 255, 244));\n"
"     border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"   border: 2px groove DarkCyan;\n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 70, 101, 151));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/b2p__adobespark.png")));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 0, 541, 361));
        label_7->setCursor(QCursor(Qt::PointingHandCursor));
        label_7->setMouseTracking(true);
        label_7->setFrameShape(QFrame::NoFrame);
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/fon_adobespark.png")));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(380, 20, 61, 23));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI"));
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setItalic(true);
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0.159091 rgba(95, 255, 120, 248), stop:0.363636 rgba(63, 85, 255, 237), stop:0.573864 rgba(95, 127, 255, 237), stop:0.784091 rgba(95, 248, 255, 244));\n"
"     border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"   border: 2px groove DarkCyan;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        MainThree->setCentralWidget(centralwidget);
        label_7->raise();
        label_6->raise();
        label_4->raise();
        label_5->raise();
        label->raise();
        lineEdit->raise();
        label_2->raise();
        pushButton_2->raise();
        label_3->raise();
        pushButton_3->raise();
        menubar = new QMenuBar(MainThree);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 538, 21));
        MainThree->setMenuBar(menubar);
        statusbar = new QStatusBar(MainThree);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainThree->setStatusBar(statusbar);

        retranslateUi(MainThree);

        QMetaObject::connectSlotsByName(MainThree);
    } // setupUi

    void retranslateUi(QMainWindow *MainThree)
    {
        MainThree->setWindowTitle(QCoreApplication::translate("MainThree", "Facts", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainThree", "Enter amount of plastic bottles (1-9) :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainThree", "OK", nullptr));
        label_3->setText(QCoreApplication::translate("MainThree", "What Plastic Can Become?", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainThree", "Go Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainThree: public Ui_MainThree {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTHREE_H
