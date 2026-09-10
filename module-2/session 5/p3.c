#include <stdio.h>
int main() {
    float amount, finalAmount;
    printf("Enter total cart amount: ");
    scanf("%f", &amount);
    if (amount > 2000) {
        finalAmount = amount - (amount * 20 / 100);
    }
    else {
        if (amount > 1000) {
            finalAmount = amount - (amount * 10 / 100);
        }
        else {
            finalAmount = amount;
        }
    }
    printf("Final amount to pay = %.2f", finalAmount);
    return 0;
}
