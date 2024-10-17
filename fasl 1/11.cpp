#include <iostream>

using namespace std;

void coins(int value, int ten = 0, int five = 0, int two = 0) {
    if (value == 0) {
        cout<<ten<<" ten and  "<<five<<" five and  "<<two<<" two"<<endl;
        return;
    }

    if (value >= 10)
        coins(value - 10, ten + 1, five, two);

    if (value >= 5)
        coins(value - 5, ten, five + 1, two);

    if (value >= 2)
        coins(value - 2, ten, five, two + 1);
}

int main() {
    coins(20);
    return 0;
}
