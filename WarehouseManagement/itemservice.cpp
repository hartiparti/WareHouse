#include "itemservice.h"
#include <QTableWidget>
ItemService::ItemService()
{
    Item item;

}

void ItemService::addItem(QString fileName, QString name, QString location, QString stockVar, QString heig, QString widt, QString image, QString description)
{
    Item item;
    item.setName(name);
    item.setLocation(location);
    item.setStock(stockVar.toInt());
    item.setHeight(heig.toInt());
    item.setWidth(widt.toInt());
    item.setImage(image);
    item.setDescription(description);

    JSONParser parser;
    int rowCount = parser.getItemCount(fileName);

    item.setItemId(rowCount);

    qDebug() << "setItemId" << rowCount;
    QDateTime UTC(QDateTime::currentDateTimeUtc());
    QDateTime local(UTC.toLocalTime());

    qDebug() << local;

    item.setTimeCreated(QDateTime::currentDateTimeUtc());
    parser.writeToInventory(fileName, item);

}

void ItemService::populateTable(QTableWidget* &tableWidgetItems, QString filename)
{
    tableWidgetItems->setHorizontalHeaderItem(0, new QTableWidgetItem("Id"));
    tableWidgetItems->setHorizontalHeaderItem(1, new QTableWidgetItem("Name"));
    tableWidgetItems->setHorizontalHeaderItem(2, new QTableWidgetItem("Stock"));
    tableWidgetItems->setHorizontalHeaderItem(3, new QTableWidgetItem("Location"));
    tableWidgetItems->setHorizontalHeaderItem(4, new QTableWidgetItem("Image"));
    tableWidgetItems->setHorizontalHeaderItem(5, new QTableWidgetItem("Created"));
    tableWidgetItems->setHorizontalHeaderItem(6, new QTableWidgetItem("Height"));
    tableWidgetItems->setHorizontalHeaderItem(7, new QTableWidgetItem("Width"));
    tableWidgetItems->setHorizontalHeaderItem(8, new QTableWidgetItem("Status"));

    JSONParser parser;
    QJsonDocument *m_jsonDoc;

    m_jsonDoc = parser.readJson(filename);

    qDebug() << m_jsonDoc->object();
    QJsonObject itemOject = m_jsonDoc->object();

    QJsonArray items = itemOject.find("items")->toArray();
    for(int i = 0; i < items.size(); i++)
    {
        QJsonObject obj = items[i].toObject();

        QString id = obj.find("itemId")->toString();

        QString name = obj.find("name")->toString();

        int inStock = obj.find("inStock")->toInt();

        QString location = obj.find("location")->toString();

        QString image = obj.find("image")->toString();

        QString description = obj.find("description")->toString();

        QString timeCreated = obj.find("timeCreated")->toString();

        int height = obj.find("height")->toInt();

        int width = obj.find("width")->toInt();

        bool SoldOut = obj.find("SoldOut")->toBool();

        qDebug() << "Id: " << id;
        qDebug() << "Name: " << name;
        qDebug() << "Stock: " << inStock;
        qDebug() << "location: " << location;
        qDebug() << "image: " << image;
        qDebug() << "description: " << description;
        qDebug() << "timeCreated: " << timeCreated;
        qDebug() << "height: " << height;
        qDebug() << "width: " << width;
        qDebug() << "SoldOut: " << SoldOut;
        qDebug() << "---";


        tableWidgetItems->insertRow(i);
        tableWidgetItems->setItem(i, 0, new QTableWidgetItem(id));
        tableWidgetItems->setItem(i, 1, new QTableWidgetItem(name));
        tableWidgetItems->setItem(i, 2, new QTableWidgetItem(QString::number(inStock)));
        tableWidgetItems->setItem(i, 3, new QTableWidgetItem(location));
        tableWidgetItems->setItem(i, 4, new QTableWidgetItem(image));
        tableWidgetItems->setItem(i, 5, new QTableWidgetItem(timeCreated));
        tableWidgetItems->setItem(i, 6, new QTableWidgetItem(QString::number(height)));
        tableWidgetItems->setItem(i, 7, new QTableWidgetItem(QString::number(width)));
        tableWidgetItems->setItem(i, 8, new QTableWidgetItem(QString::number(SoldOut)));


    }

    //Item item;
    qDebug() << items;

}



void ItemService::getAllItemsToList(QListWidget* &listAllItems)
{
    JSONParser parser;
    listAllItems->clear();

    QJsonArray itemsArray  = parser.getAllItemsArray();

    for(int i = 0; i < itemsArray.size(); i++)
    {    //qDebug() << i;
        QJsonObject itemsObject = itemsArray[i].toObject();
        listAllItems->addItem(itemsObject.find("itemId")->toString() + "          " + itemsObject.find("name")->toString());
    }

}

void ItemService::updateTotalStock(QString itemId, int currentStock)
{
    JSONParser parser;
    parser.updateStockFromId(itemId, currentStock);
}

void ItemService::getItemNameFromId(QString itemId, QString &nameItem)
{
    JSONParser parser;
    nameItem = parser.getItemNameFromId(itemId);
}

void ItemService::getDescriptionFromId(QString itemId, QString &description)
{
    JSONParser parser;
    description = parser.getItemDescription(itemId);

}
void ItemService::getWidthFromId(QString itemId, QString &w)
{
    JSONParser parser;
    w = QString::number(parser.getItemWidth(itemId));

}
void ItemService::getStockFromId(QString itemId, QString& stock)
{
    JSONParser parser;
    stock = QString::number(parser.getItemStock(itemId));
}

void ItemService::getHeightFromId(QString itemId, QString& h)
{

    JSONParser parser;
    h = QString::number(parser.getItemHeight(itemId));
}


void ItemService::getImageFromItemId(QString itemId, QString &image)
{
    JSONParser parser;
    //listAllItems->clear();
    image = parser.getImageFromId(itemId);

}

void ItemService::getAllItems(QTableWidget* &tableWidgetItems, QString filename)
{
    tableWidgetItems->clear();
    tableWidgetItems->clearContents();
    tableWidgetItems->setRowCount(0);
    populateTable(tableWidgetItems, filename);

}



