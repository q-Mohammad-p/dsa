#include <iostream>

#include <vector>

using namespace std;

void coins(int value, int ten, int five, int two, vector<vector<int>> &p) {
    if (value == 0) {
        for (int i = 0; i < p.size(); ++i) {
            if (p[i][0] == ten and p[i][1] == five and p[i][2] == two) {
                return;
            }
        }
        p.push_back({ten, five, two});
        cout << ten << " ten and  " << five << " five and  " << two << " two" << endl;
        return;
    }

    if (value >= 10)
        coins(value - 10, ten + 1, five, two, p);

    if (value >= 5)
        coins(value - 5, ten, five + 1, two, p);

    if (value >= 2)
        coins(value - 2, ten, five, two + 1, p);
}

int main() {
    vector<vector<int>> p;
    coins(20, 0, 0, 0, p);
    return 0;
}
