#include <iostream>
using namespace std;

// Problem: Print all pairs of elements
// => time complexity of O(N^3)
void printAllPairs( int * arr, int n){
    for(int i=0; i<n; i++){
        int x = arr[i];

        for(int j= i+1 ; j<n; j++){
            int y = arr[j];

            cout << "(%dx,%dy)" <<endl; 
        }

        cout << endl;
    }
}

int main () {

    int arr[] = { 0, 12, 345, 6789 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printAllPairs(arr, n);

    return 0;
}