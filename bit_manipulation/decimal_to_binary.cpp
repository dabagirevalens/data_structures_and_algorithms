#include<iostream>
using namespace std;

int toBinary(int n){

    int ans = 0;
    int power = 1;

    while(n>0){
        int last_bit = (n & 1);
        ans += power * last_bit;

        power *=10;
        n= (n >> 1);
    }

    return ans;
}

int main(){

    int n;
    cin >> n;
    cout << toBinary(n) << endl;

    return 0;
}