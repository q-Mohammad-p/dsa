#include <iostream>
using namespace std;

int findMax(int arr[], int start, int end)
{
    if (start == end)
        return arr[start];

    int max = findMax(arr, start + 1, end);

    return (arr[start] > max) ? arr[start] : max;
}

int main()
{
    int arr[] = {70, 45, 3, 99, 5, 6, 107, 8, 99};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Max value: " << findMax(arr, 0, n - 1) << endl;
    return 0;
}















//#include <iostream>
//
//using namespace std;
//
//int max(int arr[], int start, int end, int m){
//    if (start == 0)
//        m = arr[0];
//    if (start == end+1)
//        return m;
//    if (m<arr[start])
//        m = arr[start];
//    return max(arr, start + 1, end, m);
//}
//
//int main() {
//    int arr [] = {1,2,3,4,5,6,107,8,9,};
//    cout<<max(arr, 0, 8, 0);
//    return 0;
//}
