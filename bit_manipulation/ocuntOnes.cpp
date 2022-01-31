#include<iostream>

using namespace std;

int countOnes(int n){
    int k =0;

    while(n > 0){
        int rem = n %2;

        if(rem == 1){
            k++;
        }

        n /=2;
    }

    return k;
}

int main(){
    cout << countOnes(9) << endl;
    return 0;
}