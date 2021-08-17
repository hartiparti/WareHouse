#include "order.h"

Order::Order()
{

}

int Order::getOrderId() const
{
    return orderId;
}

void Order:: setOrderId(const int &value)
{
   orderId = value;
}

int Order::getItemQuantity() const
{
   return quantity;
}
void Order::setItemQuantity(const int &value)
{
    quantity = value;
}

bool Order::getOrderStatus() const
{
    return orderStatus;
}
void Order::setOrderStatus(const bool &value)
{
    orderStatus = value;
}

bool Order::getOrderReady() const
{
    return orderReady;
}
void Order::setOrderReady(const bool &value)
{
    orderReady = value;
}

QDateTime Order::getTimeCreated() const
{
    return timeStamp;
}
void Order::setTimeCreated(const QDateTime &value)
{
    timeStamp = value;
}

QList<Item> Order::getItemList()
{
    return itemList;
}

void Order::setItemList(const QList<Item> &value)
{
    itemList = value;
}
