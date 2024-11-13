#include <iostream>
#include "Queue.h"

using namespace std;
int main() {

    Queue a(11);
    a.push(5,2);
    a.push(2,1);
    a.push(3,1);
    a.push(10,2);
    a.push(110,2);
    a.push(12,2);
    a.push(5,1);
    a.push(6,1);
    a.push(9,1);
    a.push(15,2);
    a.push(17,2);

    a.print(1);cout<<endl;
    a.print(2);cout<<endl<<endl;

    a.pop(2);

    a.print(1);cout<<endl;
    a.print(2);cout<<endl<<endl;

    a.push(18,1);

    a.print(1);cout<<endl;
    a.print(2);cout<<endl<<endl;

    a.push(18,1);

    a.print(1);cout<<endl;
    a.print(2);cout<<endl<<endl;

    a.pop(1);

    a.print(1);cout<<endl;
    a.print(2);cout<<endl<<endl;

    a.push(22,1);

    a.print(1);cout<<endl;
    a.print(2);cout<<endl<<endl;

    a.pop(1);
    a.pop(1);
    a.pop(1);
    a.pop(1);
    a.pop(1);
    a.pop(1);

    a.print(1);cout<<endl;
    a.print(2);cout<<endl<<endl;

    a.pop(2);
    a.pop(2);
    a.pop(2);
    a.pop(2);
    a.pop(2);
    a.pop(2);

    return 0;
}
