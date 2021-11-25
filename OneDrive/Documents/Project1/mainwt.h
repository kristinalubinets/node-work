//********************************************************************************************************************************************
// Kristina Lubinets                                  *                                         *
//Spring 2021, CSC 211H                               *                                         *
//Date of submission: Thursday, May 13, 2021          *                                         *
//Instructor Name: Dr. Azhar                          *                                         *
//********************************************************************************************************************************************

#ifndef MAINWT_H
#define MAINWT_H

#include <QMainWindow>

#include <QDebug>
#include <QString>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QPainter>


namespace Ui {
class MainWt;
}

class MainWt : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWt(QWidget *parent = nullptr);
    ~MainWt();

signals:
    void firstWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_5_pressed();

    void on_pushButton_8_clicked();

private:
    Ui::MainWt *ui;

    QMainWindow *tWindow;
};

#endif // MAINWT_H
