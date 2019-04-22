#ifndef ORDERS_H
#define ORDERS_H

#include "team.h"

class Orders
{
private:
    struct order
    {
        order(int qty, const souvenirs& newItem): quantity{qty}, item{newItem}{}
        int quantity;
        souvenirs item;
    };

    std::vector<order> ordersList;
public:
    void addOrder(const souvenirs& item, int quantity);
    bool modifyOrder(const souvenirs& item, int quantity = -1);  // -1 will delete the order
    void clearOrders();

    bool isEmpty();

    const souvenirs& getItem(unsigned int index);
    unsigned int getSize();
    int getQty(unsigned int index);
    QString getStadium(unsigned int index) const;
    double getGrandTotal() const;
    double getStadiumTotal(QString stadium) const;
};

#endif // ORDERS_H
