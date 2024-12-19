#include <iostream>

using namespace std;

class node {
public:
    int data;
    node *next;

    node() {}

    node(int n) : data(n), next(nullptr) {}
};

node * add(node *head, int n) {
    node *newNode = new node(n);
    newNode->next = head;
    head = newNode;
    return head;
}

void copy(node *head) {
    if (head == nullptr)
        return;
    node *temp = new node(head->data);
    temp->next = head->next;
    head->next = temp;
    copy(head->next->next);
}

void print(node *head) {
    node *temp = head;
    while (temp != nullptr) {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}
