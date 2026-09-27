#include <iostream>
#include <vector>
using namespace std;

class Task
{
public:
    string title;
    bool isDone;

    Task(string t)
    {
        title = t;
        isDone = false;
    }

    void markDone()
    {
        isDone = true;
    }

    void display()
    {
        cout << title;

        if(isDone)
            cout << " - DONE";
        else
            cout << " - PENDING";

        cout << endl;
    }
};

class TaskList
{
private:
    vector<Task> tasks;

public:
    void addTask(string title)
    {
        tasks.push_back(Task(title));
    }

    void markTaskDone(int index)
    {
        if(index >= 0 && index < tasks.size())
        {
            tasks[index].markDone();
        }
    }

    void showTasks()
    {
        cout << "\nTask List:\n";

        for(int i = 0; i < tasks.size(); i++)
        {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
    }
};

int main()
{
    TaskList myTasks;

    myTasks.addTask("Complete Assignment");
    myTasks.addTask("Study OOP");
    myTasks.addTask("Submit Project");

    myTasks.markTaskDone(1);

    myTasks.showTasks();

    return 0;
}