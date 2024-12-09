#include <iostream>

using namespace std;

class node {
public:
    int data;
    node *next;

public:
    node() : data(0), next(nullptr) {}

    node(int a) : data(a), next(nullptr) {}
};

class stack {
private:
    node *head;
public:
    stack() : head(nullptr) {}

    void push(int n) {
        node *temp = new node(n);
        temp->next = head;
        head = temp;
    }

    int pop() {
        if (head == nullptr) {
            cout << "empty";
            return -1;
        }
        int num = head->data;
        node *temp = head;
        head = head->next;
        delete temp;
        return num;
    }

    void print() {
        node *temp = head;
        while (temp != nullptr) {
            cout << temp->data << "  ";
            temp = temp->next;
        }
        cout << endl;
    }
};