#include <stdio.h>

int main() {
    char name[10];
    int age[10];
    char dob[40];
    char qualification[80];
    char address[100];
    char phone[10];
    char email[100];

    printf("========== BIODATA ==========\n\n");

    printf("Enter Name: ");
    scanf(" %s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Date of Birth (DD/MM/YYYY): ");
    scanf(" %s", dob);

    printf("Enter Qualification: ");
    scanf(" %s", qualification);

    printf("Enter Address: ");
    scanf(" %s", address);

    printf("Enter Phone Number: ");
    scanf(" %s", phone);

    printf("Enter Email: ");
    scanf(" %s", email);

    return 0;
}