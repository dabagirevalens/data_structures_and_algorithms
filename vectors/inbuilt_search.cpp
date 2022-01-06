
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {12,11,10,9,8,7};
    int key;
    cout << "Enter the element to be found. " << endl;
    cin >> key;

    vector<int>::iterator it = find(arr.begin(), arr.end(), key);

    if(it !=arr.end()){
        cout << "Present at : "<< it-arr.begin() << endl;
    } else{
        cout << "element not found." << endl;
    }

	return 0;
}

