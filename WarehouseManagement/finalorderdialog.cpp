#include "finalorderdialog.h"
#include "ui_finalorderdialog.h"

FinalOrderDialog::FinalOrderDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FinalOrderDialog)
{
    ui->setupUi(this);

    connect(ui->listItem, &QListWidget::itemClicked, this, &FinalOrderDialog::itemClicked);

    connect(ui->spinBoxScan, SIGNAL(valueChanged(int)),
              this, SLOT(spinBoxValueChanged()));

    setTotalItemsCounted(0);

    ui->itemsNeedLineEdit->setText("0");

    setFinalize(false);
}

void FinalOrderDialog::spinBoxValueChanged()
{
    int totalCount = getTotalItemsCounted();

    if( ui->itemsNeedLineEdit->text() == ui->itemsTotalLineEdit->text())
    {
        ui->checkBox->setChecked(1);
        totalCount = 0;
    }

    if(ui->spinBoxScan->value() != 0)
    {
        totalCount = totalCount + 1;
        setTotalItemsCounted(totalCount);
        qDebug() << "hit!";

        qDebug() << getTotalItemsCounted();
        ui->itemsNeedLineEdit->setText(QString::number(totalCount));
        if(ui->itemsNeedLineEdit->text() == ui->itemsTotalLineEdit->text())
        {
           ui->checkBox->setChecked(1);
           setFinalize(true);

        }

    }
}

FinalOrderDialog::~FinalOrderDialog()
{
    delete ui;
}

void FinalOrderDialog::setFinalize(bool value)
{
    checkFinalize = value;
}

bool FinalOrderDialog::getFinalize()
{
    return checkFinalize;
}

int FinalOrderDialog::getTotalItemsCounted()
{
    return totalItemsCounted;
}

void FinalOrderDialog::setTotalItemsCounted(int value)
{
    totalItemsCounted = value;
}

void FinalOrderDialog::itemClicked(QListWidgetItem * item)
{
    ui -> itemsNeedLineEdit -> text() = QString::number(getTotalItemsCounted());
    QString theKey = ui -> orderIdLineEdit -> text();
  //item->text();
    QString firstWord = item -> text().section(" ", 0, 0);
    qDebug() << "Clicked!" << firstWord;

    QString image;
    OrderService order;
    order.getImageFromItemId(ui -> listItem, firstWord, theKey, image);

    ui -> imageLabel -> setAlignment(Qt::AlignCenter);

    QString filename = QDir::currentPath() + "/images/" + image;
    ui -> lineEditName -> setText(firstWord);

    order.getClickedItem(theKey, firstWord, ui -> lineEditItemId, ui -> lineEditName, ui -> lineEditLocation, ui -> lineEditOrdered);

    //Dir::currentPath();
    QPixmap pix;
    if (pix.load(filename))
    {
        int w = ui -> imageLabel -> width();
        int h = ui -> imageLabel -> height();
        ui -> imageLabel -> setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
        qDebug() << "Loaded!";
    }
    else
    {
        ui -> imageLabel -> setText("Image not found");
    }

    ui -> spinBoxScan -> setMaximum(ui -> lineEditOrdered -> text().toInt());
    ui -> spinBoxScan -> setValue(0);

    finalOrder(theKey);

}
void FinalOrderDialog::finalOrder(QString key)
{

    if(ui->itemsNeedLineEdit->text() == ui->itemsTotalLineEdit->text())
    {
       ui->checkBox->setChecked(1);

    }
    else
    {
        ui->checkBox->setChecked(0);
    }

    qDebug() << "at order: " << key;
    ui->orderIdLineEdit->setText(key);
    OrderService order;
    QString image = "null";
    int countItems = order.getAllItemsCount("orders.json", key);
    ui->itemsTotalLineEdit->setText(QString::number(countItems));
    order.getItemsToList(ui->listItem, key, image);

}
