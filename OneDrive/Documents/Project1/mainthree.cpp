//********************************************************************************************************************************************
// Kristina Lubinets                                  *                                         *
//Spring 2021, CSC 211H                               *                                         *
//Date of submission: Thursday, May 13, 2021          *                                         *
//Instructor Name: Dr. Azhar                          *                                         *
//********************************************************************************************************************************************

#include "mainthree.h"
#include "ui_mainthree.h"

#include "dialog.h"
#include "mainwindow.h"

#include <iostream>
#include <QDebug>
#include <QString>
#include  <QTextStream>
#include <QRegularExpressionValidator>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QDebug>
#include <QValidator>
#include <QPixmap>
#include <QImage>

using namespace std;

MainThree::MainThree(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainThree)
{
    ui->setupUi(this); 
}

template<class T>
T toType(T theline) {
    if ((theline > 0) && (theline < 5)){
        QString one;
       theline =  one.toInt(theline);
    }
    return theline;
}

MainThree::~MainThree()
{
    delete ui;
}

void MainThree::on_pushButton_2_clicked()
{

    QString theline = ui->lineEdit->text();

   // ui->label->setText(theline);  to check that value works
   // ui->label->toType(theline);

    QRegularExpression re("[1-9]\\d{0,1}");              // allows numbers only, otherwise does not let to type any char or symbols
    QValidator *validator = new QRegularExpressionValidator(re, this);

    //QLineEdit *edit = new QLineEdit(this);
    ui->lineEdit->setValidator(validator);

    QRegularExpressionMatch match = re.match(theline);

    if (match.hasMatch()) {
        QString matched = match.captured(0);           // if matched == then the expression is true
        ui->label->setText("\nThe amount of plastic items: " + matched);

        if ((theline <= '9' ) && (theline > '4')){
            ui->label->setText("It takes <b> about 5 PET bottles</b> to make an extra large t-shirt.");

            QPixmap pixmap(":C/Users/krisl/OneDrive/Desktop/lady.jpeg");
            ui->label_2->setStyleSheet("background-image: url(:C/Users/krisl/OneDrive/Desktop/loop3.png)");    //setPixmap(pixmap);
            pixmap = pixmap.scaled( Qt::KeepAspectRatio, Qt::SmoothTransformation);

            ui->label_4->setPixmap(pixmap);
            ui->label_4->setMask(pixmap.mask());

            ui->label_4->show();
        }
        else if (theline < '3') {

            ui->label->setText("\nThe plastic <b>from 1 bottle</b> can be used to create approximately two B2P pens.Pilot Pen developed the Bottle to Pen (B2P) Line of writing instruments, which are the world's first pens made from recycled plastic water bottles. ");
        }
        else if ((theline < '5') && (theline > '2')) {
           ui->label->setText("\nIt takes <b>about 11 of empty plastic bottles</b> or containers make sustainable shoes for the company Adidas");
        }
    }
    if (!match.hasMatch()){
        ui->label->setText("Please, type only numbers in a range [1 - 9].");
    }
}

void MainThree::on_pushButton_3_clicked()
{
    ui->setupUi(this);
    this->hide();
}

