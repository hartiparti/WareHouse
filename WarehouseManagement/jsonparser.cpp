#include "jsonparser.h"

JSONParser::JSONParser()
{

}

QJsonDocument* JSONParser::readJson(QString fname)
{
    QString val;

    QFile file(fname);

    file.open(QIODevice::ReadOnly | QIODevice::Text);

    val = file.readAll();

    file.close();

    QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());

    return new QJsonDocument(d);
}

void JSONParser::writeJson(QJsonDocument* &m_jsonDoc, QString fname)
{
    QString val;

    QFile file(fname);

    //val = m_jsonDoc;
    file.open(QIODevice::WriteOnly | QIODevice::Text);

    file.write(m_jsonDoc->toJson());

    file.close();

}

void JSONParser::markOrder(QString fileName, QString rowKey, bool orderStatus)
{
    QJsonDocument *m_jsonDoc;
    m_jsonDoc = readJson(fileName);

    QJsonObject orderObject = m_jsonDoc->object();

    QJsonArray orders = orderObject.find("orders")->toArray();

    QJsonValue val2 = orderStatus;
    //orderObj.insert("orderReady", val.toBool());

    int key = 0;

    for(int i = 0; i < orders.size(); i++)
    {
       QJsonObject iterRate = orders[i].toObject();
       if(iterRate.find("orderId").value().toString() == rowKey)
       {
          qDebug() << "keys" << iterRate.keys();
          iterRate.remove("orderReady");
          qDebug() << "keys" << iterRate.keys();
          iterRate.insert("orderReady", orderStatus);
          qDebug() << "keys" << iterRate.keys();
          qDebug() << "value: " << iterRate.find("orderReady").value();
          orders[i] = iterRate;

       }

    }


    qDebug() << key;
    //qDebug() << orders[key].toObject().find("orderReady").value();

    QJsonObject newObject;
    newObject.insert("orders", orders);

    QJsonDocument newDoc(newObject);

    m_jsonDoc->swap(newDoc);

    writeJson(m_jsonDoc, fileName);
    //qDebug() << orderObj;
}

void JSONParser::updateStockFromId(QString itemId, int newStock)
{
    qDebug() << newStock;

    QJsonDocument *m_jsonDoc;
    m_jsonDoc = readJson("items.json");

    QJsonObject itemObject = m_jsonDoc->object();
    QJsonArray items = itemObject.find("items")->toArray();
    QJsonValue newVal = newStock;

    //orderObj.insert("orderReady", val.toBool());
    int oldStock = 0;

    for(int i = 0; i < items.size(); i++)
    {
        QJsonObject iterRate = items[i].toObject();

        if(iterRate.find("itemId").value().toString() == itemId)
        {
            qDebug() << "keys" << iterRate.keys();
            oldStock = iterRate.find("inStock").value().toInt();

            qDebug() << "oldstock: " << oldStock;

            oldStock = oldStock - newStock;

            qDebug() << "old - new " << oldStock;

            iterRate.remove("inStock");

            qDebug() << "keys" << iterRate.keys();


            iterRate.insert("inStock", oldStock);

            qDebug() << "keys" << iterRate.keys();

            qDebug() << "value: " << iterRate.find("orderReady").value();

            items[i] = iterRate;

       }

    }

    QJsonObject newObject;

    newObject.insert("items", items);

    QJsonDocument newDoc(newObject);

    m_jsonDoc->swap(newDoc);
    writeJson(m_jsonDoc, "items.json");

}


void JSONParser::writeToInventory(QString fileName, Item item)
{
    QJsonDocument *m_jsonDoc;
    m_jsonDoc = readJson(fileName);
    QJsonObject objs = m_jsonDoc->object();

    //int index = getItemCount(fileName);

    QJsonObject theObj;
    //qDebug() << "index: " << index;

    int itID = item.getItemId() + 1;
    QJsonValue itemId = QString::number(itID);
    qDebug() << "index: " << itID;
    theObj.insert("itemId", itemId);

    QJsonValue name = item.getName();
    theObj.insert ("name", name);

    QJsonValue inStock = item.getStock();
    theObj.insert ("inStock", inStock);

    QJsonValue location = item.getLocation();
    theObj.insert ("location", location);

    QJsonValue image = item.getImage();
    theObj.insert ("image", image);

    QJsonValue descript = item.getDescription();
    theObj.insert ("description", descript);

    QJsonValue heig = item.getHeight();
    theObj.insert ("height", heig);

    QJsonValue wi  = item.getWidth();
    theObj.insert("width", wi);

    QJsonValue time = item.getTimeCreated().toLocalTime().toString();
    theObj.insert("timeCreated", time);

    QJsonValue sold = item.getSoldOut();
    theObj.insert("SoldOut", sold);

    //qDebug() << m_jsonDoc->object().find("items")->toArray();


    QJsonArray objs2 = m_jsonDoc->object().find("items").value().toArray();
    objs2.append(theObj);
    //qDebug() << objs2.size();
    m_jsonDoc->object().find("items").value().toArray().append(theObj);

    QJsonObject mainObj;
    mainObj.insert("items", objs2);

    QJsonDocument newDoc(mainObj);
    m_jsonDoc->swap(newDoc);
    //qDebug() <<  m_jsonDoc->object().find("items")->toArray().size();
    writeJson(m_jsonDoc, fileName);

}
int JSONParser::getItemCount(QString fname)
{
    //QJsonDocument* docs = m_jsonDoc;
    QJsonDocument *m_jsonDoc;
    m_jsonDoc = readJson(fname);

    qDebug() <<m_jsonDoc;

    QJsonObject objs = m_jsonDoc->object();
    QJsonArray itemsArray = objs.find("items")->toArray();

    qDebug() <<    itemsArray.size();

    return itemsArray.size();
}

QJsonArray JSONParser::getItemsArrayFromOrder(QString orderId)
{
    JSONParser parser;
    QJsonDocument *m_jsonDoc;
    m_jsonDoc = parser.readJson("orders.json");
    //ebug() << m_jsonDoc->object();

    QJsonObject orderObject = m_jsonDoc->object();
    QJsonArray orders = orderObject.find("orders")->toArray();
    QJsonArray itemsArray;

    for(int i = 0; i < orders.size(); i++)
    {
        QJsonObject obj = orders[i].toObject();
        if(obj.find("orderId").value().toString() == orderId)
        {
            //qDebug() << "Found!" << orderId;
            itemsArray = obj.find("items")->toArray();
            break;
        }

    }

    return itemsArray;
}

int JSONParser::getOrderCount(QString fname)
{
    //QJsonDocument* docs = m_jsonDoc;
    QJsonDocument *m_jsonDoc;
    m_jsonDoc = readJson(fname);

    qDebug() <<m_jsonDoc;

    QJsonObject objs = m_jsonDoc->object();
    QJsonArray itemsArray = objs.find("orders")->toArray();

    return itemsArray.size();
}

QJsonObject JSONParser::getOrderStatus(QString orderId)
{
    JSONParser parser;
    QJsonDocument *m_jsonDoc;
    m_jsonDoc = parser.readJson("orders.json");

    QJsonObject orderObject = m_jsonDoc->object();
    QJsonArray orders = orderObject.find("orders")->toArray();
    QJsonObject orderStatus;

    for(int i = 0; i < orders.size(); i++)
    {
        QJsonObject obj = orders[i].toObject();

        if(obj.find("orderId").value().toString() == orderId)
        {
            orderStatus = obj.find("orderReady")->toObject();
            break;
        }

     }

     return orderStatus;
}
QString JSONParser::getItemNameFromId(QString itemId)
{
    JSONParser parser;
    QJsonDocument *m_jsonDoc;
    m_jsonDoc = parser.readJson("items.json");

    QJsonObject itemObject = m_jsonDoc->object();
    QJsonArray items = itemObject.find("items")->toArray();
    QString itemName;

    for(int i = 0; i < items.size(); i++)
    {
        QJsonObject obj = items[i].toObject();
        if(obj.find("itemId").value().toString() == itemId)
        {
            itemName = items[i].toObject().find("name").value().toString();
            qDebug() << itemName;
            break;
        }

     }

     return itemName;
}

QString JSONParser::getImageFromId(QString itemId)
{
    JSONParser parser;
    QJsonDocument *m_jsonDoc;
    m_jsonDoc = parser.readJson("items.json");

    QJsonObject itemObject = m_jsonDoc->object();
    QJsonArray items = itemObject.find("items")->toArray();
    QString itemImage;

    for(int i = 0; i < items.size(); i++)
    {
        QJsonObject obj = items[i].toObject();
        if(obj.find("itemId").value().toString() == itemId)
        {
            itemImage = items[i].toObject().find("image").value().toString();
            qDebug() << itemImage;
            break;
        }

     }

     return itemImage;
}

QString JSONParser::getItemDescription(QString itemId)
{
    JSONParser parser;
    QJsonDocument *m_jsonDoc;
    m_jsonDoc = parser.readJson("items.json");

    QJsonObject itemObject = m_jsonDoc->object();
    QJsonArray items = itemObject.find("items")->toArray();
    QString itemH;

    for(int i = 0; i < items.size(); i++)
    {
        QJsonObject obj = items[i].toObject();
        if(obj.find("itemId").value().toString() == itemId)
        {
            itemH = items[i].toObject().find("description").value().toString();
            qDebug() << itemH;
            break;
        }

     }

     return itemH;
}

int JSONParser::getItemHeight(QString itemId)
{
    JSONParser parser;
    QJsonDocument *m_jsonDoc;
    m_jsonDoc = parser.readJson("items.json");

    QJsonObject itemObject = m_jsonDoc->object();
    QJsonArray items = itemObject.find("items")->toArray();
    int itemH = 0;

    for(int i = 0; i < items.size(); i++)
    {
       QJsonObject obj = items[i].toObject();

       if(obj.find("itemId").value().toString() == itemId)
       {
            itemH = items[i].toObject().find("height").value().toInt();
            qDebug() << itemH;
            break;
       }

     }

     return itemH;
}

QString JSONParser::getLocationFromId(QString itemId)
{
    JSONParser parser;
    QJsonDocument *m_jsonDoc;
    m_jsonDoc = parser.readJson("items.json");

    QJsonObject itemObject = m_jsonDoc->object();
    QJsonArray items = itemObject.find("items")->toArray();
    QString item = "null";

    for(int i = 0; i < items.size(); i++)
    {
       QJsonObject obj = items[i].toObject();

       if(obj.find("itemId").value().toString() == itemId)
       {
           item = items[i].toObject().find("location").value().toString();
           qDebug() << item;
           break;
       }

    }

    return item;
}

int JSONParser::getItemWidth(QString itemId)
{
    JSONParser parser;
    QJsonDocument *m_jsonDoc;
    m_jsonDoc = parser.readJson("items.json");

    QJsonObject itemObject = m_jsonDoc->object();
    QJsonArray items = itemObject.find("items")->toArray();
    int item = 0;

    for(int i = 0; i < items.size(); i++)
    {
       QJsonObject obj = items[i].toObject();
       if(obj.find("itemId").value().toString() == itemId)
         {
            item = items[i].toObject().find("width").value().toInt();
            qDebug() << item;
            break;
         }

     }

     return item;
}

int JSONParser::getItemStock(QString itemId)
{
    JSONParser parser;
    QJsonDocument *m_jsonDoc;
    m_jsonDoc = parser.readJson("items.json");

    QJsonObject itemObject = m_jsonDoc->object();
    QJsonArray items = itemObject.find("items")->toArray();
    int item = 0;

    for(int i = 0; i < items.size(); i++)
    {
        QJsonObject obj = items[i].toObject();

        if(obj.find("itemId").value().toString() == itemId)
        {
            item = items[i].toObject().find("inStock").value().toInt();
            qDebug() << item;
            break;
        }
     }

     return item;
}

QJsonArray JSONParser::getAllItemsArray()
{
    JSONParser parser;
    QJsonDocument *m_jsonDoc;

    QJsonArray Allitems;

    m_jsonDoc = parser.readJson("items.json");

    QJsonObject itemObject = m_jsonDoc->object();

    Allitems = itemObject.find("items")->toArray();

    return Allitems;
}

