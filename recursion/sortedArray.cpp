#include<iostream>
using namespace std;

bool isSorted(int* arr, int n){
    // base case
    if(n==1 || n==0){
        return true;
    }

    // rec case
    if(arr[0]<arr[1] && isSorted(arr+1, n-1)){
        return true;
    }

    return false;
}


int main(){
    int arr[] = {1, 2, 3, 4, 6};
    cout << isSorted(arr, sizeof(arr)/ sizeof(arr[0])) << endl;
}