/********************************************************************************
** Form generated from reading UI file 'additemdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEMDIALOG_H
#define UI_ADDITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddItemDialog
{
public:
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_7;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditImage;
    QPushButton *buttonUploadImage;
    QLabel *label_4;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLineEdit *lineEditHeight;
    QLabel *label_6;
    QLineEdit *lineEditWidth;
    QLineEdit *lineEditName;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QSpinBox *spinBoxStock;
    QLabel *label_3;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_8;

    void setupUi(QDialog *AddItemDialog)
    {
        if (AddItemDialog->objectName().isEmpty())
            AddItemDialog->setObjectName(QString::fromUtf8("AddItemDialog"));
        AddItemDialog->resize(401, 475);
        buttonBox = new QDialogButtonBox(AddItemDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(80, 400, 201, 51));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        plainTextEdit = new QPlainTextEdit(AddItemDialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 240, 161, 91));
        label_7 = new QLabel(AddItemDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 220, 81, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        horizontalLayoutWidget = new QWidget(AddItemDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 170, 161, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditImage = new QLineEdit(horizontalLayoutWidget);
        lineEditImage->setObjectName(QString::fromUtf8("lineEditImage"));

        horizontalLayout->addWidget(lineEditImage);

        buttonUploadImage = new QPushButton(horizontalLayoutWidget);
        buttonUploadImage->setObjectName(QString::fromUtf8("buttonUploadImage"));

        horizontalLayout->addWidget(buttonUploadImage);

        label_4 = new QLabel(AddItemDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 150, 141, 21));
        label_4->setFont(font);
        label_4->setScaledContents(false);
        gridLayoutWidget = new QWidget(AddItemDialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 330, 161, 51));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(1, 1, 2, 0);
        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        lineEditHeight = new QLineEdit(gridLayoutWidget);
        lineEditHeight->setObjectName(QString::fromUtf8("lineEditHeight"));

        gridLayout->addWidget(lineEditHeight, 2, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 2, 2, 1, 1);

        lineEditWidth = new QLineEdit(gridLayoutWidget);
        lineEditWidth->setObjectName(QString::fromUtf8("lineEditWidth"));

        gridLayout->addWidget(lineEditWidth, 2, 3, 1, 1);

        lineEditName = new QLineEdit(AddItemDialog);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setGeometry(QRect(20, 110, 91, 20));
        label = new QLabel(AddItemDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 80, 91, 21));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        comboBox = new QComboBox(AddItemDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(300, 240, 41, 20));
        label_2 = new QLabel(AddItemDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 200, 71, 21));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        spinBoxStock = new QSpinBox(AddItemDialog);
        spinBoxStock->setObjectName(QString::fromUtf8("spinBoxStock"));
        spinBoxStock->setGeometry(QRect(300, 200, 41, 20));
        label_3 = new QLabel(AddItemDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 240, 71, 20));
        label_3->setFont(font1);
        line = new QFrame(AddItemDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(190, 70, 20, 301));
        QFont font2;
        font2.setPointSize(12);
        line->setFont(font2);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(AddItemDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 40, 371, 20));
        line_2->setFont(font2);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(AddItemDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 20, 111, 21));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_8->setFont(font3);

        retranslateUi(AddItemDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddItemDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddItemDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddItemDialog);
    } // setupUi

    void retranslateUi(QDialog *AddItemDialog)
    {
        AddItemDialog->setWindowTitle(QCoreApplication::translate("AddItemDialog", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("AddItemDialog", "Description", nullptr));
        buttonUploadImage->setText(QCoreApplication::translate("AddItemDialog", "Upload", nullptr));
        label_4->setText(QCoreApplication::translate("AddItemDialog", "Image", nullptr));
        label_5->setText(QCoreApplication::translate("AddItemDialog", "Height", nullptr));
        label_6->setText(QCoreApplication::translate("AddItemDialog", "Width", nullptr));
        label->setText(QCoreApplication::translate("AddItemDialog", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("AddItemDialog", "Set stock", nullptr));
        label_3->setText(QCoreApplication::translate("AddItemDialog", "Set location", nullptr));
        label_8->setText(QCoreApplication::translate("AddItemDialog", "New Item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddItemDialog: public Ui_AddItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMDIALOG_H
