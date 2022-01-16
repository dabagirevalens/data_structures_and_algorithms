#include <iostream>
using namespace std;

int reverse_integer(int n){
    int num;
    bool  negNum = false;

    if(n < 0){
        negNum = true;
        n *=-1;
    }

    while(n > 0){
        num = num*10 + n%10;
        n /=10;
    }

    if(negNum)
        num *= -1;

    return  num;
}

int main(){
    cout << "enter any number" << endl;
    int n;
    cin >> n;

    int result = reverse_integer(n);
    cout << "the number is : "<< result << endl;

    return 0;
}