#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return a > b;
}

int main(){

    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // time complexity of O(NlogN)
    
    //ascending
    sort(arr, arr + n);
    // sort(arr, arr + n, less<int>());

    // reverse
    // reverse(arr, arr + n);
    // sort(arr, arr + n, compare);
    // sort(arr, arr + n, greater<int>());

    for(auto x : arr)
        cout << x <<"," ;

    return 0;
}