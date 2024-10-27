#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE], front = -1, rear = -1;
bool isFull() {
    return (rear == SIZE - 1);
}
bool isEmpty() {
    return (front == -1 || front > rear);
}
void enqueue(int element) {
    if (isFull()) {
        cout << "Queue is full!\n";
    } else {
        if (front == -1) front = 0;
        rear++;
        queue[rear] = element;
        cout << "Enqueued: " << element << endl;
    }
}
void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty!\n";
    } else {
        cout << "Dequeued: " << queue[front] << endl;
        front++;
    }
}
void peek() {
    if (isEmpty()) {
        cout << "Queue is empty!\n";
    } else {
        cout << "Front element: " << queue[front] << endl;
    }
}
void display() {
    if (isEmpty()) {
        cout << "Queue is empty!\n";
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}
int main() {
    int choice, value;
        cout << "\n--- Queue Operations Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please choose again.\n";
        }
    

    return 0;
}
