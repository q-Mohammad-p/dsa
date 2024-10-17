#include <iostream>

using namespace std;

int sum(int num, int n) {
    if (n == num)
        return 1;

    return 1 + (n + 1) * sum(num, n + 1);
}


int main() {
    cout << sum(4, 1);
    return 0;
}
