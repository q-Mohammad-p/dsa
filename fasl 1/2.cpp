#include <iostream>

using namespace std;

float avg(float arr[], int start, int end, float sum) {
    if (start == end)
        return arr[start];
    sum = arr[start] + avg(arr, start + 1, end, sum);
    if (start == 0)
        return sum / (float) (end + 1);
    return sum;
}

int main() {

    float arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << avg(arr, 0, 9, 0);
    return 0;
}
