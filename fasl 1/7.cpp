#include <iostream>

using namespace std;

int bmm(int a, int b) {
    if (b == 0)
        return a;
    return bmm(b, a % b);
}

int main() {
    int num1 = 15;
    int num2 = 6;
    cout << bmm(num1, num2) << endl;
    return 0;
}