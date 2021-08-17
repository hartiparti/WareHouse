#ifndef ITEM_H
#define ITEM_H

#include <QString>
#include <QDateTime>

class Item
{
    public:
        Item();
        int getItemId() const;
        void setItemId(const int &value);

        QString getName() const;
        void setName(const QString &value);

        int getStock() const;
        void setStock(const int &value);

        QString getLocation() const;
        void setLocation(const QString &value);

        QString getImage() const;
        void setImage(const QString &value);

        QString getDescription() const;
        void setDescription(const QString &value);

        int getHeight() const;
        void setHeight(const int &value);

        int getWidth() const;
        void setWidth(const int &value);

        bool getSoldOut() const;
        void setSoldOut(const bool &value);

        QDateTime getTimeCreated() const;
        void setTimeCreated(const QDateTime &value);


    private:
        int itemId;

        QString name;

        int inStock;

        QString location;

        QString image;

        QString description;

        QDateTime timeCreated;

        int height;

        int width;

        bool soldOut;

};

#endif // ITEM_H
