#include <iostream>
#include "linkedList/stack.h"

using namespace std;

void insertAtBottom(Stack<int> &s, int data){
    if(s.isEmpty()){
        s.push(data);
        return;
    }

    int temp = s.peek();
    s.pop();

    insertAtBottom(s, data);
    s.push(temp);
}

int main(){

    Stack<int> s;

    int n=5;
    while(n--){
        s.push(n);
    }

    // s.display(); 
    insertAtBottom(s, 5);
    s.display(); 

    return 0;
}