#include "checkoutdialog.h"
#include "ui_checkoutdialog.h"
#include "QDebug"

#include <QCoreApplication>
#include <QtSql>

CheckOutDialog::CheckOutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckOutDialog)
{
    ui->setupUi(this);
    this->setFixedSize(500,300);
    qDebug()<<"Dans le constructeur de la boîte de dialogue Check Out";

}

void CheckOutDialog::readData()
{
    std::vector<int>rooms = Hotel::getInstance()->getRoomList("n");
    this->ui->cmbRoomList->clear();
    char flag = 0;
    for(std::vector<int>::iterator it = rooms.begin(); it!=rooms.end(); it++ )
    {
        this->ui->cmbRoomList->addItem(QString::number(*it));
        flag = 1;
    }

    if(flag==1) this->ui->btnCheckout->setEnabled(true);

}
CheckOutDialog::~CheckOutDialog()
{
    delete ui;
}

void CheckOutDialog::on_btnCancel_clicked()
{
    this->hide();
}

void CheckOutDialog::on_btnCheckout_clicked()
{

    //call hotels's checkout
    int  roomno = ui->cmbRoomList->currentText().toInt();

    if(roomno < 1)
    {
            QMessageBox::information(
            this,
            tr("Warning!"),
            tr("Pas de chambre pour le retirer ") );
            return;
     }
    int ret = Hotel::getInstance()->CheckOut(roomno);

    QString msg = "";
    ret==0?msg="Succès!":"Échec!";

    this->hide();

    if(ret == 0)
    {
        QMessageBox::information(
        this,
        tr("Succès!"),
        tr("La chambre a été libérée ! Dites merci au client") );
    }
}
