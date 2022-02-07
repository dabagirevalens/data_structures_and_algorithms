#include <iostream>
using namespace std;

struct Node{
    int data;
    Node * link;
};

Node * top;

// push (utility function to add element into stack)
void push(int data){
    Node * temp = new Node();

    if(!temp){
        cout << "Stack overflow" <<endl;
        exit(1);
    }

    temp->data = data;
    temp->link = top;
    top = temp;
}

int isEmpty(){
    return top == NULL;
}

// peek (utility function to return top element)
int peek(){
    if(!isEmpty())
        return top->data;
    else exit(1); 
}



// pop (utility function to remove element from stack)
void pop(){
    Node * temp;

    if(top == NULL){
        cout << "stack underflow" <<endl;
        exit(1);
    }else{
        temp = top;
        top = top -> link;

        free(temp);

    }

}


// display (utility function to print all elements)
void display(){
    Node * temp;

    if(top == NULL){
        cout << "stack underflow" <<endl;
        exit(1);
    }else{
        temp = top;
        while(temp !=NULL){
            cout << temp -> data << " ";
            temp = temp->link;
        }
    }
}


int main(){

    int n=5;

    while(n--){
        push(n);
    }

    display();
    cout << "\ntop element is " <<peek() <<endl;

    pop();
    pop();

    display();
    cout << "\ntop element is " <<peek() <<endl;

    return 0;
}