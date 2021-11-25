/********************************************************************************
** Form generated from reading UI file 'mainwt.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWT_H
#define UI_MAINWT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWt
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QPushButton *pushButton_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWt)
    {
        if (MainWt->objectName().isEmpty())
            MainWt->setObjectName(QString::fromUtf8("MainWt"));
        MainWt->resize(671, 463);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Print"));
        font.setBold(true);
        MainWt->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Downloads/icoo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWt->setWindowIcon(icon);
        MainWt->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"\n"
"    background-color: lightblue;\n"
"	color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0.136364 rgba(63, 85, 255, 27), stop:0.288136 rgba(118, 255, 95, 21), stop:0.519774 rgba(95, 127, 255, 21), stop:0.858757 rgba(95, 248, 255, 20));\n"
"    border: 2px groove gray;\n"
"     border-radius: 20px;\n"
"    padding: 2px 4px;\n"
"    border: 2px groove DarkCyan;\n"
"}\n"
""));
        MainWt->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        MainWt->setAnimated(false);
        centralwidget = new QWidget(MainWt);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 30, 121, 23));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setBold(true);
        font1.setItalic(true);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setMouseTracking(true);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
"   border: 2px groove DarkCyan;\n"
"    border-radius: 10px;\n"
"   padding: 2px 4px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Desktop/1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 70, 121, 23));
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setMouseTracking(true);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
"   border: 2px groove DarkCyan;\n"
"    border-radius: 10px;\n"
"   padding: 2px 4px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Desktop/2.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 99, 121, 231));
        verticalLayoutWidget->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"   	background-color: white;\n"
"   border: 2px groove DarkCyan;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setBold(true);
        pushButton_5->setFont(font2);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setMouseTracking(true);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"   	background-color: white;\n"
"   border: 2px groove DarkCyan;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Desktop/3.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon3);
        pushButton_5->setCheckable(false);
        pushButton_5->setChecked(false);
        pushButton_5->setAutoRepeat(false);

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font1);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setMouseTracking(true);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"   	background-color: white;\n"
"   border: 2px groove DarkCyan;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../Desktop/4.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon4);

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setFont(font1);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setMouseTracking(true);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"   	background-color: white;\n"
"   border: 2px groove DarkCyan;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../Desktop/5.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon5);

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font1);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setMouseTracking(true);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"   	background-color: white;\n"
"   border: 2px groove DarkCyan;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../Desktop/6.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon6);

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_7 = new QPushButton(verticalLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setFont(font1);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"   	background-color: white;\n"
"   border: 2px groove DarkCyan;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../Desktop/7.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon7);

        verticalLayout_2->addWidget(pushButton_7);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 200, 411, 221));
        label->setStyleSheet(QString::fromUtf8("QLable{\n"
"\n"
"	color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0.318182 rgba(118, 255, 95, 156), stop:0.534091 rgba(63, 85, 255, 156), stop:0.732955 rgba(95, 248, 255, 183), stop:0.886364 rgba(95, 127, 255, 156));\n"
"    border: 2px groove DarkCyan;\n"
"     border-radius: 20px;\n"
"    padding: 2px 4px\n"
"   }\n"
""));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/loop_adobespark.png")));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(200, 40, 371, 151));
        textBrowser->setStyleSheet(QString::fromUtf8("QTextBrowser {\n"
"	background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0.125 rgba(63, 85, 255, 156), stop:0.318182 rgba(118, 255, 95, 156), stop:0.732955 rgba(95, 248, 255, 183), stop:0.886364 rgba(95, 127, 255, 156));\n"
"\n"
"    border: 2px groove DarkCyan;\n"
"     border-radius: 20px;\n"
"    padding: 2px 4px\n"
"   }"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 50, 351, 131));
        label_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: white;\n"
"    border: 2px groove DarkCyan;\n"
"     border-radius: 20px;\n"
"    padding: 2px 4px\n"
"   }\n"
"\n"
"font: 8pt \"Verdana\";"));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setTextFormat(Qt::RichText);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(600, 10, 61, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(8);
        font3.setBold(false);
        font3.setItalic(false);
        pushButton_8->setFont(font3);
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setMouseTracking(true);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0.318182 rgba(118, 255, 95, 156), stop:0.534091 rgba(63, 85, 255, 156), stop:0.732955 rgba(95, 248, 255, 183), stop:0.886364 rgba(95, 127, 255, 156));\n"
"    border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"    border: 2px groove DarkCyan;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        MainWt->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWt);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 671, 21));
        MainWt->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWt);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWt->setStatusBar(statusbar);

        retranslateUi(MainWt);

        QMetaObject::connectSlotsByName(MainWt);
    } // setupUi

    void retranslateUi(QMainWindow *MainWt)
    {
        MainWt->setWindowTitle(QCoreApplication::translate("MainWt", "Plastic Types", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("MainWt", "Polyethylene terephthalate", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("MainWt", "PET", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_2->setToolTip(QCoreApplication::translate("MainWt", "High-density polyethylene", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_2->setText(QCoreApplication::translate("MainWt", "HDPE", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_5->setToolTip(QCoreApplication::translate("MainWt", "or V (Polyvinyl chloride)", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_5->setText(QCoreApplication::translate("MainWt", "PVC", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_4->setToolTip(QCoreApplication::translate("MainWt", "Low density polyethylene", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_4->setText(QCoreApplication::translate("MainWt", "LDPE", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_6->setToolTip(QCoreApplication::translate("MainWt", "Polypropylene", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_6->setText(QCoreApplication::translate("MainWt", "PP", nullptr));
#if QT_CONFIG(statustip)
        pushButton_3->setStatusTip(QCoreApplication::translate("MainWt", "Polystyrene", nullptr));
#endif // QT_CONFIG(statustip)
        pushButton_3->setText(QCoreApplication::translate("MainWt", "PS", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWt", "Others", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        pushButton_8->setText(QCoreApplication::translate("MainWt", "Go Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWt: public Ui_MainWt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWT_H
