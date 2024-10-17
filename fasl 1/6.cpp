#include <iostream>

using namespace std;

int Product(int num1, int num2){
    if (num2 == 0)
        return 0;
    return num1 + Product(num1, num2 -1);
}

int main() {
    cout<<Product(5, 6);
    return 0;
}