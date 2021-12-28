#include <iostream>
using namespace std;

// => time complexity of O(N)
int linear_search( int * arr, int n, int key){

    for(int i=0; i< n; i++){
    //check if the current element matches with the key
        if(arr[i] == key ){
            return i;
        }
    }

    //when the element wasn't found
    cout << "There is no search element in the given array." << endl;
    return -1;
}

int main () {

    int arr[] = {2,34,35,45};

    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "enter any number to find in array." << endl;
    cin>> key;

    int index = linear_search(arr, n, key);
    if(index !=-1)
        cout << key << " is found at index " << index << endl;

    return 0;
}