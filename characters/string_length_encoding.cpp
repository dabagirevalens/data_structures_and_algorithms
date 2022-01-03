#include <iostream>
#include <string>
using namespace std;

// Run length encoding for string compression
// if compressed string is larger than the original string return the string

// input : aaabbccddeee
// output : a3b2c2d2e3

// input : abcde
// output : abcde

string compressedString(string str){

    int n = str.length();
    string output;

    for(int i=0; i<n; i++){
        int count = 1;

        while(i < n-1 && str[i+1] == str[i]){
            count++;
            i++;
        }

        output += str[i];
        output += to_string(count);
    }

    if(output.length() > str.length()){
        return str;
    }

    return output;
}

int main() {

    cout << compressedString("aaabbccddeee") << endl;
    cout << compressedString("abcde") << endl;

    return 0;
}