#include <iostream>
using namespace std;

// Sort the elements in ascending order

// time complexity of O(N^2)
void insertion_sort(int * arr, int n) {

    //it runs n-1 times
    
    for(int i = 1; i <= n-1; i++){
        
        int current = arr[i];
        int prev = i-1;

        // loop to find the correct index where the element current should be inserted

        while(prev>=0 and arr[prev] > current){
            arr[prev + 1] = arr[prev];
            prev --;
        }

        arr[prev + 1] = current;
    }

}

int main(){

    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, n);

    for(auto x : arr)
        cout << x <<"," ;

    return 0;
}