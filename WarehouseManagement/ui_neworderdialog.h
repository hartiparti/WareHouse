/********************************************************************************
** Form generated from reading UI file 'neworderdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWORDERDIALOG_H
#define UI_NEWORDERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewOrderDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEditStock;
    QLabel *imageLabel;
    QSpinBox *spinBox;
    QLabel *label_4;
    QLabel *label_3;
    QListWidget *listWidgetItems;
    QLineEdit *lineEditNewOrderId;
    QListWidget *listWidgetOrders;
    QLabel *label_6;
    QPushButton *buttonAddToOrder;
    QTextBrowser *textBrowserDescription;
    QLabel *label_7;
    QLabel *label_10;
    QFrame *line_2;
    QFrame *line;
    QLabel *label_11;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QLineEdit *lineEditW;
    QLineEdit *lineEditH;
    QLabel *label_8;
    QFrame *line_3;
    QLabel *label_12;
    QLineEdit *lineEditName;
    QLabel *label_2;
    QLineEdit *lineEditItemId;
    QLabel *label_5;

    void setupUi(QDialog *NewOrderDialog)
    {
        if (NewOrderDialog->objectName().isEmpty())
            NewOrderDialog->setObjectName(QString::fromUtf8("NewOrderDialog"));
        NewOrderDialog->resize(737, 712);
        buttonBox = new QDialogButtonBox(NewOrderDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(240, 640, 181, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(NewOrderDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 440, 61, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        lineEditStock = new QLineEdit(NewOrderDialog);
        lineEditStock->setObjectName(QString::fromUtf8("lineEditStock"));
        lineEditStock->setGeometry(QRect(430, 410, 41, 20));
        imageLabel = new QLabel(NewOrderDialog);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setGeometry(QRect(240, 70, 221, 241));
        imageLabel->setScaledContents(true);
        imageLabel->setWordWrap(true);
        spinBox = new QSpinBox(NewOrderDialog);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(430, 440, 51, 21));
        label_4 = new QLabel(NewOrderDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(530, 50, 51, 20));
        label_3 = new QLabel(NewOrderDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(360, 410, 61, 21));
        label_3->setFont(font);
        listWidgetItems = new QListWidget(NewOrderDialog);
        listWidgetItems->setObjectName(QString::fromUtf8("listWidgetItems"));
        listWidgetItems->setGeometry(QRect(10, 70, 191, 511));
        lineEditNewOrderId = new QLineEdit(NewOrderDialog);
        lineEditNewOrderId->setObjectName(QString::fromUtf8("lineEditNewOrderId"));
        lineEditNewOrderId->setGeometry(QRect(580, 50, 31, 20));
        listWidgetOrders = new QListWidget(NewOrderDialog);
        listWidgetOrders->setObjectName(QString::fromUtf8("listWidgetOrders"));
        listWidgetOrders->setGeometry(QRect(530, 80, 161, 331));
        label_6 = new QLabel(NewOrderDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 50, 51, 21));
        buttonAddToOrder = new QPushButton(NewOrderDialog);
        buttonAddToOrder->setObjectName(QString::fromUtf8("buttonAddToOrder"));
        buttonAddToOrder->setGeometry(QRect(310, 510, 91, 31));
        textBrowserDescription = new QTextBrowser(NewOrderDialog);
        textBrowserDescription->setObjectName(QString::fromUtf8("textBrowserDescription"));
        textBrowserDescription->setGeometry(QRect(220, 400, 121, 71));
        label_7 = new QLabel(NewOrderDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(220, 380, 81, 21));
        label_10 = new QLabel(NewOrderDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 10, 111, 21));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_10->setFont(font1);
        line_2 = new QFrame(NewOrderDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 30, 681, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line = new QFrame(NewOrderDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(490, 40, 20, 551));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_11 = new QLabel(NewOrderDialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(500, 10, 111, 21));
        label_11->setFont(font1);
        gridLayoutWidget = new QWidget(NewOrderDialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(340, 350, 141, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 2, 1, 1);

        lineEditW = new QLineEdit(gridLayoutWidget);
        lineEditW->setObjectName(QString::fromUtf8("lineEditW"));

        gridLayout->addWidget(lineEditW, 0, 3, 1, 1);

        lineEditH = new QLineEdit(gridLayoutWidget);
        lineEditH->setObjectName(QString::fromUtf8("lineEditH"));

        gridLayout->addWidget(lineEditH, 0, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        line_3 = new QFrame(NewOrderDialog);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(200, 40, 20, 551));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_12 = new QLabel(NewOrderDialog);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(280, 10, 151, 21));
        label_12->setFont(font1);
        lineEditName = new QLineEdit(NewOrderDialog);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setGeometry(QRect(220, 360, 81, 16));
        label_2 = new QLabel(NewOrderDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 330, 27, 20));
        lineEditItemId = new QLineEdit(NewOrderDialog);
        lineEditItemId->setObjectName(QString::fromUtf8("lineEditItemId"));
        lineEditItemId->setGeometry(QRect(290, 50, 31, 20));
        label_5 = new QLabel(NewOrderDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(240, 50, 36, 20));

        retranslateUi(NewOrderDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewOrderDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewOrderDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewOrderDialog);
    } // setupUi

    void retranslateUi(QDialog *NewOrderDialog)
    {
        NewOrderDialog->setWindowTitle(QCoreApplication::translate("NewOrderDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NewOrderDialog", "Quantity", nullptr));
        imageLabel->setText(QString());
        label_4->setText(QCoreApplication::translate("NewOrderDialog", "OrderID", nullptr));
        label_3->setText(QCoreApplication::translate("NewOrderDialog", "TotalStock", nullptr));
        label_6->setText(QCoreApplication::translate("NewOrderDialog", "Items", nullptr));
        buttonAddToOrder->setText(QCoreApplication::translate("NewOrderDialog", "Add To Order", nullptr));
        label_7->setText(QCoreApplication::translate("NewOrderDialog", "Description", nullptr));
        label_10->setText(QCoreApplication::translate("NewOrderDialog", "Inventory ", nullptr));
        label_11->setText(QCoreApplication::translate("NewOrderDialog", "New Order ", nullptr));
        label_9->setText(QCoreApplication::translate("NewOrderDialog", "Width", nullptr));
        label_8->setText(QCoreApplication::translate("NewOrderDialog", "Height", nullptr));
        label_12->setText(QCoreApplication::translate("NewOrderDialog", "Selected Item", nullptr));
        label_2->setText(QCoreApplication::translate("NewOrderDialog", "Name", nullptr));
        label_5->setText(QCoreApplication::translate("NewOrderDialog", "ItemId", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewOrderDialog: public Ui_NewOrderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWORDERDIALOG_H
