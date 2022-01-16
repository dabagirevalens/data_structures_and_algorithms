#include<iostream>
using namespace std;


int centered_arr(int *arr, int n){
    if(n < 3){
        return 0;
    }

    if(n % 2 == 0){
        return 0;
    }

    int mid = (n -1) / 2;

    for(int i=0; i< n; i++){
        if(arr[i]<=arr[mid] || arr[i+mid+1] <= arr[mid]){
            return 0;
        }
    }
    return 1;
}

bool compare(int a, int b){
    return a>=b;
}

int centeredArr(int *arr, int n){
    
    int start = 0;
    int end = n-1;
    int mid = (start + end) /2;

    while(start < mid && end > mid) {
        if(compare(arr[mid], arr[start]) || compare(arr[mid], arr[end])){
            return 0;
        }
        start ++;
        end --;
    }

    return 1;
}

int main(){

    int arr[] = {6,7,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = centeredArr(arr, n);
    
    cout << result << endl;
}