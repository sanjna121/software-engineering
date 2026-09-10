#include <stdio.h>
#include <string.h>
int main()
{
    char user1[20], user2[20];

    printf("Enter first username: ");
    scanf("%s", user1);

    printf("Enter second username: ");
    scanf("%s", user2);

    if(strcmp(user1, user2) == 0)
        printf("Same Username");
    else
        printf("Different Username");

    return 0;
}