#include <iostream>
#include <vector>
using namespace std;

// time complexity of O(N + range)

void counting_sort(int *arr, int n) {
    // largest element to get range
    int largest = -1;

    for(int i =0; i<n; i++){
        largest = max(largest, arr[i]);
    }

    // create a counting array/vector
    // int *freq = new int[largest + 1];

    vector<int> freq(largest + 1, 0);

    //update the freq array
    for(int x =0; x<n; x++)
        freq[arr[x]]++;

    //put back the elements from freq into original array
    int j = 0;
    for(int i=0; i<n; i++){

        while(freq[i] > 0){
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }

    return;
}

int main(){

    int arr[] = {-2, 3, 4, -1, 5, -12, 3, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    counting_sort(arr, n);

    for(auto x : arr)
        cout << x <<"," ;

    return 0;
}