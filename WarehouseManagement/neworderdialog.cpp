#include "neworderdialog.h"
#include "ui_neworderdialog.h"

NewOrderDialog::NewOrderDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewOrderDialog)
{
    ui->setupUi(this);
    ItemService itemServ;
    itemServ.getAllItemsToList(ui->listWidgetItems);
    connect(ui->listWidgetItems, &QListWidget::itemClicked, this, &itemClicked);

    OrderService orderServ;
    int theCount = orderServ.getAllOrdersCount() + 1;
    ui->lineEditNewOrderId->setText(QString::number(theCount));
    QString currentId = ui->lineEditItemId->text();

}



NewOrderDialog::~NewOrderDialog()
{
    delete ui;

}

void NewOrderDialog::on_buttonAddToOrder_clicked()
{
    qDebug() << "clicked Add!";
    ItemService itemServ;
    QString currStockAsString;
    QString itemId = ui->lineEditItemId->text();

    if(ui->spinBox->value() != 0)
    {
       ItemService itemServ;
       ui->listWidgetOrders->addItem(ui->lineEditItemId->text() + " " + ui->spinBox->text());
       int currentStock = ui->spinBox->value();
       //QString itemId = ui->lineEditItemId->text();
       //QString currStockAsString;
       //itemServ.getStockFromId(itemId, currStockAsString);
       itemServ.updateTotalStock(itemId, currentStock);
       //int totalStock = currStockAsString
       ui->lineEditStock->setText(currStockAsString);
    }
    itemServ.getStockFromId(itemId, currStockAsString);
    ui->lineEditStock->setText(currStockAsString);
    ui->spinBox->setMaximum(currStockAsString.toInt());
     ui->spinBox->setValue(0);
    // updateTotalStock;


}

void NewOrderDialog::itemClicked(QListWidgetItem *item)
{
    qDebug() << "Clicked";
     ui->spinBox->setValue(0);
    //QString theKey = ui->orderIdLineEdit->text();
    //item->text();
    QString firstWord = item->text().section(" ", 0, 0);
    qDebug() << "Clicked!" << firstWord;
    QString image;
    ItemService itemService;
    itemService.getImageFromItemId(firstWord, image);
    ui->imageLabel->setAlignment(Qt::AlignCenter);

    QString filename = QDir::currentPath() + "/images/" + image;
    //ui->lineEditName->setText(firstWord);
    qDebug() << "filename!" << filename;
   //Dir::currentPath();
       QPixmap pix;
       if(pix.load(filename))
       {  // Scale;
           //pix = pix.scaled( ui->imageLabel->size(),Qt::KeepAspectRatio);

           int w = ui->imageLabel->width();
           int h = ui->imageLabel->height();
           ui->imageLabel->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
            qDebug() << "Loaded!";
       }
       else
       {
           ui->imageLabel->setText("Image not found");
       }

       ui->lineEditItemId->setText(firstWord);
       QString nameItem = "null";
       QString description = "null";
       QString w = "null";
       QString h = "null";
       QString stock = "null";

       ItemService itemServ;
       itemServ.getItemNameFromId(firstWord, nameItem);
       itemServ.getDescriptionFromId(firstWord, description);
       itemServ.getWidthFromId(firstWord, w);
       itemServ.getStockFromId(firstWord, stock);
       itemServ.getHeightFromId(firstWord, h);
       ui->lineEditName->setText(nameItem);
       ui->lineEditStock->setText(stock);
       ui->lineEditH->setText(h);
       ui->lineEditW->setText(w);
       ui->textBrowserDescription->setText(description);
       ui->spinBox->setMaximum(stock.toInt());

}

QString NewOrderDialog::getNewestOrderId()
{
    return ui->lineEditNewOrderId->text();
}

void NewOrderDialog::createNewOrder(QListWidget* &aList)
{
   // QListWidget orders;
    qDebug() <<"Size:" <<  ui->listWidgetOrders->count();
    for(int i = 0; i  < ui->listWidgetOrders->count(); i++)
    {
        QString addToList = ui->listWidgetOrders->item(i)->text();
        aList->addItem(addToList);
        qDebug()  << "items: " <<  ui->listWidgetOrders->item(i)->text();
    }

    //return orders.

}
