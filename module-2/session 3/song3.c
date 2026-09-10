#include <stdio.h>

int main()
{
    char playlistName[] = "kk songs playlist";
    int totalSongs = 10;
    float avgDuration = 5.00;

    printf("My favorite Spotify playlist is '%s', containing %d songs with an average duration of %.1f minutes per song.\n",
           playlistName, totalSongs, avgDuration);

    return 0;
}