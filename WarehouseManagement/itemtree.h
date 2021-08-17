#ifndef ITEMTREE_H
#define ITEMTREE_H

#include <QObject>
#include <QWidget>
#include <QString>
#include <QTreeWidget>
#include "item.h"

class ItemTree
{
    public:
        ItemTree();

        void addTreeRoot(QTreeWidgetItem *parent, QString theKey, int quantity, Item item,  QString description);

        void addTreeChild(QTreeWidgetItem *parent, QString name, QString description);

};

#endif // ITEMTREE_H


