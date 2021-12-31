#include <iostream>
using namespace std;

// Sort the elements in ascending order

// take the larger element to the end by repeatedly
// swapping adjacent elements.

// time complexity of O(N^2)
void bubble_sort(int * arr, int n) {
    
    // it runs n-2 times
    
    for(int times = 1; times < n-1; times++){
        for(int j=0; j<= n-times-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

}

int main(){

    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n);

    for(auto x : arr)
        cout << x <<"," ;

    return 0;
}