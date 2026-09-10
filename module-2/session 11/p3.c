#include <stdio.h>
int main()
{
    int orders[5] = {100, 200, 300, 400, 500};
    int *ptr = orders;
    for(int i = 0; i < 5; i++)
    {
        printf("Amount = %d, Address = %p\n", *ptr, ptr);
        ptr++;
    }
    return 0;
}