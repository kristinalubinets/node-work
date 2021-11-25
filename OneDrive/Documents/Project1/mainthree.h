//********************************************************************************************************************************************
// Kristina Lubinets                                  *                                         *
//Spring 2021, CSC 211H                               *                                         *
//Date of submission: Thursday, May 13, 2021          *                                         *
//Instructor Name: Dr. Azhar                          *                                         *
//********************************************************************************************************************************************

#ifndef MAINTHREE_H
#define MAINTHREE_H

#include <QMainWindow>

#include <QDebug>
#include <QString>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QPainter>

namespace Ui {
class MainThree;
}

class MainThree : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainThree(QWidget *parent = nullptr);
    ~MainThree();

  QDialog *toDial;

    auto toType(QString theline);
    auto toType(float theline);


private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainThree *ui;

    MainThree *threeptrr;

};

#endif // MAINTHREE_H
