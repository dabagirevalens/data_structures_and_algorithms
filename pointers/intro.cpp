
#include <iostream>
using namespace std;


int main() {
	
    // Address-of operator '&'

    int x=10;
    cout << &x << endl;
    
    float y=5.5;
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

    cout << *xxptr << endl;

    // NULL Pointer
    int *p = 0;
    int *q = NULL;

    // Reference variables
    // ⚠ they must be initialized;
    int my_num = 10;
    int &another = my_num;
    // int &another; <- this cannot work
    another++;
    cout << another << endl;
    cout << my_num << endl; //its value is equal to another's value

	return 0;
}
