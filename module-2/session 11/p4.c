#include <stdio.h>
void incrementFollowers(int *followers)
{
    for(int i = 0; i < 5; i++)
    {
        *followers = *followers + 100;
        followers++;
    }
}
int main()
{
    int followers[5] = {1000, 2000, 3000, 4000, 5000};
    incrementFollowers(followers);
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", followers[i]);
    }
    return 0;
}