#include "Waiter.h"
using namespace std;
void Waiter::takeOrder(Table& table, Order* order) {
    table.placeOrder(order);
    std::cout << "Pelayan mengambil pesanan" << std::endl;
}

void Waiter::deliverToKithcen(Table& table) {
    table.updateOrderStatus(OrderStatus::InKitchen);
    std::cout << "Pesanan sedang diproses" << std::endl;
}

void Waiter::serveOrder(Table& table) {
    table.updateOrderStatus(OrderStatus::Served);
    std::cout << "Pesanan sudah diantar" << std::endl;
}