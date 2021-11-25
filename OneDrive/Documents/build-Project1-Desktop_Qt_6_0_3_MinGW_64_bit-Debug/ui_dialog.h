/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(367, 318);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Downloads/icoo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        Dialog->setStyleSheet(QString::fromUtf8("QDialog {\n"
"	background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(236, 191, 49, 255), stop:0.0113636 rgba(121, 75, 255, 255), stop:0.505682 rgba(25, 232, 244, 171), stop:0.971591 rgba(104, 222, 71, 255), stop:1 rgba(93, 128, 0, 255));\n"
"    border: 2px groove gray;\n"
"     border-radius: 20px;\n"
"    padding: 2px 4px;\n"
"}\n"
"\n"
"QPushButton {\n"
"	background-color: white;\n"
"   border: 2px groove DarkCyan;\n"
"    border-radius: 10px;\n"
"   padding: 2px 4px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 171, 151));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	\n"
"   border: 2px groove dark blue;\n"
"    border-radius: 10px;\n"
"   padding: 2px 4px;\n"
"}"));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(0);
        label->setMidLineWidth(0);
        label->setScaledContents(false);
        label->setWordWrap(true);
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 40, 141, 21));
        lineEdit->setCursor(QCursor(Qt::CrossCursor));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	\n"
"   border: 2px groove DarkCyan;\n"
"    border-radius: 10px;\n"
"   padding: 2px 4px;\n"
"}"));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 42, 51, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setBold(true);
        font1.setItalic(true);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setMouseTracking(true);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0.159091 rgba(95, 255, 120, 248), stop:0.363636 rgba(63, 85, 255, 237), stop:0.573864 rgba(95, 127, 255, 237), stop:0.784091 rgba(95, 248, 255, 244));\n"
"	\n"
"   border: 2px groove DarkCyan;\n"
"    border-radius: 10px;\n"
"   padding: 2px 4px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 70, 211, 241));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/boroughs_adobespark.png")));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 10, 61, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(7);
        font2.setBold(true);
        font2.setItalic(true);
        pushButton_2->setFont(font2);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setMouseTracking(true);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0.159091 rgba(95, 255, 120, 248), stop:0.363636 rgba(63, 85, 255, 237), stop:0.573864 rgba(95, 127, 255, 237), stop:0.784091 rgba(95, 248, 255, 244));\n"
"   border: 2px groove DarkCyan;\n"
"    border-radius: 10px;\n"
"   padding: 2px 4px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 230, 141, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI"));
        font3.setBold(true);
        font3.setItalic(true);
        font3.setUnderline(true);
        pushButton_3->setFont(font3);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setMouseTracking(true);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: none;\n"
"\n"
" border: 2px groove yellow;\n"
"    border-radius: 10px;\n"
"   padding: 2px 4px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color:red;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: red;\n"
"     border: 1px solid red;\n"
" }\n"
"\n"
""));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Location", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-weight:600;\">Enter your district:</span></p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" font-family:'Courier New'; font-size:11pt; font-weight:696; color:#000000; background-color:transparent;\"><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:138%;\"><a name=\"docs-internal-guid-ce177c5b-7fff-e0e9-2473-f7703a9ebae3\"/><span style=\" font-size:9pt; font-weight:400;\">q</span><span style=\" font-size:9pt; font-weight:400;\">ueens</span></pre><li style=\" font-family:'Courier New'; font-size:9pt; color:#000000; background-color:transparent;\"><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:138%;\">bronx</pre><li style=\" font-family:'Courier New'; font-size:9pt; color:#000000; background-color:transparent;\"><pre style=\" margin"
                        "-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:138%;\">brooklyn</pre><li style=\" font-family:'Courier New'; font-size:9pt; color:#000000; background-color:transparent;\"><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:138%;\">manhattan</pre><li style=\" font-family:'Courier New'; font-size:9pt; color:#000000; background-color:transparent;\"><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:138%;\">staten island</pre>", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
        label_2->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Go Back", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "Click to find on maps", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
