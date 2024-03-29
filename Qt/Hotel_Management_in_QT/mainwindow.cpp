#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>

#include <QCoreApplication>
#include <QtSql>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    DB_Connection = QSqlDatabase::addDatabase("QSQLITE");
    DB_Connection.setDatabaseName("C:/Users/HP/Desktop/EMSI/Cpp/Qt/Hotel_Management_in_QT/cppbuzz_hotelmanagement.db");
    DB_Connection.open();

    this->setFixedSize(800,500);

    ptrRoomAvailableDlg = new RoomAvailableDialog(this);
    ptrCheckOutDlg = new CheckOutDialog(this);
    ptrRoomBookingDlg = new BookRoomDialog(this);
    ptrTransaction = new transaction(this);

    QPixmap pm("C:/Users/HP/Desktop/EMSI/Cpp/Qt/img/bg1.jpg"); // <- path to image file
    ui->imgLabel->setPixmap(pm);
    ui->imgLabel->setScaledContents(true);
}

MainWindow::~MainWindow()
{
    qDebug()<<"MainWindow: Deleting";
    delete ui;
    delete ptrRoomBookingDlg;
    delete ptrCheckOutDlg;
    delete ptrRoomAvailableDlg;
    delete ptrTransaction;
}

void MainWindow::on_btnRoomBooking_clicked()
{
    qDebug() <<this->metaObject()->className()<< ": In Room Booking";
    ptrRoomBookingDlg->readData();
    ptrRoomBookingDlg->show();

    if(ptrRoomBookingDlg->isVisible())
        qDebug()<<"New Window is visible";
    else
        qDebug()<<"New Window is not visible";
    //myHotel.BookRoom();
}

void MainWindow::on_btnRoomCheckout_clicked()
{
    qDebug() <<this->metaObject()->className()<< ": In Room Checkout";
    ptrCheckOutDlg->readData();
    ptrCheckOutDlg->show();
}

void MainWindow::on_btnCheckAvailability_clicked()
{
    qDebug() <<this->metaObject()->className()<< ": In Check Availability";
    ptrRoomAvailableDlg->readData();
    ptrRoomAvailableDlg->show();
}

void MainWindow::on_bntTransaction_clicked()
{
    ptrTransaction->readData();
    ptrTransaction->show();
}
