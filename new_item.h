#ifndef NEW_ITEM_H
#define NEW_ITEM_H

#include <QDialog>

namespace Ui {
class New_Item;
}

class New_Item : public QDialog
{
    Q_OBJECT

public:
    explicit New_Item(QWidget *parent = 0);
    ~New_Item();

private:
    Ui::New_Item *ui;
};

#endif // NEW_ITEM_H
