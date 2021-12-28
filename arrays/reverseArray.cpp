#include <iostream>
using namespace std;

// Problem: reverse the given 
// => time complexity of O(N)
void reversedArray( int * arr, int n){

    int start = 0;
    int end = n-1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start +=1;
        end -=1;
    }
}

int main () {

    int arr[] = {2,34,35,45};
    int n = sizeof(arr) / sizeof(arr[0]);

    reversedArray(arr, n);

    // Your reversed array is
    for(int i: arr)
        cout << i << " ";

    return 0;
}