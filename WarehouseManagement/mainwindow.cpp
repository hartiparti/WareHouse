#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_jsonDoc(nullptr)
    , parser(nullptr)
    , m_addItemDialog(nullptr)
    , m_finalOrderDialog(nullptr)
    , m_newOrderDialog(nullptr)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    ItemService itemServ;
    OrderService orderServ;

    setItemFile("items.json");
    setOrderFile("orders.json");

    intializeTable();
    viewAllItems(itemServ);
    viewAllOrders(orderServ);

    connect(ui->orderTableWidget, &QTableWidget::cellClicked, this, &MainWindow::cellClicked);


}

MainWindow::~MainWindow()
{
    delete ui;
    if (m_jsonDoc)
    {
         delete m_jsonDoc;
    }
}

void MainWindow::setOrderFile(QString value)
{
    orderFileInDir = value;
}

QString MainWindow::getOrderFile()
{
    return orderFileInDir;
}
void MainWindow::setItemFile(QString value)
{
   itemFileInDir = value;
}

QString MainWindow::getItemFile()
{
    return itemFileInDir;
}

QString MainWindow::getOrderRowKey() const
{
    return rowKey;
}
void MainWindow::setOrderRowKey(const QString &value)
{
    rowKey = value;
}


void MainWindow::intializeTable()
{
    QWidget*  wid  = ui->stackedWidget->widget(1);
    QTableWidget *table = wid->findChild<QTableWidget *>();
    table->setRowHeight(3,3);
    QString itemFileInDir = getItemFile();
    parser->readJson(itemFileInDir);
    table->setColumnCount(9);


    QWidget*  wid2  = ui->stackedWidget->widget(0);
    QTableWidget *orderTable = wid2->findChild<QTableWidget *>();
    orderTable->setRowHeight(2, 1);
    QString orderFile = getOrderFile();
    parser->readJson(orderFile);
    orderTable->setColumnCount(4);

}

void MainWindow::on_buttonInventory_clicked()
{
      qDebug() << "Clicked Inventory";
      ui->stackedWidget->setCurrentIndex(1);
      ItemService itemServ;
      viewAllItems(itemServ);
}


void MainWindow::on_buttonOrders_clicked()
{
      qDebug() << "Clicked Orders";
      ui->stackedWidget->setCurrentIndex(0);
      OrderService orderServ;
      viewAllOrders(orderServ);

}

void MainWindow::on_buttonNewItem_clicked()
{
    ItemService itemService;
     qDebug() << "Clicked NewItem";
     //dItemDialog dialog;
     AddItemDialog dialog(this);

     if (QDialog::Accepted == dialog.exec())
     {
       dialog.addItem(getItemFile());
       viewAllItems(itemService);

     }
     if (m_jsonDoc)
     {
         if (m_addItemDialog)
         {

             delete m_addItemDialog;
         }

          m_addItemDialog = new AddItemDialog(this);

      }
}


void MainWindow::on_buttonNewOrder_clicked()
{
    qDebug() << "party!";
    NewOrderDialog dialog(this);

    OrderService orderServ;
    if (QDialog::Accepted == dialog.exec())
    {
        QListWidget *aList = new QListWidget();
        QString newOrderId = dialog.getNewestOrderId();
        dialog.createNewOrder(aList);
        qDebug() << "Size:" << aList->count();

        for(int i = 0; i < aList->count(); ++i)
        {
              qDebug() << aList->item(i)->text();
        }

        orderServ.createNewOrder(newOrderId, aList);

       qDebug() << "done!";
       delete aList;

    }
    if (m_jsonDoc)
    {
        if (m_newOrderDialog)
        {

            delete m_newOrderDialog;
        }

         m_newOrderDialog = new NewOrderDialog(this);

     }

    viewAllOrders(orderServ);

}


void MainWindow::on_buttonFinalOrder_clicked()
{
    bool finaLizeOrder = false;
    qDebug() << "Clicked finalOrder";
    //dItemDialog dialog;
    FinalOrderDialog dialog(this);
    dialog.finalOrder(getOrderRowKey());

    if (QDialog::Accepted == dialog.exec())
    {
       finaLizeOrder = dialog.getFinalize();
       qDebug() << "done!";
       if(finaLizeOrder == true)
       {
            OrderService orderService;
            qDebug() << "final!";
            orderService.markOrderAsReady(getOrderFile(),getOrderRowKey(), finaLizeOrder);
            viewAllOrders(orderService);
       }

    }
    if (m_jsonDoc)
    {
        if (m_addItemDialog)
        {

            delete m_addItemDialog;
        }

         m_addItemDialog = new AddItemDialog(this);

     }

}
void MainWindow::cellClicked(int iRow)
{
    qDebug() << "Clicked Object!";
    ui->orderTableWidget->setRangeSelected(QTableWidgetSelectionRange(iRow, 0, iRow,  ui->orderTableWidget->columnCount() - 1), 1);
    qDebug() << iRow + 1;
    setOrderRowKey(QString::number(iRow + 1));
    qDebug() << getOrderRowKey();
    OrderService orderService;
    viewAllOrders(orderService);
   //i.tableWidget->setRangeSelected(QTableWidgetSelectionRange(iRow, 0, iRow, ui.tableWidget->columnCount() - 1), 1);

}

void MainWindow::viewAllOrders(OrderService orderService)
{
    if(ui->stackedWidget->currentIndex() == 0)
    {

       //connect(ui->orderTableWidget, &QTableWidget::itemClicked, this, &MainWindow::on_tableObject_clicked);

         orderService.getAllOrders(ui->orderTableWidget, getOrderFile());
         //QString orderId
         QString keyId = getOrderRowKey();
         qDebug() << "key is:" << keyId;
         orderService.getAllItemsInOrder(ui->treeItemWidget, getOrderFile(), keyId);
         ui->lineOrderId->setText(keyId);
         ui->lineNrItems->setText(QString::number(orderService.getAllItemsCount(getOrderFile(), keyId)));

    }
    else
    {
         qDebug() << "Not in Order view!";
    }

}

void MainWindow::viewAllItems(ItemService itemService)
{
    if(ui->stackedWidget->currentIndex() == 1)
    {

        itemService.getAllItems(ui->tableWidgetItems, getItemFile());


    }
    else
    {
         qDebug() << "Not in Inventory view!";
    }

}
