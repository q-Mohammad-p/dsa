#include <iostream>

using namespace std;

void findBinay(int num) {
    if (num == 0)
        return;
    findBinay(num / 2);
    cout << num % 2;
}

int main() {
    findBinay(137);
    return 0;
}
