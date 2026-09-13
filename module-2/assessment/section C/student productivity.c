#include <stdio.h>
#include <string.h>
#define SUBJECTS 3
#define DAYS 7
struct StudyLog
{
    char subject[40];
    float hours[7];
};
void displayReport(struct StudyLog logs[])
{
    int i, j;
    float total, average;
    printf("\n========== WEEKLY REPORT ==========\n");
    for(i = 0; i < SUBJECTS; i++)
    {
        total = 0;
        printf("\nSubject: %s\n", logs[i].subject);
        for(j = 0; j < DAYS; j++)
        {
            total += logs[i].hours[j];
        }
        average = total / DAYS;
        printf("Weekly Total Hours : %.2f\n", total);
        printf("Daily Average      : %.2f\n", average);
        printf("Progress Chart:\n");
        for(j = 0; j < DAYS; j++)
        {
            printf("Day %d: ", j + 1);
            int dots = (int)logs[i].hours[j];
            for(int k = 0; k < dots; k++)
            {
                printf("* ");
            }
            printf("(%.1f hrs)\n", logs[i].hours[j]);
        }
    }
}
int main()
{
    struct StudyLog logs[SUBJECTS] =
    {
        {"Programming", {0}},
        {"Mathematics", {0}},
        {"Database", {0}}
    };
    int choice;
    int day;
    int i;
    do
    {
        printf("\n===== STUDENT PRODUCTIVITY TRACKER =====\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter Day Number (1-7): ");
                scanf("%d", &day);
                if(day < 1 || day > 7)
                {
                    printf("Invalid day number!\n");
                    break;
                }
                for(i = 0; i < SUBJECTS; i++)
                {
                    printf("Enter study hours for %s: ",
                           logs[i].subject);
                    scanf("%f", &logs[i].hours[day - 1]);
                }
                printf("Study hours recorded successfully!\n");
                break;
            case 2:
                displayReport(logs);
                break;
            case 3:
            {
                FILE *fp;
                fp = fopen("productivity_log.txt", "w");
                if(fp == NULL)
                {
                    printf("Error creating file!\n");
                    return 1;
                }
                for(i = 0; i < SUBJECTS; i++)
                {
                    fprintf(fp, "%s",
                            logs[i].subject);
                    for(int j = 0; j < DAYS; j++)
                    {
                        fprintf(fp, ",%.2f",
                                logs[i].hours[j]);
                    }
                    fprintf(fp, "\n");
                }
                fclose(fp);
                printf("Data saved to productivity_log.txt\n");
                printf("Exiting program...\n");
                break;
            }
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 3);
    return 0;
}