#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of students your want to record their marks:" << endl;
    cin >> n;

    int marksArr[n];

    //Assign a value
    // marksArr[0] = 12;

    //Input
    for(int i =0; i<n; i++){
        cout << "enter marks for " << i+1 << " student" <<endl;
        cin >> marksArr[i];
    }

    // Update a value

    // add 5 to every student marks

    for (int i= 0; i<n; i++)
        marksArr[i] += 5;

    cout << "Marks for your students" << endl;

    //Output
    for(int i =0; i< n; i++){
        cout << i+1 << " student : " << marksArr[i] << endl;
    }

    return 0;
}