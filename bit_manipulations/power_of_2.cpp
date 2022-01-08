#include <iostream>
using namespace std;

int main() {

    cout << "Enter any number." <<endl;
    int n;
    cin >> n;

    if((n & n-1) == 0){
         cout << "Power of two." <<endl;
    }else {
         cout << "Not a power of two." << endl;
    }

    return 0;
}