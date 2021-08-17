#ifndef FINALORDERDIALOG_H
#define FINALORDERDIALOG_H

#include <QDialog>
#include <QPixmap>
#include <QFileDialog>
#include <itemservice.h>
#include <orderservice.h>
#include <QList>
#include <QSpinBox>

namespace Ui {
class FinalOrderDialog;
}

class FinalOrderDialog : public QDialog
{
    Q_OBJECT

    public:
        explicit FinalOrderDialog(QWidget *parent = nullptr);
        ~FinalOrderDialog();

        void finalOrder(QString key);

        int getTotalItemsCounted();
        void setTotalItemsCounted(int value);

        void setFinalize(bool value);
        bool getFinalize();

    protected:
        void itemClicked(QListWidgetItem *item);

        void valueChanged(QSpinBox *spinBoxScan);

    private:
        Ui::FinalOrderDialog *ui;
        int totalItemsCounted;
        bool checkFinalize;

    private slots:
        void spinBoxValueChanged();
};

#endif // FINALORDERDIALOG_H
