#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char song[100];
    fp = fopen("playlist.txt", "r");
    while(fgets(song, sizeof(song), fp) != NULL)
    {
        if(strstr(song, "Vaaroon") != NULL)
        {
            printf("%s", song);
        }
    }
    fclose(fp);
    return 0;
}