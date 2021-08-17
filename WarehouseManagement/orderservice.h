#ifndef ORDERSERVICE_H
#define ORDERSERVICE_H

#include "order.h"
#include <QTableWidget>
#include <QTreeWidget>
#include "jsonparser.h"
#include <QDebug>
#include <QLineEdit>
#include <QDateTime>
#include "itemtree.h"
#include "item.h"
#include <QListWidget>

class OrderService
{
    public:
        OrderService();

        int getAllItemsCount(QString filename, QString orderId);

        int getAllOrdersCount();

        void getAllOrders(QTableWidget* &orderTableWidget, QString filename);

        void getAllItemsInOrder(QTreeWidget* &treeItemWidget, QString fname, QString orderId);

        void getItemsToList(QListWidget* &listItem, QString orderId, QString &image);

        void getImageFromItemId(QListWidget* &listItem, QString itemId, QString orderId, QString &image);

        void getClickedItem(QString orderId, QString itemId, QLineEdit* &lineEditItemId, QLineEdit* &lineEditName, QLineEdit* &lineEditLocation, QLineEdit* &lineEditOrdered);

        void markOrderAsReady(QString filename, QString rowKey, bool orderStatus);

        void createNewOrder(QString newOrderId, QListWidget* &aList);

        void populateTable(QTableWidget* &orderTableWidget, QString filename);

        void populateTree(QTreeWidget* &treeItemWidget, QString fname, QString orderId);

};

#endif // ORDERSERVICE_H



