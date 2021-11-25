//********************************************************************************************************************************************
// Kristina Lubinets                                  *                                         *
//Spring 2021, CSC 211H                               *                                         *
//Date of submission: Thursday, May 13, 2021          *                                         *
//Instructor Name: Dr. Azhar                          *                                         *
//********************************************************************************************************************************************

#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>             //#include <QMainWindow> do not need to include QMainWindiw, cause an error
#include <mainwt.h>
#include <QDesktopServices>
#include <QUrl>
#include <QWidget>
#include "mainthree.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);

    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_label_3_linkActivated(const QString &link);


    void on_pushButton_3_clicked();

private:
    Ui::Dialog *ui;

    MainThree *threeptr;

};


#endif // DIALOG_H
