#ifndef ADDITEMDIALOG_H
#define ADDITEMDIALOG_H

#include <QDialog>
#include <QFileDialog>
#include <itemservice.h>

namespace Ui {
class AddItemDialog;
}

class AddItemDialog : public QDialog
{
    Q_OBJECT

    public:
        explicit AddItemDialog(QWidget *parent = nullptr);
        ~AddItemDialog();
        void addItem(QString fileName);
        void initalizeCombobox();

    protected slots:
        void on_buttonUploadImage_clicked();

    private:
        Ui::AddItemDialog *ui;
};

#endif // ADDITEMDIALOG_H
