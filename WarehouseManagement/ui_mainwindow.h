/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *buttonInventory;
    QPushButton *buttonOrders;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTreeWidget *treeItemWidget;
    QPushButton *buttonFinalOrder;
    QLabel *label_8;
    QFrame *line_2;
    QFrame *line;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineOrderId;
    QLabel *label_2;
    QLineEdit *lineNrItems;
    QLabel *label_10;
    QLabel *label_3;
    QPushButton *buttonNewOrder;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QTableWidget *orderTableWidget;
    QWidget *page_2;
    QPushButton *buttonNewItem;
    QFrame *line_3;
    QLabel *label_9;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidgetItems;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuWareHouse;
    QMenu *menutest;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(857, 692);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        buttonInventory = new QPushButton(centralwidget);
        buttonInventory->setObjectName(QString::fromUtf8("buttonInventory"));
        buttonInventory->setGeometry(QRect(380, 20, 161, 31));
        QFont font;
        font.setPointSize(15);
        buttonInventory->setFont(font);
        buttonOrders = new QPushButton(centralwidget);
        buttonOrders->setObjectName(QString::fromUtf8("buttonOrders"));
        buttonOrders->setGeometry(QRect(220, 20, 141, 31));
        buttonOrders->setFont(font);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(70, 60, 681, 571));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(gridLayoutWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        treeItemWidget = new QTreeWidget(page);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Ordered"));
        __qtreewidgetitem->setFont(0, font1);
        __qtreewidgetitem->setBackground(0, QColor(85, 170, 255));
        treeItemWidget->setHeaderItem(__qtreewidgetitem);
        treeItemWidget->setObjectName(QString::fromUtf8("treeItemWidget"));
        treeItemWidget->setGeometry(QRect(440, 160, 161, 371));
        buttonFinalOrder = new QPushButton(page);
        buttonFinalOrder->setObjectName(QString::fromUtf8("buttonFinalOrder"));
        buttonFinalOrder->setGeometry(QRect(490, 540, 75, 23));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        buttonFinalOrder->setFont(font2);
        label_8 = new QLabel(page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 0, 111, 21));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_8->setFont(font3);
        line_2 = new QFrame(page);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 20, 681, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line = new QFrame(page);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(400, 30, 20, 531));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget = new QWidget(page);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(440, 40, 81, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        verticalLayout->addWidget(label);

        lineOrderId = new QLineEdit(verticalLayoutWidget);
        lineOrderId->setObjectName(QString::fromUtf8("lineOrderId"));

        verticalLayout->addWidget(lineOrderId);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        lineNrItems = new QLineEdit(verticalLayoutWidget);
        lineNrItems->setObjectName(QString::fromUtf8("lineNrItems"));

        verticalLayout->addWidget(lineNrItems);

        label_10 = new QLabel(page);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(410, 0, 111, 21));
        label_10->setFont(font3);
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(440, 140, 79, 15));
        label_3->setFont(font1);
        buttonNewOrder = new QPushButton(page);
        buttonNewOrder->setObjectName(QString::fromUtf8("buttonNewOrder"));
        buttonNewOrder->setGeometry(QRect(140, 540, 101, 21));
        buttonNewOrder->setFont(font2);
        gridLayoutWidget_2 = new QWidget(page);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 60, 391, 471));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        orderTableWidget = new QTableWidget(gridLayoutWidget_2);
        orderTableWidget->setObjectName(QString::fromUtf8("orderTableWidget"));

        gridLayout_2->addWidget(orderTableWidget, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        buttonNewItem = new QPushButton(page_2);
        buttonNewItem->setObjectName(QString::fromUtf8("buttonNewItem"));
        buttonNewItem->setGeometry(QRect(260, 520, 101, 23));
        line_3 = new QFrame(page_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 20, 681, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_9 = new QLabel(page_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 0, 111, 21));
        label_9->setFont(font3);
        gridLayoutWidget_3 = new QWidget(page_2);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(20, 40, 641, 471));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        tableWidgetItems = new QTableWidget(gridLayoutWidget_3);
        tableWidgetItems->setObjectName(QString::fromUtf8("tableWidgetItems"));

        gridLayout_3->addWidget(tableWidgetItems, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 857, 21));
        menuWareHouse = new QMenu(menubar);
        menuWareHouse->setObjectName(QString::fromUtf8("menuWareHouse"));
        menutest = new QMenu(menubar);
        menutest->setObjectName(QString::fromUtf8("menutest"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuWareHouse->menuAction());
        menubar->addAction(menutest->menuAction());

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        buttonInventory->setText(QCoreApplication::translate("MainWindow", "Inventory", nullptr));
        buttonOrders->setText(QCoreApplication::translate("MainWindow", "Orders", nullptr));
        buttonFinalOrder->setText(QCoreApplication::translate("MainWindow", "Mark order", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Orders", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Order Id", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Total Items", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Order Details", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "List of items", nullptr));
        buttonNewOrder->setText(QCoreApplication::translate("MainWindow", "Make New Order", nullptr));
        buttonNewItem->setText(QCoreApplication::translate("MainWindow", "Create New Item", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Items", nullptr));
        menuWareHouse->setTitle(QCoreApplication::translate("MainWindow", "WareHouse", nullptr));
        menutest->setTitle(QCoreApplication::translate("MainWindow", "test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
