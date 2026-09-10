#include <stdio.h>
struct Time
{
    int hour;
    int minute;
};
struct MovieShow
{
    char movie[20];
    int screen;
    struct Time time;
};
int main()
{
    struct MovieShow show = {"Mirzapur", 2, {10, 45}};
    printf("Movie: %s\n", show.movie);
    printf("Screen: %d\n", show.screen);
    printf("Time: %d:%d\n", show.time.hour, show.time.minute);
    return 0;
}