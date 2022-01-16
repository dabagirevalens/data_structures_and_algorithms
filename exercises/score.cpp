#include<iostream>
using namespace std;

int scores(int* arr, int n){
    int sc = 0;

    for(int i=0; i<n; i++){
        if(arr[i]==5){
            sc +=5;
        }else if(arr[i]&1){
            sc += 3;
        }else{
            sc +=1;
        }
        cout << "sum " << sc << " " << i << endl;
    }

    return sc;
}

int main() {
    cout << "enter the num of elements" <<endl;
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int result = scores(arr, n);
    cout <<"The scores is: " << result << endl;

    return 0;
}