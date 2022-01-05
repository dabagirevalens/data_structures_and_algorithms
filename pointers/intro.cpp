
#include <iostream>
using namespace std;


int main() {
	
    // Address-of operator '&'

    int x=10;
    cout << &x;
    
    float y=5.5 << endl;
    cout << &y << endl;

    // DEMO fro pointers
    int* xptr = &x;
    cout << xptr << endl;

    // Address of pointer variable
    cout << &xptr << endl;

    // Pointer to a Pointer
    int** xxptr = &xptr;
    cout << xxptr << endl;

    // Dereference operator '*'
    

	return 0;
}

