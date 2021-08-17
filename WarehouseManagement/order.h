#ifndef ORDER_H
#define ORDER_H

#include "QDateTime"
#include "QString"
#include "QList"
#include "item.h"

class Order
{
    public:
        Order();

        int getOrderId() const;
        void setOrderId(const int &value);

        bool getOrderStatus() const;
        void setOrderStatus(const bool &value);

        bool getOrderReady() const;
        void setOrderReady(const bool &value);

        QDateTime getTimeCreated() const;
        void setTimeCreated(const QDateTime &value);

        int getItemQuantity() const;
        void setItemQuantity(const int &value);

        //not being used
        QList<Item> getItemList();
        void setItemList(const QList<Item> &value);


    private:
        int orderId;

        QDateTime timeStamp;

        bool orderStatus;

        bool orderReady;

        int quantity;

        //not being used
        QList<Item> itemList;

};

#endif // ORDER_H
