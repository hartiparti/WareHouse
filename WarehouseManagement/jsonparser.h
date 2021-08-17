#ifndef JSONPARSER_H
#define JSONPARSER_H

#include <QString>
#include <QFile>
#include <QDebug>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <item.h>

class JSONParser
{
    public:
        JSONParser();

        QJsonDocument* readJson(QString fname);

        int getItemCount(QString fname);

        int getOrderCount(QString fname);

        QJsonArray getItemsArrayFromOrder(QString orderId);

        QJsonArray getAllItemsArray();

        QJsonObject getOrderStatus(QString orderId);

        QString getImageFromId(QString itemId);

        QString getItemDescription(QString itemId);

        QString getLocationFromId(QString itemId);

        int getItemWidth(QString itemId);

        int getItemHeight(QString itemId);

        int getItemStock(QString itemId);

        QString getItemNameFromId(QString itemId);

        void writeJson(QJsonDocument* &m_jsonDoc, QString fname);

        void writeToInventory(QString fileName, Item item);

        void updateStockFromId(QString itemId, int newStock);

        void markOrder(QString fileName, QString rowKey, bool orderStatus);
};

#endif // JSONPARSER_H
