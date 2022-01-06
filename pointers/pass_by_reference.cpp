#include<iostream>
using namespace std;


// Pass by value
// New copy of income variable is created
// and it is the only one to be changed

void applyTax(int income){
    float tax = 0.10;
    income -= income*tax;
    cout << "by value" << endl;
    cout << income <<endl;
}

// Pass by reference using reference variables
void vat(int & income){
    float tax = 0.10;
    income -= income*tax;
    cout << "by reference" << endl;
    cout << income <<endl;
}


// Pass by reference using pointers

void watchVideo(int * views){
    *views +=1;
}


int main() {

    int income;
    cin >> income;

    // PASS BY VALUE
    applyTax(income);
    cout << income <<endl;
    
    // PASS BY REFERENCE USING REF. VARIABLES
    vat(income);
    cout << income <<endl;

    // PASS BY REFERENCE USING POINTERS
    int views = 1000;
    watchVideo(&views);
    cout << "Your video has : " << views <<" views" << endl;

    return 0;
}