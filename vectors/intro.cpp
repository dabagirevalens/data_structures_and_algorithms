#include<iostream>
#include<vector>
using namespace std;

int main(){

    // demo vector
    vector<int> arr = {1,2,33,4,5,67};

    // Fill Constructor
    vector<int> arr2(10, 7);

    for(int i=0; i<arr2.size(); i++){
        cout << arr2[i] << " " ;
    }
    cout << endl;

    // pop_back 0(1)
    arr.pop_back();

    // push_back 0(1)
    arr.push_back(8);

    // size of vector(N of elements)
    cout << arr.size() << endl;

    // capacity of the vector
    cout << arr.capacity() << endl;

    return 0;
}