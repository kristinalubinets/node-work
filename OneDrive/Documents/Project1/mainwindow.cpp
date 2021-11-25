//********************************************************************************************************************************************
// Kristina Lubinets                                  *                                         *
//Spring 2021, CSC 211H                               *                                         *
//Date of submission: Thursday, May 13, 2021          *                                         *
//Instructor Name: Dr. Azhar                          *                                         *
//********************************************************************************************************************************************

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwt.h"
#include <QUrl>
#include <QDesktopServices>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Initialize the second window
        sWindow = new MainWt();
        // connected to the slot start the main window on the button in the second window
        connect(sWindow, &MainWt::firstWindow, this, &MainWindow::show);

        dWindow = new Dialog();

        ui->label_3->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
            ui->label_3->setOpenExternalLinks((true));
            ui->label_3->setTextFormat(Qt::RichText);
            ui->label_3->setText("<a href=\"http://sites.google.com/view/callforcode2021-bmcc-recyclops/recyclops-chatbot\" style=\"color: transparent;\">__---__</a>");

            //ui->label_3->setPicture(const QPicture &);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    sWindow->show();  // Show a second window
    //this->hide();    // Close the main window _close()/change on hide()..show()
}

void MainWindow::on_pushButton_2_clicked()
{
    dWindow->show();  // Show a third window
    this->close();    // Close the main window
}


void MainWindow::on_label_4_linkActivated(const QString &link)
{
    QDesktopServices::openUrl(QUrl(link));
    QDesktopServices::openUrl(QUrl("http://sites.google.com/view/callforcode2021-bmcc-recyclops/recyclops-chatbot"));
}
