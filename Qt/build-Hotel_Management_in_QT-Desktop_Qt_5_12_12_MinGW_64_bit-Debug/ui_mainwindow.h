/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *imgLabel;
    QPushButton *btnRoomBooking;
    QPushButton *btnRoomCheckout;
    QPushButton *btnCheckAvailability;
    QPushButton *bntTransaction;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 500);
        MainWindow->setMinimumSize(QSize(800, 500));
        MainWindow->setMaximumSize(QSize(800, 500));
        QFont font;
        font.setKerning(false);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        imgLabel = new QLabel(centralWidget);
        imgLabel->setObjectName(QString::fromUtf8("imgLabel"));
        imgLabel->setGeometry(QRect(0, 0, 801, 501));
        QPalette palette;
        QBrush brush(QColor(116, 65, 50, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        imgLabel->setPalette(palette);
        btnRoomBooking = new QPushButton(centralWidget);
        btnRoomBooking->setObjectName(QString::fromUtf8("btnRoomBooking"));
        btnRoomBooking->setGeometry(QRect(100, 130, 281, 70));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        btnRoomBooking->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Pristina"));
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        font1.setKerning(false);
        btnRoomBooking->setFont(font1);
        btnRoomBooking->setCursor(QCursor(Qt::PointingHandCursor));
        btnRoomBooking->setMouseTracking(false);
        btnRoomBooking->setTabletTracking(false);
        btnRoomBooking->setAutoDefault(true);
        btnRoomBooking->setFlat(false);
        btnRoomCheckout = new QPushButton(centralWidget);
        btnRoomCheckout->setObjectName(QString::fromUtf8("btnRoomCheckout"));
        btnRoomCheckout->setGeometry(QRect(430, 130, 281, 70));
        QPalette palette2;
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        QBrush brush2(QColor(0, 0, 0, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        btnRoomCheckout->setPalette(palette2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Pristina"));
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setKerning(false);
        btnRoomCheckout->setFont(font2);
        btnRoomCheckout->setCursor(QCursor(Qt::PointingHandCursor));
        btnRoomCheckout->setFlat(false);
        btnCheckAvailability = new QPushButton(centralWidget);
        btnCheckAvailability->setObjectName(QString::fromUtf8("btnCheckAvailability"));
        btnCheckAvailability->setGeometry(QRect(100, 300, 281, 70));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        btnCheckAvailability->setPalette(palette3);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Pristina"));
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        font3.setKerning(false);
        font3.setStyleStrategy(QFont::PreferAntialias);
        btnCheckAvailability->setFont(font3);
        btnCheckAvailability->setCursor(QCursor(Qt::PointingHandCursor));
        btnCheckAvailability->setAutoDefault(true);
        btnCheckAvailability->setFlat(false);
        bntTransaction = new QPushButton(centralWidget);
        bntTransaction->setObjectName(QString::fromUtf8("bntTransaction"));
        bntTransaction->setGeometry(QRect(430, 300, 281, 70));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush3(QColor(255, 251, 253, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush1);
        QBrush brush4(QColor(1, 3, 1, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        QBrush brush5(QColor(255, 255, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush5);
        QBrush brush6(QColor(215, 158, 126, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        QBrush brush7(QColor(255, 253, 221, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        QBrush brush8(QColor(0, 120, 215, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        bntTransaction->setPalette(palette4);
        bntTransaction->setFont(font2);
        bntTransaction->setCursor(QCursor(Qt::PointingHandCursor));
        bntTransaction->setAutoDefault(true);
        bntTransaction->setFlat(false);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        btnRoomBooking->setDefault(true);
        btnRoomCheckout->setDefault(true);
        btnCheckAvailability->setDefault(true);
        bntTransaction->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion D'Hotel", nullptr));
        imgLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        btnRoomBooking->setText(QApplication::translate("MainWindow", "R\303\251servation De Chambre", nullptr));
        btnRoomCheckout->setText(QApplication::translate("MainWindow", "Annuler R\303\251servation", nullptr));
        btnCheckAvailability->setText(QApplication::translate("MainWindow", "Voir Les Disponibilit\303\251s", nullptr));
#ifndef QT_NO_TOOLTIP
        bntTransaction->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        bntTransaction->setText(QApplication::translate("MainWindow", "Transactions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
