#include <iostream>

using namespace std;

int func(int n, int m) {
    if (n  < m) return 0;
    int res = 1;
    for (int i = 0; i < m; ++i) {
        res = res * (n - i) / (i + 1);
    }
    return res;
}

int main() {
    cout << func(5, 2);
}