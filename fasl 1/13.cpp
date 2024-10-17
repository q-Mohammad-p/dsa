#include <iostream>

using namespace std;

void hanoi(int n, char start, char help, char end) {
    if (n == 1) {
        cout << start << " --> " << end << endl;
        return;
    }
    hanoi(n - 1, start, end, help);
    cout << start << " --> " << end << endl;
    hanoi(n - 1, help, start, end);
}

int main() {
    hanoi(3, 's', 'a', 'd');
    return 0;
}
