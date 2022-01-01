#include <iostream>
#include <cstring>
using namespace std;

int main() {

    // initialization

    char a[] = {'a', 'b', 'c', 'd', 'e', 'f'} // wrong initialization
    char b[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'} // always add a terminator 
    char c[] = "abcdef";
    char d[100];

    cin >> d;
    cout << d <<endl;

    cout << a << endl;
    cout << strlen(b) << endl; // number of visible characters = 6
    cout << sizeof(c) << endl; // +1 character is added automatically as terminator = 7

    return 0;
}