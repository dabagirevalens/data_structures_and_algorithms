#include<iostream>
using namespace std;


int idx(int* arr, int size){

    if(size<3){
        return -1;
    }

    int i = 0;
    int j = size - 1;
    int idx;

    int lsum = arr[i];
    int rsum = arr[j];

    for(int k=1; k< size-2; k++){
        if(lsum < rsum){
            i++;
            lsum +=arr[i];
            idx = i + 1;
        } else{
            j--;
            rsum +=arr[j];
            idx = j-1;
        }
    }

    if(lsum == rsum){
        return idx;
    }else{
        return -1;
    }
}

int main(){
    cout << "enter the num of elements" <<endl;
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int result = idx(arr, n);
    cout << "the idx is : " << result << endl;

    return 0;
}