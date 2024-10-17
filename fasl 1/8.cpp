#include <iostream>

using namespace std;

void truthTable(int n, string s) {
    if (s.length() == n) {
        cout << s << endl;
        return;
    }

    truthTable(n, s + '1');
    truthTable(n, s + '0');
}

int main() {
    truthTable(4, "");
    return 0;
}