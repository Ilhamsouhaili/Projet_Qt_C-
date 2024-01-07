/********************************************************************************
** Form generated from reading UI file 'bookroomdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKROOMDIALOG_H
#define UI_BOOKROOMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_BookRoomDialog
{
public:
    QLabel *label;
    QComboBox *cmbRoomList;
    QLineEdit *txtName;
    QLineEdit *txtContactNumber;
    QTextEdit *txtAddress;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *txtIdProof;
    QPushButton *btnSubmit;
    QPushButton *btnCancel;
    QLabel *label_6;

    void setupUi(QDialog *BookRoomDialog)
    {
        if (BookRoomDialog->objectName().isEmpty())
            BookRoomDialog->setObjectName(QString::fromUtf8("BookRoomDialog"));
        BookRoomDialog->setWindowModality(Qt::WindowModal);
        BookRoomDialog->resize(500, 400);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Serif"));
        BookRoomDialog->setFont(font);
        label = new QLabel(BookRoomDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 80, 191, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Pristina"));
        font1.setPointSize(13);
        label->setFont(font1);
        cmbRoomList = new QComboBox(BookRoomDialog);
        cmbRoomList->setObjectName(QString::fromUtf8("cmbRoomList"));
        cmbRoomList->setGeometry(QRect(270, 80, 141, 22));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Pristina"));
        font2.setPointSize(12);
        cmbRoomList->setFont(font2);
        txtName = new QLineEdit(BookRoomDialog);
        txtName->setObjectName(QString::fromUtf8("txtName"));
        txtName->setGeometry(QRect(270, 120, 141, 21));
        txtContactNumber = new QLineEdit(BookRoomDialog);
        txtContactNumber->setObjectName(QString::fromUtf8("txtContactNumber"));
        txtContactNumber->setGeometry(QRect(270, 160, 141, 20));
        txtAddress = new QTextEdit(BookRoomDialog);
        txtAddress->setObjectName(QString::fromUtf8("txtAddress"));
        txtAddress->setGeometry(QRect(270, 240, 141, 71));
        label_2 = new QLabel(BookRoomDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 120, 141, 21));
        label_2->setFont(font1);
        label_3 = new QLabel(BookRoomDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 160, 191, 21));
        label_3->setFont(font1);
        label_4 = new QLabel(BookRoomDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 240, 141, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(BookRoomDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 200, 141, 21));
        label_5->setFont(font1);
        txtIdProof = new QLineEdit(BookRoomDialog);
        txtIdProof->setObjectName(QString::fromUtf8("txtIdProof"));
        txtIdProof->setGeometry(QRect(270, 200, 141, 20));
        btnSubmit = new QPushButton(BookRoomDialog);
        btnSubmit->setObjectName(QString::fromUtf8("btnSubmit"));
        btnSubmit->setGeometry(QRect(60, 330, 91, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Pristina"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        btnSubmit->setFont(font3);
        btnCancel = new QPushButton(BookRoomDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(320, 330, 91, 31));
        btnCancel->setFont(font3);
        label_6 = new QLabel(BookRoomDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(130, 20, 241, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Poor Richard"));
        font4.setPointSize(20);
        label_6->setFont(font4);

        retranslateUi(BookRoomDialog);

        QMetaObject::connectSlotsByName(BookRoomDialog);
    } // setupUi

    void retranslateUi(QDialog *BookRoomDialog)
    {
        BookRoomDialog->setWindowTitle(QApplication::translate("BookRoomDialog", "Reserver une chambre", nullptr));
        label->setText(QApplication::translate("BookRoomDialog", "Selectionner une chambre", nullptr));
        label_2->setText(QApplication::translate("BookRoomDialog", "Votre Nom", nullptr));
        label_3->setText(QApplication::translate("BookRoomDialog", "Telephone", nullptr));
        label_4->setText(QApplication::translate("BookRoomDialog", "Adresse", nullptr));
        label_5->setText(QApplication::translate("BookRoomDialog", "ID", nullptr));
        btnSubmit->setText(QApplication::translate("BookRoomDialog", "Envoyer", nullptr));
        btnCancel->setText(QApplication::translate("BookRoomDialog", "Annuler", nullptr));
        label_6->setText(QApplication::translate("BookRoomDialog", "RESERVATION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookRoomDialog: public Ui_BookRoomDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKROOMDIALOG_H
