#include <iostream>
#include "Customer.h"

int main() {
    // Create a customer object
    Customer customer;

    // Start the emotion timer for the customer
    std::cout << "Starting customer emotion countdown...\n";
    customer.startEmotionTimer();

    return 0;
}
