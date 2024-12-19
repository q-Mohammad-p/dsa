#include <iostream>

using namespace std;


class node {
public:
    int data{};
    node *next{};
    node *pre{};

    node() {}

    explicit node(int a) : data(a), next(nullptr), pre(nullptr) {};
};

class queue {
public:
    node *head;
    node *tail;

    queue() {
        head = nullptr;
        tail = nullptr;
    }

    explicit queue(node *h) : head(h), tail(h) {}

    void enQueue(int n) {
        if (tail != nullptr) {
            node *temp = new node(n);
            tail->next = temp;
            temp->pre = tail;
            tail = temp;
        } else {
            head = tail = new node(n);
        }
    }

    int deQueue() {
        node *temp = head;
        node *max = head;
        if (head == nullptr) {
            cout << "empty";
            return -1;
        }
        if (head->next == nullptr) {
            int temp2 = head->data;
            head = tail = nullptr;
            return temp2;
        }
        while (temp != nullptr) {
            if (max->data < temp->data)
                max = temp;
            temp = temp->next;
        }
        int num = max->data;
        max->pre->next = max->next;
        if (max->next != nullptr)
            max->next->pre = max->pre;
        delete max;
        return num;
    }

    void print() const {
        node *temp = head;
        while (temp != nullptr) {
            cout << temp->data << "   ";
            temp = temp->next;
        }
    }

    ~queue() {
        node *temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

void sort() {
    cout << "enter a number : ";
    int n, num;
    cin >> n;
    queue a;
    for (int i = 0; i < n; ++i) {
        cout << "enter num:";
        cin >> num;
        a.enQueue(num);
    }
    queue b;
    for (int i = 0; i < n; ++i) {
        cout << "d";
        int num2 = a.deQueue();
        b.enQueue(num2);
    }
    b.print();
}