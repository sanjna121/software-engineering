#include <stdio.h>
int main() {
    int meal;
    printf("Choose your meal time:\n");
    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("4. Snack\n");
    printf("Enter your choice: ");
    scanf("%d", &meal);
    switch (meal) {
        case 1:
            printf("Aloo ke Parathe for breakfast!");
            break;

        case 2:
            printf("Dal Makhani with Naan for lunch!");
            break;

        case 3:
            printf("Ghotala dosa for dinner!");
            break;

        case 4:
            printf("Rimzim for a snack!");
            break;

        default:
            printf("Try some Wafers!");
    }
    return 0;
}
