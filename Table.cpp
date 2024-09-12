#include "Table.h"
using namespace std;

Table::Table(int num) : tableNumber(num), order(nullptr) {}

// place the order on the table
void Table::placeOrder(Order* newOrder) {
    order = newOrder;
}

void Table::updateOrderStatus(OrderStatus newStatus) {
    // check if order is not null pointer
    if(order) { order->setStatus(newStatus); }
}

void Table::displayOrder() const {
    // if the table has an order from customer, then display the order and the number of table
    if(order) {
        std::string status;
        switch (order->getStatus())
        {
        case OrderStatus::NotYetTaken:
            status = "Pesanan Belum diambil";
            break;
        case OrderStatus::InKitchen:
            status = "Pesanan sedang dibuat";
            break;
        case OrderStatus::Served:
            status = "Pesanan sudah diantar";
            break;
        }
        std::cout << "Meja " << tableNumber << " Pesanan: " << order->getItem() << " - Status: " << status << std::endl;
    }
    else {
        // print that the table not get the order yet
        std::cout << "Meja " << tableNumber << " tidak ada pesanan." << std::endl;
    }
}