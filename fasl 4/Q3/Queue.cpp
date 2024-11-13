#include "Queue.h"
#include <iostream>

using namespace std;

void Queue::push(int k, int num) {

    if (num == 1) {
        if (((f1 - r1 + (size - 1)) % size) + ((f2 - r2 + (size - 1)) % size) == size) {
            cout << "full " << endl;
            return;
        }

        int i = r2;
        if ((r1 + 1) % (size - 1) == f2) {
            while (i != f2 - 1) {
                Q[(i + 1) % size] = Q[i];
                i = (i - 1) % size;
            }
            r2 = (r2 + 1) % size;
            f2 = (f2 + 1) % size;
        }
        if (f1 == -1)
            f1 = 0;
        r1 = (r1 + 1) % size;
        Q[r1] = k;
    } else {
        if (f1 == (r2 + 1) % size) {
            cout << "full " << endl;
            return;
        }
        if (r2 < r1) {
            for (int i = r1; i > f1; i--) {
                Q[i + 1] = Q[i];
            }
            f1++;
            r1++;
        }
        if (f2 == -1)
            f2 = 0;
        r2 = (r2 + 1) % size;
        Q[r2] = k;
    }
}

void Queue::pop(int num) {
    if (num == 1) {
        if (r1 == f1) {
            if (r1 != 0)
                cout << "Empty " << endl;
            r1 = f1 = -1;
            return;
        }
        f1 = (f1 + 1) % size;
    } else {
        if (r2 == f2) {
            if (r2 != 0)
                cout << "Empty " << endl;
            r2 = f2 = -1;
            return;
        }
        f2 = (f2 + 1) % size;
    }

}

void Queue::print(int num) const {
    int a, b;
    if (num == 1) {
        a = f1;
        b = r1;
    } else {
        a = f2;
        b = r2;
    }
    if (a == -1)
        return;
    int i = a;
    int k;
    if (b < a) {
        k = (size - 1) - a + b + 1;
    } else
        k = b - a;
    int count = 0;

    for (; count <= k; i = (i + 1) % size, count++) {
        cout << Q[i] << "  ";
    }
}

