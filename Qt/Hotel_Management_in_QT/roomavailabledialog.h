#ifndef ROOMAVAILABLEWINDOW_H
#define ROOMAVAILABLEWINDOW_H
#include <QDialog>
#include <QDebug>
#include <hotel.h>

#include <QCoreApplication>
#include <QtSql>

namespace Ui {
class RoomAvailableDialog;
}

class RoomAvailableDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RoomAvailableDialog(QWidget *parent = nullptr);
    ~RoomAvailableDialog();
    void readData();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RoomAvailableDialog *ui;
};
#endif // ROOMAVAILABLEWINDOW_H
