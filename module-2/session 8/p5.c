#include <stdio.h>
#include <ctype.h>
void capitalize(char name[])
{
    name[0] = toupper(name[0]);
}
int main()
{
    char product[] = "macbook";
    char username[] = "sanjna";
    capitalize(product);
    capitalize(username);
    printf("Product: %s\n", product);
    printf("Username: %s\n", username);

    return 0;
}
