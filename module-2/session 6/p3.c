#include <stdio.h>
int main()
{
    int choice;
    do
    {
        printf("Guess the song:\n");
        printf("1. Silsila\n");
        printf("2. hum dil de chuke sanam\n");
        printf("3. baby now that i found you\n");
        printf("Enter song number: ");
        scanf("%d", &choice);
    } while (choice != 1);
    printf("Correct! You guessed the song!");
    return 0;
}
