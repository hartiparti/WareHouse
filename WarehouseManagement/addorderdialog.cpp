#include "addorderdialog.h"
#include "ui_addorderdialog.h"

AddOrderDialog::AddOrderDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddOrderDialog)
{
    ui->setupUi(this);
}

AddOrderDialog::~AddOrderDialog()
{
    delete ui;
}
