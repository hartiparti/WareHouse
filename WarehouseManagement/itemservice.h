#ifndef ITEMSERVICE_H
#define ITEMSERVICE_H

#include "item.h"
#include <QTableWidget>
#include <QListWidget>
#include "jsonparser.h"

class ItemService
{
    public:
        ItemService();

        void getAllItems(QTableWidget* &tableWidgetItems, QString filename);

        void getAllItemsToList(QListWidget* &listAllItems);

        void getImageFromItemId(QString itemId, QString &image);

        void getItemNameFromId(QString itemId, QString &nameItem);

        void getDescriptionFromId(QString itemId, QString &description);

        void getWidthFromId(QString itemId, QString &w);

        void getStockFromId(QString itemId, QString& stock);

        void getHeightFromId(QString itemId, QString& h);

        void populateTable(QTableWidget* &tableWidgetItems, QString filename);

        void addItem(QString fileName, QString name, QString location, QString stockVar, QString heig, QString widt, QString image, QString description);

        void updateTotalStock(QString itemID, int currentStock);


    private:

};

#endif // ITEMSERVICE_H
