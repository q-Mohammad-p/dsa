#include <iostream>

using namespace std;

class node{
public:
    int data;
    node *next;
    node *pre;

    node():data(0), next(nullptr), pre(nullptr){}

    node(int a):data(a), next(nullptr), pre(nullptr){}
};


void circular(node *head){
    node *temp = head;

    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = head;
    head->pre = temp;
}