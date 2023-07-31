#include <iostream>
#include <queue>

using namespace std;

class Task {
public:
    int id;
    int priority;
    int executionTime;

    Task() : id(0), priority(0), executionTime(0) {} // Default constructor

    Task(int _id, int _priority, int _executionTime) : id(_id), priority(_priority), executionTime(_executionTime) {}

    // Custom comparator for priority queue
    bool operator<(const Task& other) const {
        // Higher priority tasks first
        if (priority != other.priority) {
            return priority < other.priority;
        }
        // If priorities are the same, execute tasks with shorter execution time first
        return executionTime > other.executionTime;
    }
};

class TaskScheduler {
private:
    static const int MAX_TASKS = 100; // Maximum number of tasks
    Task taskArray[MAX_TASKS];
    int size;

public:
    TaskScheduler() : size(0), taskArray() {} // Initialize taskArray using default constructor

    void addTask(const Task& task) {
        if (size < MAX_TASKS) {
            taskArray[size++] = task;
        } else {
            cout << "Task scheduler is full. Cannot add more tasks." << endl;
        }
    }

    void executeTasks() {
        priority_queue<Task> taskQueue(taskArray, taskArray + size);
        while (!taskQueue.empty()) {
            Task currentTask = taskQueue.top();
            taskQueue.pop();
            cout << "Executing Task " << currentTask.id << endl;
        }
    }
};

int main() {
    TaskScheduler scheduler;

    // Adding tasks to the scheduler
    scheduler.addTask(Task(1, 2, 5));
    scheduler.addTask(Task(2, 3, 3));
    scheduler.addTask(Task(3, 2, 2));
    scheduler.addTask(Task(4, 1, 4));

    // Executing tasks based on priority and execution time
    scheduler.executeTasks();

    return 0;
}

