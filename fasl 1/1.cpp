#include <iostream>

using namespace std;

int divisionRecursive(int a, int b) {
    if (b == 0){
        cout<<"indivisible by ";
        return 0;
    }
    if (a < b) {
        return 0;
    }
    return 1 + divisionRecursive(a - b, b);
}

int main() {
    int a, b;
    cout<<"num 1 : ";
    cin>>a;
    cout<<"num 2 : ";
    cin>>b;
    cout<<divisionRecursive(a, b);
    return 0;
}
