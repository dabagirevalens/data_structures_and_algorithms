#include <iostream>
#include <cstring>
using namespace std;

// Problem : Read N strings and print the largest string.

int main() {

    int n;
    cout << "Enter the number of sentences you want.";
    cin >> n;
    cin.get();

    char sentence[1000];
    char largest_string[1000];
    
    int largest_len = 0;

    while(n--){
        cin.getline(sentence, 1000);

        int len = strlen(sentence);

        if(len > largest_len){
            largest_len = len;
            strcpy(largest_string, sentence);
        }
    }

    cout << largest_string;

    return 0;
}