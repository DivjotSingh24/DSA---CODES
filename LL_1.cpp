#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor for Node class
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;  // Pointer to the first node (head) of the list

public:
    // Constructor for LinkedList class (initially empty)
    LinkedList() {
        head = nullptr;
    }

    // Set the head of the list
    void setHead(Node* node) {
        head = node;
    }

    // Display the linked list (for testing)
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "null" << endl;
    }
};

int main() {
    // Create a linked list
    LinkedList list;

    // Create some nodes
    Node* node1 = new Node(10);  // Node with value 10
    Node* node2 = new Node(20);  // Node with value 20

    // Link the nodes together
    node1->next = node2;

    // Set the head of the list to point to the first node
    list.setHead(node1);

    // Display the linked list
    list.display();  // Output: 10 -> 20 -> null

    return 0;
}
