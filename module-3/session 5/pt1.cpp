#include <iostream>
using namespace std;

class PaymentProcessor {
public:

    void processPayment(float amount) {
        cout << "Payment: " << amount << endl;
    }

    void processPayment(float amount, string coupon) {
        amount = amount - 100;
        cout << "Coupon: " << coupon << endl;
        cout << "Final Amount: " << amount << endl;
    }
};

int main() {
    PaymentProcessor p;

    p.processPayment(500);
    p.processPayment(500, "SAVE100");

    return 0;
}