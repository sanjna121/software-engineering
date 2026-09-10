#include <stdio.h>
int main() {
    int choice;
    char team[50];

    while (choice != 3) {

        printf("\n	IPL MENU         \n");
        printf("1. View Favorite 3 Teams\n");
        printf("2. Add New Team\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\n1. Mumbai Indians\n");
            printf("2. Chennai Super Kings\n");
            printf("3. Royal Challengers Bengaluru\n");
        }
        else if (choice == 2) {
            printf("Enter new team: ");
            scanf("%s", team);
            printf("New team added: %s\n", team);
        }
        else if (choice == 3) {
            printf("Thank you! Program ended.\n");
        }
        else {
            printf("Invalid choice!\n");
        }
    }
}
