//********************************************************************************************************************************************
// Kristina Lubinets                                  *                                         *
//Spring 2021, CSC 211H                               *                                         *
//Date of submission: Thursday, May 13, 2021          *                                         *
//Instructor Name: Dr. Azhar                          *                                         *
//********************************************************************************************************************************************

#include "mainwindow.h"
#include "mainwt.h"
#include "dialog.h"
#include "dialogsec.h"

#include <QDebug>
#include <QApplication>
#include <QCoreApplication>

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    MainWindow w;
    w.show();

    return a.exec();

    return 0;
}
