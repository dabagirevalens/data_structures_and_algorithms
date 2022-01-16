#include <iostream>
using namespace std;

int even_odd_sum(int *arr, int n){
    int x = 0;
    int y = 0;

    for(int i=0; i<n; i++){
        if(arr[i] & 1){
            x += arr[i];
        }else {
            y += arr[i];
        }
    }

    return  x - y;
}

int main() {

    cout << "Enter the no of elements" << endl;
    int n;
    cin >> n;
    int* arr = new int[n];

    for(int i=0; i< n; i++){
        cin >> arr[i];
    }

    int result = even_odd_sum(arr, n);
    cout << "The result is " << result << endl;

    return 0;
}
