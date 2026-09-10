#include <stdio.h>
struct FoodItem
{
    char itemName[50];
    float price;
    float rating;
};
int main()
{
    struct FoodItem menu[3] =
    {
        {"Dosa", 249.0, 4.5},
        {"Veg Biryani", 199.0, 4.3},
        {"Rimzim", 299.0, 4.6}
    };
    for(int i = 0; i < 3; i++)
    {
        printf("\nItem %d\n", i + 1);
        printf("Name: %s\n", menu[i].itemName);
        printf("Price: %.2f\n", menu[i].price);
        printf("Rating: %.1f\n", menu[i].rating);
    }
    return 0;
}