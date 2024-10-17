#include <iostream>

using namespace std;

void hanoi(int n, char start, char help, char end) {
    if (n == 1) {
        cout << start << " --> " << help << endl;
        cout << help << " --> " << end << endl;
        return;
    }
    hanoi(n - 1, start, help, end);
    cout << start << " --> " << help << endl;
    hanoi(n - 1, end, help, start);
    cout << help << " --> " << end << endl;
    hanoi(n - 1, start, help, end);
}

int main() {
    hanoi(2, 's', 'a', 'd');
}