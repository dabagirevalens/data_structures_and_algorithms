
#include <iostream>
using namespace std;

int getIthBit(int n, int i){
	int mask = (1<<i);
	return (n&mask) > 0 ? 1: 0;
}

void setIthBit(int &n, int i){
    int mask = ~(1<<i);
    n = (n | mask);
}

void clearIthBit(int n, int i){
    int mask = (1<<i);
    n = n & mask;
}

void updateIthBit(int &n, int i, int v){
    clearIthBit(n, i);
    int mask = (v<<i);
    n = (n|mask);
}

int main() {

    // find bit at given position
	int n;
	int i;
    cout<< "Enter the number and position ." <<endl;
	cin >> n >> i;
	cout << "The bit at "<< i<<" is " << getIthBit(n, i) << endl;

    // set the bit
    int loc;
    cout << "where u want to set the bit" << endl;
    cin >> loc;
    clearIthBit(n, loc);
    cout << "After setting the num become "<< n << endl;

    // clear the bit
    int index;
    cout << "where u want to clear the bit" << endl;
    cin >> index;
    clearIthBit(n, index);
    cout << "After clear the num become "<< n << endl;

    // update bit at any pos
    int num, pos, val;
    cout<< "Enter the number and position and value ." <<endl;
	cin >> num >> pos >> val;
    updateIthBit(num, pos, val);
    cout << "After update <"<< getIthBit(num, pos) << " to " <<val << "> the num became " << num << endl; 

	return 0;
}
