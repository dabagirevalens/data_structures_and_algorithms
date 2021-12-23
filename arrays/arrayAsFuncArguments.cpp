#include<iostream>
using namespace std;

void printArray(int * arr, int n) {
    //size of array passed by reference
    cout << "in function " << sizeof(arr) << endl;

    //print array

    for(int i = 0; i< n; i++)
        cout << arr[i] << " ";

}

int main() {
    
    int arr[] = {1,2,3,4,5};

    //size of array 
    cout << "in main " << sizeof(arr) << endl;

    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);

    return 0;
}