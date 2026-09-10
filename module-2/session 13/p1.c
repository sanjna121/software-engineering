#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("playlist.txt", "w");
    fprintf(fp, "Vaaroon\n");
    fprintf(fp, "Silsila\n");
    fprintf(fp, "Dooron Dooron\n");
    fclose(fp);
    printf("Songs are mention.\n");
    return 0;
}