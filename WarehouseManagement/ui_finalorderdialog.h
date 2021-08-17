/********************************************************************************
** Form generated from reading UI file 'finalorderdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINALORDERDIALOG_H
#define UI_FINALORDERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FinalOrderDialog
{
public:
    QDialogButtonBox *buttonBox;
    QCheckBox *checkBox;
    QLabel *label_3;
    QLineEdit *orderIdLineEdit;
    QLabel *label_6;
    QListWidget *listItem;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *itemsNeedLineEdit;
    QLabel *label_9;
    QLabel *label_11;
    QLineEdit *itemsTotalLineEdit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *imageLabel;
    QFrame *line;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditItemId;
    QLineEdit *lineEditLocation;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *lineEditName;
    QLabel *label_2;
    QLabel *label_12;
    QLabel *label_13;
    QFrame *line_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLineEdit *lineEditOrdered;
    QLabel *label_10;
    QSpinBox *spinBoxScan;
    QFrame *line_4;

    void setupUi(QDialog *FinalOrderDialog)
    {
        if (FinalOrderDialog->objectName().isEmpty())
            FinalOrderDialog->setObjectName(QString::fromUtf8("FinalOrderDialog"));
        FinalOrderDialog->resize(611, 612);
        buttonBox = new QDialogButtonBox(FinalOrderDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(40, 570, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        checkBox = new QCheckBox(FinalOrderDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 130, 91, 41));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        checkBox->setFont(font);
        checkBox->setLayoutDirection(Qt::RightToLeft);
        checkBox->setIconSize(QSize(30, 30));
        label_3 = new QLabel(FinalOrderDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 190, 61, 16));
        orderIdLineEdit = new QLineEdit(FinalOrderDialog);
        orderIdLineEdit->setObjectName(QString::fromUtf8("orderIdLineEdit"));
        orderIdLineEdit->setGeometry(QRect(80, 80, 61, 20));
        label_6 = new QLabel(FinalOrderDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 80, 71, 21));
        label_6->setFont(font);
        listItem = new QListWidget(FinalOrderDialog);
        listItem->setObjectName(QString::fromUtf8("listItem"));
        listItem->setGeometry(QRect(20, 210, 151, 351));
        label_7 = new QLabel(FinalOrderDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 190, 61, 16));
        label_8 = new QLabel(FinalOrderDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(130, 190, 61, 16));
        itemsNeedLineEdit = new QLineEdit(FinalOrderDialog);
        itemsNeedLineEdit->setObjectName(QString::fromUtf8("itemsNeedLineEdit"));
        itemsNeedLineEdit->setGeometry(QRect(80, 110, 31, 20));
        label_9 = new QLabel(FinalOrderDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 110, 51, 21));
        label_9->setFont(font);
        label_11 = new QLabel(FinalOrderDialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(120, 110, 20, 21));
        label_11->setFont(font);
        itemsTotalLineEdit = new QLineEdit(FinalOrderDialog);
        itemsTotalLineEdit->setObjectName(QString::fromUtf8("itemsTotalLineEdit"));
        itemsTotalLineEdit->setGeometry(QRect(140, 110, 41, 21));
        gridLayoutWidget = new QWidget(FinalOrderDialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(240, 90, 341, 251));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        imageLabel = new QLabel(gridLayoutWidget);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setScaledContents(true);
        imageLabel->setWordWrap(true);

        gridLayout->addWidget(imageLabel, 0, 0, 1, 1);

        line = new QFrame(FinalOrderDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(30, 70, 118, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        gridLayoutWidget_2 = new QWidget(FinalOrderDialog);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(240, 350, 121, 131));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEditItemId = new QLineEdit(gridLayoutWidget_2);
        lineEditItemId->setObjectName(QString::fromUtf8("lineEditItemId"));

        gridLayout_2->addWidget(lineEditItemId, 0, 1, 1, 1);

        lineEditLocation = new QLineEdit(gridLayoutWidget_2);
        lineEditLocation->setObjectName(QString::fromUtf8("lineEditLocation"));

        gridLayout_2->addWidget(lineEditLocation, 2, 1, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        lineEditName = new QLineEdit(gridLayoutWidget_2);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        gridLayout_2->addWidget(lineEditName, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        label_12 = new QLabel(FinalOrderDialog);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 20, 151, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_12->setFont(font1);
        label_13 = new QLabel(FinalOrderDialog);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 170, 61, 21));
        label_13->setFont(font);
        line_3 = new QFrame(FinalOrderDialog);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(20, 180, 161, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget = new QWidget(FinalOrderDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(430, 360, 101, 98));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_5->setFont(font2);

        verticalLayout->addWidget(label_5);

        lineEditOrdered = new QLineEdit(verticalLayoutWidget);
        lineEditOrdered->setObjectName(QString::fromUtf8("lineEditOrdered"));

        verticalLayout->addWidget(lineEditOrdered);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font2);

        verticalLayout->addWidget(label_10);

        spinBoxScan = new QSpinBox(verticalLayoutWidget);
        spinBoxScan->setObjectName(QString::fromUtf8("spinBoxScan"));

        verticalLayout->addWidget(spinBoxScan);

        line_4 = new QFrame(FinalOrderDialog);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(0, 60, 681, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        retranslateUi(FinalOrderDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FinalOrderDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FinalOrderDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FinalOrderDialog);
    } // setupUi

    void retranslateUi(QDialog *FinalOrderDialog)
    {
        FinalOrderDialog->setWindowTitle(QCoreApplication::translate("FinalOrderDialog", "Dialog", nullptr));
        checkBox->setText(QCoreApplication::translate("FinalOrderDialog", "Order Filled", nullptr));
        label_3->setText(QCoreApplication::translate("FinalOrderDialog", "Item Id", nullptr));
        label_6->setText(QCoreApplication::translate("FinalOrderDialog", "OrderId", nullptr));
        label_7->setText(QCoreApplication::translate("FinalOrderDialog", "Name", nullptr));
        label_8->setText(QCoreApplication::translate("FinalOrderDialog", "Location", nullptr));
        label_9->setText(QCoreApplication::translate("FinalOrderDialog", "Items", nullptr));
        label_11->setText(QCoreApplication::translate("FinalOrderDialog", "of", nullptr));
        imageLabel->setText(QString());
        label->setText(QCoreApplication::translate("FinalOrderDialog", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("FinalOrderDialog", "Id", nullptr));
        label_2->setText(QCoreApplication::translate("FinalOrderDialog", "Location", nullptr));
        label_12->setText(QCoreApplication::translate("FinalOrderDialog", "Order Picking", nullptr));
        label_13->setText(QCoreApplication::translate("FinalOrderDialog", "Order", nullptr));
        label_5->setText(QCoreApplication::translate("FinalOrderDialog", "Ordered", nullptr));
        label_10->setText(QCoreApplication::translate("FinalOrderDialog", "Scan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FinalOrderDialog: public Ui_FinalOrderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINALORDERDIALOG_H
