#include<iostream>
#include "vector.h"
using namespace std;

int main(){

    Vector<int> v(5);

    // check if the vector is empty
    cout << "is the vector empty : " << v.isEmpty() << endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    v.pop_back();

    cout << v.size() << endl; //5
    cout << v.capacity() << endl; //8
    cout << v.at(2) << endl; // 3
    cout << v.front() << endl; // 3
    cout << v.back() << endl; // 5

    // print all elements
    v.print();

    // or

    cout << "using at() fun." << endl;
    for(int i=0; i<v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
    
    cout << "using operator[]() fun." << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    // other usage example
	Vector<string> names;
	names.push_back("DABAGIRE");
	names.push_back("Valens");

	names.print();

    return 0;
}