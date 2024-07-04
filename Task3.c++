//To do list in c++ entering from console
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

vector<Task> taskList;

void addTask() {
    Task newTask;
    cout << "Enter task description: ";
    getline(cin, newTask.description);
    newTask.completed = false;
    taskList.push_back(newTask);
    cout << "Task added successfully!" << endl;
}

void viewTasks() {
    cout << "Task List:" << endl;
    for (int i = 0; i < taskList.size(); i++) {
        cout << "[" << (taskList[i].completed ? "X" : " ") << "] " << taskList[i].description << endl;
    }
}

void markTaskAsCompleted() {
    int taskIndex;
    cout << "Enter task number to mark as completed: ";
    cin >> taskIndex;
    if (taskIndex >= 1 && taskIndex <= taskList.size()) {
        taskList[taskIndex - 1].completed = true;
        cout << "Task marked as completed!" << endl;
    } else {
        cout << "Invalid task number!" << endl;
    }
}

void removeTask() {
    int taskIndex;
    cout << "Enter task number to remove: ";
    cin >> taskIndex;
    if (taskIndex >= 1 && taskIndex <= taskList.size()) {
        taskList.erase(taskList.begin() + taskIndex - 1);
        cout << "Task removed successfully!" << endl;
    } else {
        cout << "Invalid task number!" << endl;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "To-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                markTaskAsCompleted();
                break;
            case 4:
                removeTask();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
        cout << endl;
    }
    return 0;
}