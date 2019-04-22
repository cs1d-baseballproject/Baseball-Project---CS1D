#include "orders.h"

/************************************************************************
 * addItem
 *  Description: Adds the order to the list if it is a new order or adds
 *               the quantity passed to an existing order
 ************************************************************************/
void Orders::addOrder(const souvenirs& newItem, int qty)
{
    // if the item already exists update quantity
    for(unsigned int i = 0; i < ordersList.size(); i++)
        if(newItem.getFrom() == ordersList.at(i).item.getFrom() &&
           ordersList.at(i).item.getSouvenirName() == newItem.getSouvenirName())
        {
            ordersList.at(i).quantity += qty;
            return;
        }

    // else add a new order to the orders list
    order newOrder(qty, newItem);
    ordersList.push_back(newOrder);
}

/************************************************************************
 * modifyOrder
 *  Description: Modify the quantity of an existing order or deletes an
 *               order (qty = -1). Returns false if the function failed.
 ************************************************************************/
bool Orders::modifyOrder(const souvenirs& newItem, int qty)
{
    bool successful = false; // true if remove was successful

    // search orders for item
    for(auto it = ordersList.begin(); it != ordersList.end(); it++)
        if(it->item.getFrom() == newItem.getFrom() &&
           it->item.getSouvenirName() == newItem.getSouvenirName())
        {
            if(qty == -1)             // if qty wasn't set
            {                         // delete order
                successful = true;
                ordersList.erase(it);
            }
            else if(qty == abs(qty))  // if qty is valid
            {                         // modify quantity
                successful = true;
                it->quantity = qty;
            }
            break;
        }

    return successful;
}

/************************************************************************
 * clearOrders
 *  Description: Clears all orders from the list
 ************************************************************************/
void Orders::clearOrders()
{
    ordersList.clear();
}

/************************************************************************
 * isEmpty
 *  Description: Returns true if there are no orders
 ************************************************************************/
bool Orders::isEmpty()
{
    return ordersList.size() == 0;
}

/************************************************************************
 * getItem
 *  Description: Returns the item at the specified position
 ************************************************************************/
const souvenirs& Orders::getItem(unsigned int pos)
{
    return ordersList.at(pos).item;
}

/************************************************************************
 * getStadium
 *  Description: Returns the restaurant id associated with the order/item
 ************************************************************************/
QString Orders::getStadium(unsigned int pos) const
{
    return ordersList.at(pos).item.getFrom();
}

/************************************************************************
 * getGrandTotal
 *  Description: Determines the grand total of all orders
 ************************************************************************/
double Orders::getGrandTotal() const
{
    double total = 0;

    for(auto it = ordersList.begin(); it != ordersList.end(); it++)
        total += it->quantity * it->item.getPrice();

    return total;
}

/************************************************************************
 * getRestaurantTotal
 *  Description: Determines total of all items from the restaurant (id)
 *               specified.
 ************************************************************************/
double Orders::getStadiumTotal(QString stadium) const
{
    double total = 0;

    for(auto it = ordersList.begin(); it != ordersList.end(); it++)
        if(it->item.getFrom() == stadium)
            total += it->quantity * it->item.getPrice();

    return total;
}

/************************************************************************
 * getSize
 *  Description: Returns the number of orders
 ************************************************************************/
unsigned int Orders::getSize()
{
    return ordersList.size();
}

/************************************************************************
 * getOrders
 *  Description: Returns the quantity of an item ordered
 ************************************************************************/
int Orders::getQty(unsigned int index)
{
    return ordersList.at(index).quantity;
}
