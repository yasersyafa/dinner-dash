#ifndef WAITER_H
#define WAITER_H

#include <iostream>
#include "Table.h"
using namespace std;

class Waiter {
    public:
        // take the order from the table
        void takeOrder(Table& table, Order* order);
        // deliver order to the kitchen
        void deliverToKithcen(Table& table);
        // take the order from kitchen to the table
        void serveOrder(Table& table);
};

#endif