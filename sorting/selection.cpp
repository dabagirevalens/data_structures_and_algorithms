#include <iostream>
using namespace std;

// Sort the elements in ascending order

// Repeatedly find the minimum element from 
// unsorted part and put it at the beginning.

// time complexity of O(N^2)
void selection_sort(int * arr, int n) {

    //it runs n-1 times
    
    for(int pos=0; pos<n-1; pos++){

        int current = arr[pos];
        int min_position = pos;

        //find out the min element
        for(int j=pos; j<n; j++){

            if(arr[j] < arr[min_position])
                min_position = j;
        }

        //swapp
        swap(arr[min_position], arr[pos]);
    }

}

int main(){

    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, n);

    for(auto x : arr)
        cout << x <<"," ;

    return 0;
}