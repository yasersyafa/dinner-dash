#ifndef TABLE_H
#define TABLE_H

#include <iostream>
#include "Order.h"
#include "Customer.h"
using namespace std;

class Table {
    private:
        int tableNumber;
        Order* order;
        Customer customer;

    public:
        // constructor
        Table(int num);
        
        // void for place the order
        void placeOrder(Order* newOrder);
        // update order status
        void updateOrderStatus(OrderStatus newStatus);
        // display the order on the table
        void displayOrder() const;
        Customer& getCustomer();

};


#endif