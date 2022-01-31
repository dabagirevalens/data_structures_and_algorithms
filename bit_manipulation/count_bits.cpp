#include <iostream>
using namespace std;

// it has time complexity of: O(logN)
int count_bits(int n){

    int count = 0;

    while(n>0){
        int last_bit = (n&1);
        count += last_bit;

        n = (n>>1);
    }

    return count;
}

// Counting set bits hack : Faster method 
int count_bits_hack(int n){
    int bits =0;

    while(n>0){
        // remove the last bit from current number;
        n = n & (n - 1);
        bits ++;
    }

    return bits;
}

int main() {

    cout << "Enter any number."<< endl;
    int n;
    cin >> n;

    cout << n << " has " << count_bits(n) << " set bits." << endl;
    cout << n << " has " << count_bits_hack(n) << " set bits." << endl;

    return 0;
}