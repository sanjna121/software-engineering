#include <stdio.h>
#include <string.h>
int main() {
    char team[30];
    printf("Enter your favorite IPL team: ");
    fgets(team, sizeof(team), stdin);
    // Remove newline from input
    team[strcspn(team, "\n")] = '\0';
    if (strcmp(team, "Mumbai Indians") == 0) {
        printf("Go Mumbai Indians!\n");
    }
    else if (strcmp(team, "Chennai Super Kings") == 0) {
        printf("Chennai Super Kings for the win!\n");
    }
    else if (strcmp(team, "Royal Challengers Bengaluru") == 0) {
        printf("Is bar to milega!\n");
    }
    else if (strcmp(team, "Gujarat Lions") == 0) {
        printf("Cup to apnu chhe!\n");
    }
    else {
        printf("Team not found!\n");
    }
    return 0;
}
