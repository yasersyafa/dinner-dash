#ifndef ORDER_H
#define ORDER_H

#include <string>

using namespace std;


enum class OrderStatus {
    NotYetTaken,
    InKitchen,
    Served
};

// class order
class Order {
    private:
        std::string item;
        OrderStatus status;
    public:
        // constructor
        Order(std::string item);

        // setter function for order status
        void setStatus(OrderStatus newStatus);

        // getter function for order status & name of item
        OrderStatus getStatus() const;
        std::string getItem() const;

};

#endif