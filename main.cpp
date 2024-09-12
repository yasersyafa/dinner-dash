#include "Table.h"
#include "Order.h"
#include "Waiter.h"

int main(int argc, char const *argv[])
{
    Table table1(1);
    Order order1("Burger");
    Waiter waiter;

    waiter.takeOrder(table1, &order1);
    table1.displayOrder();

    waiter.deliverToKithcen(table1);
    table1.displayOrder();

    waiter.serveOrder(table1);
    table1.displayOrder();
    return 0;
}
