#include <stdio.h>
int main()
{
    int likes = 500;
    int *ptrLikes = &likes;
    printf("Likes = %d\n", likes);
    printf("Address = %p\n", ptrLikes);
    return 0;
}