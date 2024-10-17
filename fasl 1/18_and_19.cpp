#include <iostream>

using namespace std;

void duplicate(string s) {

    if (s.length() == 0) {
        cout << "Yes";
        return;
    }
    if (s.length() % 2 != 0) {
        cout << "No";
        return;
    }
    int j = s.length() / 2;
    int i = 0;

    for (; j < s.length(); i++, j++) {
        if (s[i] != s[j]) {
            cout << " for No";
            return;
        }
    }
    string s2;
    s2 = s.substr(1, s.length() / 2 - 1);
    duplicate(s2);
}

int main() {
    string s = "htmmtmmhtmmtmm";
    duplicate(s);
}