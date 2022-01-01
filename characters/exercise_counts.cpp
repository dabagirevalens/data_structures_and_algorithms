#include <iostream>
using namespace std;

// Given sentence find the num of spaces, digits and alphabets  

int main() {

    //store and then count
    //read one by one and count;

    char ch;
    ch = cin.get();

    //counts
    int alphabets = 0;
    int spaces = 0;
    int digits = 0;

    while(ch != '\n'){
        
        if(ch>='0' && ch <= '9'){
            digits++;
        } else if((ch>='a' && ch <= 'z') ||( ch>='A' && ch <= 'Z')){
            alphabets++;
        } else if(ch==' ' || ch == '\t'){
            spaces++;
        }

        ch = cin.get();
    }

    cout << "Total alphabets " << alphabets << endl;
    cout << "Total digits " << digits << endl;
    cout << "Total spaces " << spaces << endl;

    return 0;
}