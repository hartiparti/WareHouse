#ifndef NEWORDERDIALOG_H
#define NEWORDERDIALOG_H

#include <QDialog>
#include <QListWidget>
#include <itemservice.h>
#include <QDir>
#include <orderservice.h>

namespace Ui {
class NewOrderDialog;
}

class NewOrderDialog : public QDialog
{
    Q_OBJECT

    public:
        explicit NewOrderDialog(QWidget *parent = nullptr);

        ~NewOrderDialog();

        void createNewOrder(QListWidget* &aList);

        QString getNewestOrderId();


    protected:
         void itemClicked(QListWidgetItem *item);

    protected slots:
          void on_buttonAddToOrder_clicked();

    private:
        Ui::NewOrderDialog *ui;

};

#endif // NEWORDERDIALOG_H
