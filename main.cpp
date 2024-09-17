#include <iostream>
#include <thread>
#include "Table.h"
#include "Waiter.h"
#include "Order.h"
#include "Customer.h"

int main() {
    Table table1(1);
    Order order1("Spaghetti");
    Waiter waiter;
    // Create a customer object
    table1.placeOrder(&order1);
    waiter.takeOrder(table1, &order1);
    table1.displayOrder();

    std::thread emotionThread(&Customer::startEmotionTimer, &table1.getCustomer());

    // Start emotion timer for the customer
    std::cout << "Starting customer emotion countdown at table 1...\n";
    table1.getCustomer().startEmotionTimer();  // Start emotion countdown for the customer


    // Continue with the rest of the order process
    waiter.deliverToKithcen(table1);
    table1.displayOrder();

    waiter.serveOrder(table1);
    table1.displayOrder();

    emotionThread.join();

    return 0;
}
