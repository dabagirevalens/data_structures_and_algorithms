#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    if(n==0){
        return -1;
    }

    // rec case
    if(arr[0] == key){
        return 0;
    }

    int subIndex = firstOcc(arr+1, n-1, key);

    if(subArr !=-1){
        return subIndex+1;
    }

    return -1;
}

int main(){
    int arr[] = {1, 3, 5, 7, 2, 4, 6, 12};
    cout << firstOcc(arr, sizeof(arr)/sizeof(arr[0]), 7);
}