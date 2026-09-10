#include <stdio.h>
int main() {
    char productName[] = "Macbook m4";
    float price = 190000.50;
    double rating = 4.5;
    printf("Product Name: %s (Data Type: String)\n", productName);
    printf("Price: %.2f (Data Type: Float)\n", price);
    printf("Rating: %.1lf (Data Type: Double)\n", rating);
    return 0;
}