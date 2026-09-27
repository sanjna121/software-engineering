#include <stdio.h>
#include <string.h>
char tasks[5][100];
int status[5] = {0};
int taskCount = 0;
void markTaskDone(int index)
{
    if(index >= 0 && index < taskCount)
    {
        status[index] = 1;
    }
}
int main()
{
    int i, choice;
    printf("Enter 5 tasks:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Task %d: ", i + 1);
        fgets(tasks[i], sizeof(tasks[i]), stdin);
        tasks[i][strcspn(tasks[i], "\n")] = '\0';
        taskCount++;
    }
    printf("\nEnter task number to mark as DONE: ");
    scanf("%d", &choice);
    markTaskDone(choice - 1);
    printf("\nUpdated Task List:\n");
    for(i = 0; i < taskCount; i++)
    {
        if(status[i] == 1)
            printf("%d. %s - DONE\n", i + 1, tasks[i]);
        else
            printf("%d. %s\n", i + 1, tasks[i]);
    }
    return 0;
}