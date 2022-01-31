#include <iostream>
using namespace std;

int oddValent(int* arr, int len){

    bool isOddPresent = false;

    for(int i=0; i<len; i++){
        if(!isOddPresent && (arr[i]&1)){
            isOddPresent = true;
        }

        int ct = 1;

        for(int j=i+1; j<len; j++){
            if(arr[i] == arr[j]){
                ct ++;
            }
        }
        if(ct > 1 && isOddPresent){
            return 1;
        }
    }

    return 0;
}

int main(){

    int arr[] = {9,3,9,1};
    int l = sizeof(arr) / sizeof(arr[0]);

    cout<< oddValent(arr, l) <<endl; 

    return 0;
}