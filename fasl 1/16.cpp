#include <iostream>

using namespace std;

void findSubsets(int set[], int subset[], int n, int index, int subsetIndex) {
    if (index == n) {
        for (int i = 0; i < subsetIndex; i++) {
            std::cout << subset[i] << " ";
        }
        cout << endl;
        return;
    }
    subset[subsetIndex] = set[index];
    findSubsets(set, subset, n, index + 1, subsetIndex + 1);

    findSubsets(set, subset, n, index + 1, subsetIndex);
}

int main() {
    int set[] = {1, 2, 3, 4};
    int n = sizeof(set) / sizeof(set[0]);
    int subset[n];

    std::cout << "subs :" << std::endl;
    findSubsets(set, subset, n, 0, 0);

    return 0;
}
