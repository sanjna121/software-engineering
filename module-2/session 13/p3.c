#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("playlist.txt", "a");
    fprintf(fp, "Vaaroon\n");
    fprintf(fp, "Silsila\n");
    fclose(fp);
    printf("Songs add .\n");
    return 0;
}