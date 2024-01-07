/********************************************************************************
** Form generated from reading UI file 'transaction.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTION_H
#define UI_TRANSACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_transaction
{
public:
    QListWidget *lstWidget;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *transaction)
    {
        if (transaction->objectName().isEmpty())
            transaction->setObjectName(QString::fromUtf8("transaction"));
        transaction->setWindowModality(Qt::WindowModal);
        transaction->resize(500, 400);
        transaction->setMaximumSize(QSize(800, 500));
        lstWidget = new QListWidget(transaction);
        lstWidget->setObjectName(QString::fromUtf8("lstWidget"));
        lstWidget->setGeometry(QRect(40, 157, 411, 181));
        QFont font;
        font.setFamily(QString::fromUtf8("Pristina"));
        font.setPointSize(12);
        lstWidget->setFont(font);
        label = new QLabel(transaction);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 120, 421, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Pristina"));
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(transaction);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 40, 341, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Poor Richard"));
        font2.setPointSize(20);
        label_2->setFont(font2);

        retranslateUi(transaction);

        QMetaObject::connectSlotsByName(transaction);
    } // setupUi

    void retranslateUi(QDialog *transaction)
    {
        transaction->setWindowTitle(QApplication::translate("transaction", "Transaction De Reservation", nullptr));
        label->setText(QApplication::translate("transaction", "ID Transaction         Num Chambre         ID Client         ", nullptr));
        label_2->setText(QApplication::translate("transaction", "Consulter Les Transactions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class transaction: public Ui_transaction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTION_H
