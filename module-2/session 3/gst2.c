#include <stdio.h>

int main()
{
    const float GST_RATE = 18.0; 
    float basePrice = 900.0;
    float finalPrice;

    finalPrice = basePrice + (basePrice * GST_RATE / 100);

    printf("Base Price = Rs. %.2f\n", basePrice);
    printf("GST Rate = %.0f%%\n", GST_RATE);
    printf("Final Price = Rs. %.2f\n", finalPrice);

    return 0;
}