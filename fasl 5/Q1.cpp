#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void push(Node*& head, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteMax(Node*& head) {
    if (head == nullptr) {
        return;
    }

    Node* maxNode = head;
    Node* temp = head;
    Node* prev = nullptr;
    Node* maxPrev = nullptr;

    while (temp != nullptr) {
        if (temp->data > maxNode->data) {
            maxNode = temp;
            maxPrev = prev;
        }
        prev = temp;
        temp = temp->next;
    }

    if (maxNode == head) {
        head = head->next;
    } else {
        maxPrev->next = maxNode->next;
    }

    delete maxNode;
}

int main() {
    Node* head = nullptr;
    push(head, 3);
    push(head, 1);
    push(head, 7);
    push(head, 2);
    push(head, 5);

    cout << "Original list: ";
    printList(head);
    deleteMax(head);

    cout << "List after deleting the max element: ";
    printList(head);

    return 0;
}
