#include "additemdialog.h"
#include "ui_additemdialog.h"

AddItemDialog::AddItemDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddItemDialog)
{
    ui->setupUi(this);
    initalizeCombobox();
}

AddItemDialog::~AddItemDialog()
{
    delete ui;
}

void AddItemDialog::on_buttonUploadImage_clicked()
{
    QString fname = QFileDialog::getOpenFileName(nullptr, "images", "*" );
    QStringList list = fname.split("/");
    QString str = list[list.length()-1];
    ui->lineEditImage->setText(str);
    qDebug() << "Name is: " << str;
}

void AddItemDialog::initalizeCombobox()
{
    ui->comboBox->addItem("A1");
    ui->comboBox->addItem("A2");
    ui->comboBox->addItem("A3");
    ui->comboBox->addItem("A4");
    ui->comboBox->addItem("A5");
    ui->comboBox->addItem("B1");
    ui->comboBox->addItem("B2");
    ui->comboBox->addItem("B3");
}
void::AddItemDialog::addItem(QString fileName)
{
    ItemService itemService;
    QString name = ui->lineEditName->text();
    QString location = ui->comboBox->currentText();
    QString stockVar = ui->spinBoxStock->text();
    QString heig = ui->lineEditHeight->text();
    QString widt = ui->lineEditWidth->text();
    QString image = ui->lineEditImage->text();
    QString description = ui->plainTextEdit->toPlainText();
    itemService.addItem(fileName, name, location, stockVar, heig, widt, image, description);
}
