#include <stdio.h>
#include <string.h>

void addToCart(char cart[][50], int *count, char product[])
{
    strcpy(cart[*count], product);
    (*count)++;

    printf("Updated Cart:\n");
    int i;

    for ( i = 0; i < *count; i++)
    {
        printf("%s\n", cart[i]);
    }
}

int main()
{
    char cart[10][50] = {"dress"};
    int count = 1;

    addToCart(cart, &count, "lip gloss");

    return 0;
}