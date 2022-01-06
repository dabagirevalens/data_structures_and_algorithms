#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    // Dynamic memory
    int *arr = new int[n];

    for(int i=0; i<n; i++){
        arr[i]=i;
        cout << i << " " ;
    }
    cout << endl;

    // Delete the memory
    delete [] arr;
    
    return 0;
}