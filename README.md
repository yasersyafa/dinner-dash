# Dinner Dash Project Using C++
For educational purpose <br>
Team:
- Muhammad Yaser Syafa Al-Machdi (5223600080)
- Adhitya Wira Wardhana (5223600078)

---

## Description

The program simulates customer interactions in a restaurant:
- **Customers place orders**, which are managed by a waiter.
- **Waiters** pick up orders from tables, deliver them to the kitchen, and return with the prepared food to serve the customers.
- The status of each order is displayed as it progresses through these stages: `Not Yet Taken`, `In Kitchen`, and `Served`.

## Class Structure

### 1. `Order` Class

The `Order` class is responsible for managing the details and status of each order placed by the customers.

- **Attributes**:
  - `item`: The name of the dish that has been ordered.
  - `status`: The current status of the order (e.g., `Not Yet Taken`, `In Kitchen`, `Served`).

- **Methods**:
  - `setStatus(OrderStatus newStatus)`: Changes the status of the order.
  - `getStatus()`: Returns the current status of the order.
  - `getItem()`: Returns the name of the dish.

- **Enum**:
  - `OrderStatus`: Enum representing the possible statuses of an order (`NotYetTaken`, `InKitchen`, `Served`).

---

### 2. `Table` Class

The `Table` class manages a table in the restaurant. It is responsible for tracking the order placed by the customer and displaying the current status of the order.

- **Attributes**:
  - `tableNumber`: The number of the table.
  - `order`: A pointer to the `Order` object associated with the table.

- **Methods**:
  - `placeOrder(Order* newOrder)`: Associates a new order with the table.
  - `updateOrderStatus(OrderStatus newStatus)`: Updates the status of the order placed at the table.
  - `displayOrder()`: Displays the current status of the order placed at the table.

---

### 3. `Waiter` Class

The `Waiter` class manages interactions between the customer and the kitchen. It simulates the actions of a waiter in taking and delivering orders.

- **Methods**:
  - `takeOrder(Table& table, Order* order)`: The waiter takes the order from the customer at the specified table.
  - `deliverToKitchen(Table& table)`: The waiter delivers the order to the kitchen.
  - `serveOrder(Table& table)`: The waiter serves the prepared order back to the customer's table.

---

## Program Flow

1. **Order Creation**: The customer places an order (represented by the `Order` class), and the waiter takes the order.
2. **Order Processing**: After the waiter takes the order, they deliver it to the kitchen, changing its status to `In Kitchen`.
3. **Order Serving**: Once the food is prepared, the waiter brings it back to the customer, and the order status changes to `Served`.
4. **Order Status Display**: The status of the order is displayed at each step of the process on the corresponding table.

### Example Flow in `main.cpp`:

- A new table (`table1`) and a new order (`order1`, e.g., "Burger") are created.
- The waiter takes the order, delivers it to the kitchen, and then serves it.
- At each stage, the status of the order is displayed on the table.

