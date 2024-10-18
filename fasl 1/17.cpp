#include <iostream>

using namespace std;

int claculator(string s, int x) {
    if (s.length() == 1)
        return x;
    string s2 = s.substr(2, s.length() - 2);

    if (s[1] == '+')
        return x + claculator(s2, x);
    if (s[1] == '-')
        return x - claculator(s2, x);
    if (s[1] == '*') {
        int i = 3;
        int j = x * x;
        if (s.length() >= 4)
            s2 = s.substr(4, s.length() - 4);
        if (s[3] == '+')
            return x * x + claculator(s2, x);
        if (s[3] == '-')
            return x * x - claculator(s2, x);
        if (s[3] == '*') {
            while (s[i] == '*') {
                i += 2;
                j *= x;
            }
            if (i >= 5 and s.length() > i + 1) {
                s2 = s.substr(i + 1, s.length() - i - 1);
            }
            if (s[i] == '+')
                return j + claculator(s2, x);
            if (s[i] == '-')
                return j - claculator(s2, x);
            if (s[i] == '/')
                return j / claculator(s2, x);
            else return j;
        }
        i = 5, j = x * x;
        if (s[3] == '/') {
            s2 = s.substr(6, s.length() - 4);
            if (s[5] == '+')
                return x * x / x + claculator(s2, x);
            if (s[5] == '-')
                return x * x / x - claculator(s2, x);
            if (s[5] == '*') {
                while (s[i] == '*') {
                    i += 2;
                    j *= x;
                }
                s2 = s.substr(i + 1, s.length() - i - 1);
                if (s[i] == '+')
                    return x * x / j + claculator(s2, x);
                if (s[i] == '-')
                    return x * x / j - claculator(s2, x);
                else return x * x / j;
            }
            return x * x / x * claculator(s2, x);
        } else return x * x;
    }
    if (s[1] == '/')
        return x / claculator(s2, x);
    else return claculator(s2, x);
}

int main() {
    cout << claculator("x+x*x/x*x+x", 3);
    return 0;
}