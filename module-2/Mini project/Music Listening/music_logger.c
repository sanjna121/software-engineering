#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define DAYS 7
#define LOG_FILE "music_log.txt"

const char *dayNames[DAYS] = {
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday"
};

void displayMenu(void);
void logListeningMinutes(int musicMinutes[]);
void viewSummary(int musicMinutes[]);
void generateReport(void);
void resetData(int musicMinutes[]);
void saveToFile(const int musicMinutes[]);
int loadFromFile(int musicMinutes[]);
int fileHasData(void);
void displayGraph(const int musicMinutes[]);
void clearInputBuffer(void);

int main(void)
{
    int musicMinutes[DAYS] = {0};
    int choice = 0;

    loadFromFile(musicMinutes);

    while (choice != 5)
    {
        displayMenu();

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a number from 1 to 5.\n");
            clearInputBuffer();
            choice = 0;
            continue;
        }
        clearInputBuffer();

        switch (choice)
        {
        case 1:
            logListeningMinutes(musicMinutes);
            break;
        case 2:
            viewSummary(musicMinutes);
            break;
        case 3:
            generateReport();
            break;
        case 4:
            resetData(musicMinutes);
            break;
        case 5:
            printf("Exiting Music Listening Logger. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please enter a number from 1 to 5.\n");
            break;
        }
    }

    return 0;
}

void displayMenu(void)
{
    printf("\n===== MUSIC LISTENING LOGGER =====\n\n");
    printf("1. Log Weekly Listening Minutes\n");
    printf("2. View Weekly Summary\n");
    printf("3. Generate Weekly Report\n");
    printf("4. Reset Weekly Data\n");
    printf("5. Exit\n\n");
    printf("Enter your choice: ");
}

void clearInputBuffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

void saveToFile(const int musicMinutes[])
{
    FILE *fp = fopen(LOG_FILE, "w");
    int i;

    if (fp == NULL)
    {
        printf("Error: could not save data to %s.\n", LOG_FILE);
        return;
    }

    for (i = 0; i < DAYS; i++)
    {
        fprintf(fp, "%s %d\n", dayNames[i], musicMinutes[i]);
    }

    fclose(fp);
}

int loadFromFile(int musicMinutes[])
{
    FILE *fp = fopen(LOG_FILE, "r");
    char dayName[32];
    int minutes;
    int count = 0;

    if (fp == NULL)
    {
        return 0;
    }

    while (count < DAYS && fscanf(fp, "%31s %d", dayName, &minutes) == 2)
    {
        musicMinutes[count] = minutes;
        count++;
    }

    fclose(fp);
    return count == DAYS;
}

int fileHasData(void)
{
    FILE *fp = fopen(LOG_FILE, "r");
    char dayName[32];
    int minutes;

    if (fp == NULL)
    {
        return 0;
    }

    if (fscanf(fp, "%31s %d", dayName, &minutes) == 2)
    {
        fclose(fp);
        return 1;
    }

    fclose(fp);
    return 0;
}

void logListeningMinutes(int musicMinutes[])
{
    int i;
    int minutes;

    printf("\nEnter listening minutes for each day of the week.\n");
    printf("Minutes cannot be negative.\n\n");

    for (i = 0; i < DAYS; i++)
    {
        while (1)
        {
            printf("%s: ", dayNames[i]);
            if (scanf("%d", &minutes) != 1)
            {
                printf("Please enter a whole number of minutes.\n");
                clearInputBuffer();
                continue;
            }
            clearInputBuffer();

            if (minutes < 0)
            {
                printf("Minutes cannot be negative. Try again.\n");
                continue;
            }

            musicMinutes[i] = minutes;
            break;
        }
    }

    saveToFile(musicMinutes);
    printf("\nWeekly listening minutes saved to %s.\n", LOG_FILE);
}

void displayGraph(const int musicMinutes[])
{
    int i;
    int j;
    int stars;

    printf("Listening Graph (each * = 20 minutes):\n\n");

    for (i = 0; i < DAYS; i++)
    {
        stars = musicMinutes[i] / 20;
        printf("%-10s ", dayNames[i]);
        for (j = 0; j < stars; j++)
        {
            printf("*");
        }
        if (stars == 0)
        {
            printf("-");
        }
        printf("\n");
    }
}

void viewSummary(int musicMinutes[])
{
    int i;

    printf("\n===== WEEKLY SUMMARY =====\n\n");

    for (i = 0; i < DAYS; i++)
    {
        printf("%-11s : %d minutes\n", dayNames[i], musicMinutes[i]);
    }

    printf("\n");
    displayGraph(musicMinutes);
}

void generateReport(void)
{
    int musicMinutes[DAYS] = {0};
    int i;
    int total = 0;
    int highest;
    int lowest;
    int highestDay = 0;
    int lowestDay = 0;
    double average;

    if (!fileHasData() || !loadFromFile(musicMinutes))
    {
        printf("\nNo listening data found in %s.\n", LOG_FILE);
        printf("Please log weekly listening minutes first.\n");
        return;
    }

    highest = musicMinutes[0];
    lowest = musicMinutes[0];

    for (i = 0; i < DAYS; i++)
    {
        total += musicMinutes[i];

        if (musicMinutes[i] > highest)
        {
            highest = musicMinutes[i];
            highestDay = i;
        }

        if (musicMinutes[i] < lowest)
        {
            lowest = musicMinutes[i];
            lowestDay = i;
        }
    }

    average = total / 7.0;

    printf("\n===== WEEKLY REPORT =====\n\n");
    printf("Total Listening Minutes : %d\n", total);
    printf("Average Listening Time  : %.2f\n", average);
    printf("Highest Listening Time  : %d\n", highest);
    printf("Lowest Listening Time   : %d\n", lowest);
    printf("\n");
    printf("Most Active Day         : %s\n", dayNames[highestDay]);
    printf("Least Active Day        : %s\n", dayNames[lowestDay]);
}

void resetData(int musicMinutes[])
{
    char confirm;
    int i;
    FILE *fp;

    printf("Are you sure you want to delete all data? (Y/N): ");
    if (scanf(" %c", &confirm) != 1)
    {
        clearInputBuffer();
        printf("Reset cancelled.\n");
        return;
    }
    clearInputBuffer();

    if (confirm != 'Y' && confirm != 'y')
    {
        printf("Reset cancelled. Returning to menu.\n");
        return;
    }

    for (i = 0; i < 7; i++)
    {
        musicMinutes[i] = 0;
    }

    fp = fopen(LOG_FILE, "w");
    if (fp == NULL)
    {
        printf("Error: could not clear %s.\n", LOG_FILE);
        return;
    }
    fclose(fp);

    printf("All weekly data has been reset successfully.\n");
}
