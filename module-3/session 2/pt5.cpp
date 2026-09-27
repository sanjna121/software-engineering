#include <iostream>
using namespace std;

struct OrderData {
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(OrderData data) {
        orderId = data.orderId;
        restaurantName = data.restaurantName;
        isDelivered = data.isDelivered;
    }

    void markDelivered() {
        isDelivered = true;
        cout << "Order Delivered Successfully!" << endl;
    }
};

int main() {
    OrderData data = {101, "Burger King", false};

    FoodOrder order(data);

    order.markDelivered();

    cout << "Order ID: " << order.orderId << endl;
    cout << "Restaurant: " << order.restaurantName << endl;
    cout << "Delivered: " << order.isDelivered << endl;

    return 0;
}