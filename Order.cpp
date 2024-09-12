#include "Order.h"
using namespace std;

// constructor to create new order and default status is NotYetTaken
Order::Order(std::string item) : item(item), status(OrderStatus::NotYetTaken) {}

// setter for change status
void Order::setStatus(OrderStatus newStatus) {
    status = newStatus;
}

// getter function for get order status, its return the OrderStatus enum
OrderStatus Order::getStatus() const {
    return status;
}

std::string Order::getItem() const {
    return item;
}
