#include <iostream>
using namespace std;

// Definition of a singly linked list node
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to find the middle node of a linked list
Node* middleLL(Node* head) {
    if (head == nullptr) return nullptr; // handle empty list

    Node* slow = head; // moves one step at a time
    Node* fast = head; // moves two steps at a time

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow; // slow points to the middle node
}

// Helper function to print the linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Demo / test code
int main() {
    // Creating a linked list: 1->2->3->4->5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Linked List: ";
    printList(head);

    Node* middle = middleLL(head);
    if (middle) {
        cout << "Middle node data: " << middle->data << endl;
    } else {
        cout << "The list is empty." << endl;
    }

    return 0;
}