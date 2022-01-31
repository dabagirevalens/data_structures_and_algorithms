#include<iostream>

using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }

    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }

    return true;
}

int isFineArr(int *arr, int n){
    bool hasPrime = false;
    bool twin = false;

    for(int i=0; i<n; i++){
        if(isPrime(arr[i])){

            for(int j=i+1; j<n; j++){

                if(isPrime(arr[j])){
                    if(arr[i] == arr[j] + 2 || arr[i] == arr[j]-2){
                        twin = true;
                    }else{
                        twin = false;
                    }
                }

            }

            if(!twin){
                return 0;
            }
        }
    }

    return 1;
}

int main(){
    int arr[] = {3,5, 11};
    cout << isFineArr(arr, (sizeof(arr)/sizeof(arr[0]))) << endl;
}