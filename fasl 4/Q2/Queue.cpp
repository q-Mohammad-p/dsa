#include "Queue.h"
#include <iostream>

using namespace std;

void Queue::push(int k) {
    if (f == (r + 1) % (size - 1)) {
        cout << "full " << endl;
        return;
    }
    if (f == -1)
        f = 0;
    r = (r + 1) % size;
    Q[r] = k;
}

void Queue::pop() {
    if (r == f) {
        if (r != 0)
            cout << "Empty " << endl;
        r = f = -1;
        return;
    }
    int i = f;
    int maxIndex = f;
    int count = 0;
    while (i != r) {
        count++;
        if (Q[i] > Q[maxIndex]) {
            maxIndex = i;
        }
        i = (i + 1) % size;
    }
    if (Q[r] > Q[maxIndex])
        maxIndex = r;
    int j = maxIndex;
    while (j != f) {
        if (j == 0) {
            Q[j] = Q[size - 1];
            j = size;
        } else
            Q[j] = Q[j - 1];
        j--;
    }
    f = (f + 1) % size;

}

void Queue::print() {
    if (f == -1)
        return;
    int i = f;
    int k;
    if (r < f) {
        k = (size - 1) - f + r + 1;
    } else
        k = r - f;
    int count = 0;

    for (; count <= k; i = (i + 1) % size, count++) {
        cout << Q[i] << "  ";
    }
}

