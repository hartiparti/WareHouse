#include "item.h"

// Default constructor.
Item::Item()
{
    itemId = 0;
    name = "noName";
    inStock = 0;
    location = "None";
    image = "url";
    description = "default";
    height = 0;
    width = 0;
    soldOut = false;
    timeCreated.currentDateTime();

}

int Item::getItemId() const
{
    return itemId;
}

void Item::setItemId(const int &value)
{
    itemId = value;
}

QString Item::getName() const
{
    return name;
}
void Item::setName(const QString &value)
{
    name = value;
}

int Item::getStock() const
{
    return inStock;
}

void Item::setStock(const int &value)
{
    inStock = value;
}


QString Item::getLocation() const
{
    return location;
}

void Item::setLocation(const QString &value)
{
    location = value;
}

QString Item::getImage() const
{
    return image;
}

void Item::setImage(const QString &value)
{
    image = value;
}

QString Item::getDescription() const
{
    return description;
}

void Item::setDescription(const QString &value)
{
    description = value;
}

int Item::getHeight() const
{
    return height;
}

void Item::setHeight(const int &value)
{
   height = value;
}

int Item::getWidth() const
{
    return width;
}

void Item::setWidth(const int &value)
{
    width = value;
}

bool Item::getSoldOut() const
{
    return soldOut;
}

void Item::setSoldOut(const bool &value)
{
    soldOut = value;
}

void Item::setTimeCreated(const QDateTime &value)
{
    timeCreated = value;
}

QDateTime Item::getTimeCreated() const
{
    return timeCreated;
}




