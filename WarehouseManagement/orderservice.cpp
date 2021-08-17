#include "orderservice.h"

OrderService::OrderService()
{

}

void OrderService::populateTree(QTreeWidget* &treeItemWidget, QString fname, QString orderId)
{
    //read JSON;
    JSONParser parser;
    QJsonDocument *m_jsonDoc;
    m_jsonDoc = parser.readJson(fname);

    QJsonObject orderObject = m_jsonDoc->object();
    QJsonArray orders = orderObject.find("orders")->toArray();
    qDebug() << "Size is: " << orders.size();
    QJsonArray itemsArray;
    for(int i = 0; i < orders.size(); i++)
    {
          QJsonObject obj = orders[i].toObject();
          if(obj.find("orderId").value().toString() == orderId)
          {
              qDebug() << "Found!" << orderId;
              itemsArray = obj.find("items")->toArray();
              break;
          }

    }

    ItemTree itemTree;
    QTreeWidgetItem *treeItem = new QTreeWidgetItem(treeItemWidget);
    treeItem->setText(0, "Item");
    Item item;

    int itemKey = 1;
    qDebug() << "Size is: " << itemsArray.size();

    for(int i = 0; i < itemsArray.size(); i++)
    {
        qDebug() << "Id is: " << itemKey;
        QJsonObject itemObj = itemsArray[i].toObject();
        QString theKey = itemObj.find("itemId").value().toString();
        int itemId = itemObj.find("itemId").value().toInt();
        QString name = itemObj.find("name").value().toString();
        int stock = itemObj.find("inStock").value().toInt();
        QString location = itemObj.find("location").value().toString();
        int quantity = itemObj.find("quantity").value().toInt();
        item.setItemId(itemId);
        item.setName(name);
        item.setStock(stock);
        item.setLocation(location);
        //set, svo add
        //qDebug() << "Iam wuant" << quantity;
        itemTree.addTreeRoot(treeItem, theKey, quantity, item, "Item id:");
        itemKey = itemKey + 1;
    }

    qDebug() << "end of line!";


}

void OrderService::populateTable(QTableWidget* &orderTableWidget, QString filename)
{
    orderTableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("Id"));
    orderTableWidget->setHorizontalHeaderItem(1, new QTableWidgetItem("Created"));
    orderTableWidget->setHorizontalHeaderItem(2, new QTableWidgetItem("Status"));
    orderTableWidget->setHorizontalHeaderItem(3, new QTableWidgetItem("Items"));

    JSONParser parser;
    QJsonDocument *m_jsonDoc;
    m_jsonDoc = parser.readJson(filename);
    qDebug() << m_jsonDoc->object();
    QJsonObject orderObject = m_jsonDoc->object();
    QJsonArray orders = orderObject.find("orders")->toArray();
    QString orderStat = "0";
    int totalQuant = 0;
    for(int i = 0; i < orders.size(); i++)
    {
        QJsonObject obj = orders[i].toObject();
        QString id = obj.find("orderId")->toString();
        QString timeStamp = obj.find("timeStamp")->toString();

        bool orderReady = obj.find("orderReady")->toBool();
        if(orderReady == false)
        {
           orderStat = "NotReady";
        }
        else
        {
            orderStat = "Ready";
        }

        QJsonArray itemsArray = obj.find("items")->toArray();
        //QJsonObject itemsObject = itemsArray[i].toObject();
        //int itemsSize = itemsObject.find("quantity")->toInt();
        //qDebug() << "quantity " << itemsSize;
        //totalQuant = totalQuant + itemsSize;
        qDebug() << "Arr size: " << totalQuant;
        //QString orderStatus = obj.find("orderStatus")->toString();

        orderTableWidget->insertRow(i);
        orderTableWidget->setItem(i, 0, new QTableWidgetItem(id));
        orderTableWidget->setItem(i, 1, new QTableWidgetItem(timeStamp));
        orderTableWidget->setItem(i, 2, new QTableWidgetItem(orderStat));

        for(int j = 0; j < itemsArray.size(); j++)
        {
            QJsonObject itemsObject = itemsArray[j].toObject();
            //int itemsSize = itemsObject.find("quantity")->toInt();
            //qDebug() << "quantity " << itemsSize;

            int itemsSize = itemsObject.find("quantity")->toInt();
            totalQuant = totalQuant + itemsSize;
            qDebug() << "totalQuant: " << totalQuant;
            orderTableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(totalQuant)));


        }
        totalQuant = 0;

        //orderTableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(totalQuant)));
        //totalQuant = 0;

    }

    //Item item;
    qDebug() << orders;

}

void OrderService::getAllItemsInOrder(QTreeWidget* &treeItemWidget, QString fname, QString orderId)
{
    treeItemWidget->clear();
    treeItemWidget->setColumnCount(1);
    treeItemWidget->setColumnWidth(1, 6);
    treeItemWidget->setColumnWidth(2, 2);
    populateTree(treeItemWidget, fname, orderId);


}

void OrderService::getAllOrders(QTableWidget* &orderTableWidget, QString filename)
{
    JSONParser parser;
    int orderCount = parser.getOrderCount(filename);
    qDebug() << orderCount;
    orderTableWidget->clear();
    orderTableWidget->clearContents();
    orderTableWidget->setRowCount(0);
    populateTable(orderTableWidget, filename);
}

void OrderService::getItemsToList(QListWidget* &listItem, QString orderId, QString &image)
{

    JSONParser parser;
    listItem->clear();
    QJsonArray itemsArray  = parser.getItemsArrayFromOrder(orderId);
    for(int i = 0; i < itemsArray.size(); i++)
    {    //qDebug() << i;
         QJsonObject itemsObject = itemsArray[i].toObject();
         listItem->addItem(itemsObject.find("itemId")->toString() + "          " + itemsObject.find("name")->toString() + "         "  + itemsObject.find("location")->toString() );
         image = itemsObject.find("image")->toString();
    }



}
void OrderService::getClickedItem(QString orderId, QString itemId, QLineEdit* &lineEditItemId, QLineEdit* &lineEditName, QLineEdit* &lineEditLocation, QLineEdit* &lineEditOrdered)
{

    JSONParser parser;
    QJsonArray itemsArray  = parser.getItemsArrayFromOrder(orderId);
    for(int i = 0; i < itemsArray.size(); i++)
    {    //qDebug() << i;
         QJsonObject itemsObject = itemsArray[i].toObject();
         if(itemsObject.find("itemId")->toString() == itemId)
         {
             lineEditItemId->setText(itemId);
             lineEditName->setText(itemsObject.find("name")->toString());
             lineEditLocation->setText(itemsObject.find("location")->toString());
             lineEditOrdered->setText(QString::number(itemsObject.find("quantity")->toInt()));

             break;
         }

    }

}

void OrderService::getImageFromItemId(QListWidget* &listItem, QString itemId, QString orderId, QString &image)
{

    JSONParser parser;
    listItem->clear();
    QJsonArray itemsArray  = parser.getItemsArrayFromOrder(orderId);
    for(int i = 0; i < itemsArray.size(); i++)
    {    qDebug() << i;
         QJsonObject itemsObject = itemsArray[i].toObject();
         if(itemsObject.find("itemId")->toString() == itemId)
         {
             image = itemsObject.find("image")->toString();
             break;
         }

    }

}

void OrderService::markOrderAsReady(QString filename, QString rowKey, bool orderStatus)
{

    JSONParser parser;
    QJsonObject order = parser.getOrderStatus(rowKey);
    bool orderReady = order.find("orderReady")->toBool();
    qDebug() << "check first" << orderReady;
    parser.markOrder(filename, rowKey, orderStatus);
    orderReady = order.find("orderReady")->toBool();
    qDebug() << "check second " << orderReady;
}



int OrderService::getAllOrdersCount()
{
    JSONParser parser;
    int retVal = parser.getOrderCount("orders.json");
    return retVal;
}

void OrderService::createNewOrder(QString newOrderId, QListWidget* &aList)
{
    JSONParser parser;
    QJsonDocument *m_jsonDoc;
    m_jsonDoc = parser.readJson("orders.json");
    QJsonObject orderObject = m_jsonDoc->object();
    QJsonArray orders = orderObject.find("orders")->toArray();
    QDateTime UTC(QDateTime::currentDateTimeUtc());
    QDateTime local(UTC.toLocalTime());
    QJsonObject newOrder;
    newOrder.insert("orderId", newOrderId);
    newOrder.insert("orderReady", false);
    newOrder.insert("orderStatus", "new");
    newOrder.insert("timeStamp", local.toString());

    QJsonArray newItems;
    QJsonObject appendToArr;

    for(int i = 0; i < aList->count(); i++)
    {
        QString orgString = aList->item(i)->text();
        qDebug() << "Keyid" << orgString;
        QString itemId = orgString.split(" ").at(0);
        QString quantity = orgString.split(" ").at(1);
        QString itemName = parser.getItemNameFromId(itemId);
        QString description = parser.getItemDescription(itemId);
        QString image  = parser.getImageFromId(itemId);
        QString location = parser.getLocationFromId(itemId);
        int w = parser.getItemHeight(itemId);
        int h = parser.getItemWidth(itemId);

        QJsonObject itemIdObj;
        itemIdObj.insert("itemId", itemId);
        itemIdObj.insert("name", itemName);
        itemIdObj.insert("quantity", quantity.toInt());
        itemIdObj.insert("description", description);
        itemIdObj.insert("image", image);
        itemIdObj.insert("location", location);
        itemIdObj.insert("width", w);
        itemIdObj.insert("height", h);



        qDebug() << itemId;
        qDebug() << itemName;
        qDebug() << description;
        qDebug() << image;
        qDebug() << location;
        qDebug() << w;
        qDebug() << h;
        newItems.append(itemIdObj);



    }

    newOrder.insert("items", newItems);
    orders.append(newOrder);
    qDebug() << orders;



    QJsonObject newObject;
    newObject.insert("orders", orders);
    QJsonDocument newDoc(newObject);
    m_jsonDoc->swap(newDoc);
    parser.writeJson(m_jsonDoc, "orders.json");

}


int OrderService::getAllItemsCount(QString filename, QString orderId)
{
    JSONParser parser;
    QJsonDocument *m_jsonDoc;
    m_jsonDoc = parser.readJson(filename);
    //qDebug() << m_jsonDoc->object();
    QJsonObject orderObject = m_jsonDoc->object();
    QJsonArray orders = orderObject.find("orders")->toArray();
    int totalQuant = 0;

    QJsonArray itemsArray;
    for(int i = 0; i < orders.size(); i++)
    {
        QJsonObject obj = orders[i].toObject();
        if(obj.find("orderId").value().toString() == orderId)
        {
            qDebug() << "Found!" << orderId;
            itemsArray = obj.find("items")->toArray();
            break;
        }



        //orderTableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(totalQuant)));
        //totalQuant = 0;

    }

    for(int j = 0; j < itemsArray.size(); j++)
    {
        QJsonObject itemsObject = itemsArray[j].toObject();
        int itemsSize = itemsObject.find("quantity")->toInt();
        totalQuant = totalQuant + itemsSize;
        //qDebug() << "totalQuant: " << totalQuant;


    }

    //Item item;
    //qDebug() << totalQuant;

    return totalQuant;

}

