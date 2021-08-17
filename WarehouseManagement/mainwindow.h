#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "itemservice.h"
#include "orderservice.h"
#include "jsonparser.h"
#include "additemdialog.h"
#include "finalorderdialog.h"
#include "neworderdialog.h"
#include <QDebug>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);

        void intializeTable();

        void listAllItems();

        void viewAllItems(ItemService itemService);

        void viewAllOrders(OrderService orderService);

        QString getItemFile();
        void setItemFile(QString value);

        QString getOrderFile();
        void setOrderFile(QString value);

        QString getOrderRowKey() const;
        void setOrderRowKey(const QString &value);

        ~MainWindow();

    protected slots:
        void on_buttonInventory_clicked();

        void on_buttonOrders_clicked();

        void on_buttonNewItem_clicked();

        void on_buttonNewOrder_clicked();

        void on_buttonFinalOrder_clicked();

        void cellClicked(int iRow);

    private:
        Ui::MainWindow* ui;

        QJsonDocument* m_jsonDoc;

        QString itemFileInDir;

        QString orderFileInDir;

        JSONParser* parser;

        AddItemDialog* m_addItemDialog;

        FinalOrderDialog* m_finalOrderDialog;

        NewOrderDialog* m_newOrderDialog;

        QString rowKey;
};
#endif // MAINWINDOW_H
