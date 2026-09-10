#include <stdio.h>
void getUserInitials(char name[])
{
    printf("%c %c", name[0], name[4]);
}
int main()
{
    char name[] = "Jay Sanjna";
    printf("Initials: ");
    getUserInitials(name);
    return 0;
}
