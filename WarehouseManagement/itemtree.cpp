#include "itemtree.h"

ItemTree::ItemTree()
{

}


void ItemTree::addTreeRoot(QTreeWidgetItem *parent, QString theKey, int quantity, Item item, QString description)
{
    // QTreeWidgetItem(QTreeWidget * parent, int type = Type)
    QTreeWidgetItem *treeItem = new QTreeWidgetItem();
    // QTreeWidgetItem::setText(int column, const QString & text)
    treeItem->setText(0, "Id:  " + theKey);
    treeItem->setText(1, description);

    addTreeChild(treeItem, "Name: " + item.getName(), "Name: ");

    addTreeChild(treeItem, "Loc: " + item.getLocation(), "Location");

    addTreeChild(treeItem, "Quant: " + QString::number(quantity), "Ordered");
    //addTreeChild(treeItem, QString::number(item.getStock()), "In stock:", treeItemWidget) ;

    parent->addChild(treeItem);
}


void ItemTree::addTreeChild(QTreeWidgetItem *parent, QString name, QString description)
{
     // QTreeWidgetItem(QTreeWidget * parent, int type = Type)
    QTreeWidgetItem *treeItem = new QTreeWidgetItem();

    // QTreeWidgetItem::setText(int column, const QString & text)
    treeItem->setText(0, name);
    treeItem->setText(1, description);

    // QTreeWidgetItem::addChild(QTreeWidgetItem * child)
    parent->addChild(treeItem);
}
