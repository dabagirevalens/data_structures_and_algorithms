#include<iostream>
#include"stack.h"

using namespace std;

int main(){
    
    Stack<char> user;
    user.push('r'); 
    user.push('e'); 
    user.push('s'); 
    user.push('u'); 
    user.display();

    Stack<int> ages;
    ages.push(12);
    ages.push(22);
    ages.push(32);
    ages.push(42);
    ages.insertAtBottom(02);
    ages.reverse();
    ages.display();

    ages.pop();
    ages.pop();

}