#include <bits/stdc++.h>
using namespace std;
 

int interpolationSearch(int arr[], int lo, int hi, int x)
{
    int pos;
 
    
    if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {
 
        pos = lo
              + (((double)(hi - lo) / (arr[hi] - arr[lo]))
                 * (x - arr[lo]));
 
        // Condition of target found
        if (arr[pos] == x)
            return pos;
 
        // If x is larger, x is in right sub array
        if (arr[pos] < x)
            return interpolationSearch(arr, pos + 1, hi, x);
 
        // If x is smaller, x is in left sub array
        if (arr[pos] > x)
            return interpolationSearch(arr, lo, pos - 1, x);
    }
    return -1;
}

// => time complexity of O(log2 N)
int interpolation_search( int * arr, int n, int key){

    int start = 0;
    int end = n-1;
    int pos;

    while(start <= end) {
        pos = start + (((double)(end - start) / (arr[end] - arr[start]))* (key - arr[start]));

        cout<< pos << endl;

        if(arr[pos] == key) {
            return pos;
        } else if(arr[pos] > key){
            end = pos - 1;
        } else {
            start = pos + 1 ;
        }

    }

    return -1;
}
 
// Driver Code
int main()
{
 
    // Array of items on which search will
    // be conducted.
    int arr[] = { 10, 12, 13, 16, 18, 19, 20, 21,
                  22, 23, 24, 33, 35, 42, 47 };
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Element to be searched
    int x = 18;
    int index = interpolation_search(arr,  n, x);
 
    // If element was found
    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found.";
 
    return 0;
}
 