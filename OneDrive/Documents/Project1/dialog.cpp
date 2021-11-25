//********************************************************************************************************************************************
// Kristina Lubinets                                  *                                         *
//Spring 2021, CSC 211H                               *                                         *
//Date of submission: Thursday, May 13, 2021          *                                         *
//Instructor Name: Dr. Azhar                          *                                         *
//********************************************************************************************************************************************

#include <windows.h>
#include <ShellAPI.h>
#include "dialog.h"
#include "ui_dialog.h"
 #include "mainwindow.h"
#include "mainwt.h"
#include "mainthree.h"

#include <QVector>
#include <QFile>
#include <QString>

#include <QLabel>
#include <QApplication>

#include <QTextStream>
#include <QMessageBox>
#include <QUrl>
#include <QDesktopServices>
#include <QDir>
#include <iostream>
#include <exception>

using namespace std;


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString str= ui->lineEdit->text();

    QString str1 = "queens";
    QString str2 = "bronx";
    QString str3 = "manhattan";
    QString str4 = "brooklyn";
    QString str5 = "staten island";

    QVector<QString>strvector;
    strvector << "queens" << "bronx" << "manhattan" << "brooklyn" << "staten island";

    try {
        ui->label->setText(str.toLower());

       if ((str != strvector.at(0)) && (str != strvector.at(1)) && (str != strvector.at(2)) && (str != strvector.at(3)) && (str != strvector.at(4))) {
          ui->lineEdit->setText("Wrong value!");
      }

 } catch (runtime_error& excpt) {
            // Prints the error message passed by throw statement
            ui->lineEdit->setText("ERROR");
  }

        QFile file("C:/Users/krisl/OneDrive/Documents/Project1/filetext.txt");
            if(!file.open(QIODevice :: WriteOnly | QIODevice :: Text)) {
                QMessageBox :: warning(this, "title", "file isn't open");
            }
            QTextStream out(&file);

      if(str==str1) {

            ui->lineEdit->setText(strvector.at(0));

            QString line = str.toUpper();
            out << line;
            QString queens = "\nEvergreen Recycling of Corona \n(718) 205-8038 \n12750 Northern Blvd \nFlushing \nNY 11368";
            out << queens;
            MainThree *three = new MainThree;
            three->show();

            ui->label->setText(queens);
    }

      else if(str==str2) {

          ui->lineEdit->setText(strvector.at(1));

          QString line = str.toUpper();
          out << line;
          QString bronx = "\nHousehold Special Waste Drop-Off Site \n(212) 504-4115 \n738 Hunts Point Ave, Bronx, NY 10474";
          out << bronx;

          MainThree *three = new MainThree;
          three->show();

           ui->label->setText(bronx);

      }
      else if(str==str3) {

          ui->lineEdit->setText(strvector.at(2));

          QString line = str.toUpper();
          out << line;
          QString manhattan = "\nProTek Recycling \n(844) 777-6835 \n485 Madison Ave, New York, NY 10022";
          out << manhattan;
          MainThree *three = new MainThree;
          three->show();
          ui->label->setText(manhattan);

          ui->label->setText(manhattan);

    }
      else if(str==str4) {

          ui->lineEdit->setText(strvector.at(3));

          QString line = str.toUpper();
          out << line;
          QString brooklyn = "\nSure We Can \n(347) 463-9257 \n219 McKibbin St, Brooklyn, NY 11206";
          out << brooklyn;

          MainThree *three = new MainThree;
          three->show();

          ui->label->setText(brooklyn);

      }
      else if(str==str5) {

          ui->lineEdit->setText(strvector.at(4));

          QString line = str.toUpper();
          out << line;
          QString staten_island = "\n4THBIN \n(646) 747-5985 \n219 McKibbin St, 708 3rd Ave 6th floor, New York, NY 10017";
          out << staten_island;
          MainThree *three = new MainThree;
          three->show();

          ui->label->setText(staten_island);

      }

      file.flush();    //have to use // flushes any buffered data waiting to be written to the device
      file.close();

     QFile file1("C:/Users/krisl/OneDrive/Documents/Project1/filetext.txt");
      if(!file1.open(QIODevice :: ReadOnly | QIODevice :: Text)) {
          QMessageBox :: warning(this, "title", "file isnnn't open");
      }
      QTextStream in(&file1);
      QString line1 = in.readAll();
      in << line1;
      file.close();

}

void Dialog::on_pushButton_2_clicked()
{
    this->close();
    MainWindow *o = new MainWindow;
    o->show();
}

void Dialog::on_label_3_linkActivated(const QString &link)
{
  QDesktopServices::openUrl(QUrl(link));

  /* QLabel * myLabel = new QLabel(this);                 //an another way to open a link after ui setUp
     myLabel->setTextFormat(Qt::RichText);
     myLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
     myLabel->setOpenExternalLinks(true);
     myLabel->setText("<a href=\"<a href=\"https://www.google.com\" style=\"color: red;\">The maps link</a>");
     myLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);
     */

    // QDesktopServices::openUrl(QUrl("http://www.google.com"));
}

void Dialog::on_pushButton_3_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.openstreetmap.org"));
}
