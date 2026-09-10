#include <stdio.h>
#include <string.h>
int main()
{
    char name[20], username[20];
    printf("Enter your name: ");
    scanf("%s", name);
    if(strlen(name) < 5)
    {
        strcpy(username, name);
    }
    else
    {
        strncpy(username, name, 5);
        username[5] = '\0';
    }
    printf("Username: %s", username);
    return 0;
}