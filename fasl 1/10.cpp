#include <iostream>

using namespace std;

double sum(double num, double n) {
    if (n == num)
        return 1;
    return 1 + 1 / (n + 1) * sum(num, n + 1);
}

int main() {
    cout << sum(4, 1);
}