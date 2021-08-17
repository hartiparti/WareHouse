#include "inventorydialog.h"
#include "ui_Inventorydialog.h"
InventoryDialog::InventoryDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InventoryDialog)
{
    ui->setupUI(this);

}
InventoryDialog::~InventoryDialog()
{
    delete ui;
}
