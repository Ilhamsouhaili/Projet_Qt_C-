/********************************************************************************
** Form generated from reading UI file 'roomavailabledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMAVAILABLEDIALOG_H
#define UI_ROOMAVAILABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_RoomAvailableDialog
{
public:
    QGroupBox *groupBox;
    QLabel *lbl101;
    QLabel *lbl102;
    QLabel *lbl103;
    QLabel *lbl104;
    QLabel *lbl105;
    QLabel *lbl204;
    QLabel *lbl205;
    QLabel *lbl203;
    QLabel *lbl201;
    QLabel *lbl202;
    QLabel *lblinfo;

    void setupUi(QDialog *RoomAvailableDialog)
    {
        if (RoomAvailableDialog->objectName().isEmpty())
            RoomAvailableDialog->setObjectName(QString::fromUtf8("RoomAvailableDialog"));
        RoomAvailableDialog->setWindowModality(Qt::WindowModal);
        RoomAvailableDialog->setEnabled(false);
        RoomAvailableDialog->resize(500, 400);
        RoomAvailableDialog->setAutoFillBackground(true);
        groupBox = new QGroupBox(RoomAvailableDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(70, 70, 311, 151));
        QFont font;
        font.setFamily(QString::fromUtf8("Pristina"));
        font.setPointSize(15);
        groupBox->setFont(font);
        lbl101 = new QLabel(groupBox);
        lbl101->setObjectName(QString::fromUtf8("lbl101"));
        lbl101->setGeometry(QRect(10, 40, 50, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Pristina"));
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        lbl101->setFont(font1);
        lbl101->setTextFormat(Qt::RichText);
        lbl101->setScaledContents(true);
        lbl101->setAlignment(Qt::AlignCenter);
        lbl102 = new QLabel(groupBox);
        lbl102->setObjectName(QString::fromUtf8("lbl102"));
        lbl102->setGeometry(QRect(70, 40, 50, 50));
        lbl102->setFont(font1);
        lbl102->setScaledContents(true);
        lbl102->setAlignment(Qt::AlignCenter);
        lbl103 = new QLabel(groupBox);
        lbl103->setObjectName(QString::fromUtf8("lbl103"));
        lbl103->setGeometry(QRect(130, 40, 50, 50));
        lbl103->setFont(font1);
        lbl103->setScaledContents(true);
        lbl103->setAlignment(Qt::AlignCenter);
        lbl104 = new QLabel(groupBox);
        lbl104->setObjectName(QString::fromUtf8("lbl104"));
        lbl104->setGeometry(QRect(190, 40, 50, 50));
        lbl104->setFont(font1);
        lbl104->setScaledContents(true);
        lbl104->setAlignment(Qt::AlignCenter);
        lbl105 = new QLabel(groupBox);
        lbl105->setObjectName(QString::fromUtf8("lbl105"));
        lbl105->setGeometry(QRect(250, 40, 50, 50));
        lbl105->setFont(font1);
        lbl105->setScaledContents(true);
        lbl105->setAlignment(Qt::AlignCenter);
        lbl204 = new QLabel(groupBox);
        lbl204->setObjectName(QString::fromUtf8("lbl204"));
        lbl204->setGeometry(QRect(190, 90, 50, 50));
        lbl204->setFont(font1);
        lbl204->setScaledContents(true);
        lbl204->setAlignment(Qt::AlignCenter);
        lbl205 = new QLabel(groupBox);
        lbl205->setObjectName(QString::fromUtf8("lbl205"));
        lbl205->setGeometry(QRect(250, 90, 50, 50));
        lbl205->setFont(font1);
        lbl205->setScaledContents(true);
        lbl205->setAlignment(Qt::AlignCenter);
        lbl203 = new QLabel(groupBox);
        lbl203->setObjectName(QString::fromUtf8("lbl203"));
        lbl203->setGeometry(QRect(130, 90, 50, 50));
        lbl203->setFont(font1);
        lbl203->setScaledContents(true);
        lbl203->setAlignment(Qt::AlignCenter);
        lbl201 = new QLabel(groupBox);
        lbl201->setObjectName(QString::fromUtf8("lbl201"));
        lbl201->setGeometry(QRect(10, 90, 50, 50));
        lbl201->setFont(font1);
        lbl201->setScaledContents(true);
        lbl201->setAlignment(Qt::AlignCenter);
        lbl202 = new QLabel(groupBox);
        lbl202->setObjectName(QString::fromUtf8("lbl202"));
        lbl202->setGeometry(QRect(70, 90, 50, 50));
        lbl202->setFont(font1);
        lbl202->setScaledContents(true);
        lbl202->setAlignment(Qt::AlignCenter);
        lblinfo = new QLabel(RoomAvailableDialog);
        lblinfo->setObjectName(QString::fromUtf8("lblinfo"));
        lblinfo->setGeometry(QRect(80, 250, 121, 51));
        lblinfo->setFont(font);

        retranslateUi(RoomAvailableDialog);

        QMetaObject::connectSlotsByName(RoomAvailableDialog);
    } // setupUi

    void retranslateUi(QDialog *RoomAvailableDialog)
    {
        RoomAvailableDialog->setWindowTitle(QApplication::translate("RoomAvailableDialog", "Disponibilites", nullptr));
        groupBox->setTitle(QApplication::translate("RoomAvailableDialog", "Les Chambres Disponible", nullptr));
        lbl101->setText(QApplication::translate("RoomAvailableDialog", "101", nullptr));
        lbl102->setText(QApplication::translate("RoomAvailableDialog", "102", nullptr));
        lbl103->setText(QApplication::translate("RoomAvailableDialog", "103", nullptr));
        lbl104->setText(QApplication::translate("RoomAvailableDialog", "104", nullptr));
        lbl105->setText(QApplication::translate("RoomAvailableDialog", "105", nullptr));
        lbl204->setText(QApplication::translate("RoomAvailableDialog", "204", nullptr));
        lbl205->setText(QApplication::translate("RoomAvailableDialog", "205", nullptr));
        lbl203->setText(QApplication::translate("RoomAvailableDialog", "203", nullptr));
        lbl201->setText(QApplication::translate("RoomAvailableDialog", "201", nullptr));
        lbl202->setText(QApplication::translate("RoomAvailableDialog", "202", nullptr));
        lblinfo->setText(QApplication::translate("RoomAvailableDialog", "   Disponible", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoomAvailableDialog: public Ui_RoomAvailableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMAVAILABLEDIALOG_H
