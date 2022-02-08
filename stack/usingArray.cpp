#include <iostream>
using namespace std;

#define MAX 1000

class Stack{
    int top;

    public :
        int a[MAX];

        Stack() {top = -1;};

        bool push(int x);
        int pop();
        int peek();
        bool isEmpty();
        void display();
};

bool Stack::push(int x){
    if(top >= MAX -1){
        cout << "Stack Overflow";
        return false;
    }else{
        a[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}

int Stack::pop(){
    if(top < 0){
        cout << "Stack Underflow";
        return 0;
    }else{
        int x = a[top--];
        return x;
    }   
}



int Stack::peek()
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}
 
bool Stack::isEmpty()
{
    return (top < 0);
}

int main(){

    Stack myStack;

    int n =5;
    while(n--){
        myStack.push(n);
    }

    cout << myStack.pop() <<endl;
    cout << myStack.peek() <<endl;

    return 0;
}