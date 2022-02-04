#include <iostream>
using namespace std;

const int size = 50; 
int top = -1;

int my_stack[size];

int isFull(){
    if(top == size -1){
        cout << "my_stack overflow" << endl;
        return 1;
    }

    return 0;
}

int isEmpty(){
    if(top == -1){
        cout << " my_stack underflow" << endl;
        return 1;
    }

    return 0;
}

void push(int data){
    if(!isFull()){
        top++;

        my_stack[top] = data;
    }
}

void pop(){
    if(!isEmpty()){
        top--;
    }
}

int peek(){
    if(!isEmpty()){
        return my_stack[top];
    }else{
        return INT_MIN;
    }
}

void display(){
    if(!isEmpty()){
        for(int i=0; i<top; i++){
            cout << my_stack[i];
        }

        cout << endl;
    }
}


int main(){

    int n = 5;
    while(n--){
        push(n);
    }

    int choice , data;
    cout << "1. push" <<endl;
    cout << "2. pop" <<endl;
    cout << "3. peek" <<endl;
    cout << "0. exit" <<endl;
    cout << "Your choice" <<endl;
    cin >> choice;

    while(true){
            switch(choice){
        case 1:
            cout << "enter any data" << endl;
            cin >> data;
            push(data);
            display();
            break;
        case 2:
            pop();
            display();
            break;
        case 3:
            cout << peek() << endl; 
            break;
        default :
            cout << "invalid choice" <<endl;
            break;
    }
    }

    return 0;
}