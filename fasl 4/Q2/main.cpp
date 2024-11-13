#include "Queue.h"
#include <iostream>

using namespace std;

int main() {

    Queue a(10);
    a.push(1);
    a.push(7);
    a.push(2);
    a.push(6);
    a.push(1);
    a.push(5);
    a.push(2);
    a.push(9);
    a.push(3);
    a.push(10);

    a.print();cout<<endl;

    a.pop();
    a.print();cout<<endl;

    a.push(99);
    a.print();cout<<endl;

    a.pop();
    a.print();cout<<endl;

    a.push(10);
    a.print();cout<<endl;

    a.pop();
    a.print();cout<<endl;

    a.pop();
    a.print();cout<<endl;

    a.pop();
    a.print();cout<<endl;

    a.pop();
    a.print();cout<<endl;

    a.pop();
    a.print();cout<<endl;

    a.pop();
    a.print();cout<<endl;

    a.pop();
    a.print();cout<<endl;

    a.pop();
    a.print();cout<<endl;

    a.pop();

    a.print();cout<<endl;

    a.pop();
    a.print();cout<<endl;

    a.pop();
    a.print();cout<<endl;

}
