#include<iostream>
using namespace std;

void dec(int n){
    // base case
    if(n==0){
        return;
    }

    // rec case
        cout << n << ",";
        dec(n-1);
}

void inc(int n){
    if(n==0){
        return;
    }

    inc(n-1);
    cout <<n << ",";
}

int main(){
    dec(5);
    cout <<endl;
    inc(5);
    return 0;
}