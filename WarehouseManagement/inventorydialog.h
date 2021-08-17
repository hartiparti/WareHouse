#ifndef INVENTORYDIALOG_H
#define INVENTORYDIALOG_H

//#include "itemservice.h"
#include <QDialog>
#include <QJsonObject>

namespace Ui { class InventoryDialog; }
class InventoryDialog : public QDialog
{
    Q_OBJECT
    public:
        explicit InventoryDialog(QWidget *parent = nullptr);
        ~InventoryDialog();
        //ItemService getItem();

    private:
        Ui::InventoryDialog *ui;
        /*QJsonObject m_jsonObject;
        QString m_id;*/

};

#endif // INVENTORYDIALOG_H
