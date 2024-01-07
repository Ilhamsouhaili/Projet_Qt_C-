/********************************************************************************
** Form generated from reading UI file 'checkoutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKOUTDIALOG_H
#define UI_CHECKOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CheckOutDialog
{
public:
    QComboBox *cmbRoomList;
    QLabel *label;
    QPushButton *btnCheckout;
    QPushButton *btnCancel;
    QLabel *label_2;

    void setupUi(QDialog *CheckOutDialog)
    {
        if (CheckOutDialog->objectName().isEmpty())
            CheckOutDialog->setObjectName(QString::fromUtf8("CheckOutDialog"));
        CheckOutDialog->setWindowModality(Qt::WindowModal);
        CheckOutDialog->resize(500, 400);
        cmbRoomList = new QComboBox(CheckOutDialog);
        cmbRoomList->setObjectName(QString::fromUtf8("cmbRoomList"));
        cmbRoomList->setGeometry(QRect(271, 140, 161, 22));
        QFont font;
        font.setFamily(QString::fromUtf8("Pristina"));
        font.setPointSize(13);
        cmbRoomList->setFont(font);
        label = new QLabel(CheckOutDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(71, 140, 191, 21));
        label->setFont(font);
        btnCheckout = new QPushButton(CheckOutDialog);
        btnCheckout->setObjectName(QString::fromUtf8("btnCheckout"));
        btnCheckout->setGeometry(QRect(71, 200, 131, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Pristina"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        btnCheckout->setFont(font1);
        btnCancel = new QPushButton(CheckOutDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(320, 200, 111, 31));
        btnCancel->setFont(font1);
        label_2 = new QLabel(CheckOutDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 50, 451, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Poor Richard"));
        font2.setPointSize(18);
        label_2->setFont(font2);

        retranslateUi(CheckOutDialog);

        QMetaObject::connectSlotsByName(CheckOutDialog);
    } // setupUi

    void retranslateUi(QDialog *CheckOutDialog)
    {
        CheckOutDialog->setWindowTitle(QApplication::translate("CheckOutDialog", "Retirer Reservation", nullptr));
        label->setText(QApplication::translate("CheckOutDialog", "Choisissez Une Chambre", nullptr));
        btnCheckout->setText(QApplication::translate("CheckOutDialog", "Retirer", nullptr));
        btnCancel->setText(QApplication::translate("CheckOutDialog", "Annuler", nullptr));
        label_2->setText(QApplication::translate("CheckOutDialog", "Souhaitez Vous Retirer Une Chambre ?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckOutDialog: public Ui_CheckOutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKOUTDIALOG_H
