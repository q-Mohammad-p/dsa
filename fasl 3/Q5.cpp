#include <iostream>

using namespace std;

void changeValue(int **a, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j)
                a[i][j]++;
        }
    }

    int k = n - 1;
    for (int i = 0; i < n; ++i) {
        a[i][k]--;
        k--;
    }

    for (int i = 0; i < n / 2; ++i) {
        for (int j = i + 1; j < n - (i + 1); ++j) {
            a[i][j] += 2;
        }
    }

    for (int i = n / 2 + 1; i < n; ++i) {
        for (int j = n - i; j < i; ++j) {
            a[i][j] -= 2;
        }
    }

    for (int i = 0; i < n / 2; ++i) {
        for (int j = i + 1; j < n - (i + 1); ++j) {
            a[j][i] += 3;
        }
    }

    for (int i = n / 2 + 1; i < n; ++i) {
        for (int j = n - i; j < i; ++j) {
            a[j][i] -= 3;
        }
    }
}


int main() {
    int **a = new int *[5];
    for (int i = 0; i < 5; ++i) {
        a[i] = new int[5];
    }
    int k = 0;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            a[i][j] = k++;
        }
    }

    changeValue(a, 5);

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
    for (int i = 0; i < 5; ++i) {
        delete[] a[i];
    }
    delete[] a;
}