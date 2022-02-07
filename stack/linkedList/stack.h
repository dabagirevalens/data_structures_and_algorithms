#include<iostream>
using namespace std;


template<typename T>
class Stack;

template<typename T>
class Node{
    public:
        T data;
        Node<T> * next;

        Node(T d){
            data =d;
        } 
};

template<typename T>
class Stack{
    Node<T> * head;

    public:
        Stack(){
            head = NULL;
        } 

        void push(T data){
            Node<T> *n = new Node<T>(data);
            n->next = head;
            head = n;
        }

        bool isEmpty(){
            return head == NULL;
        }

        T peek(){
            return head->data;
        }

        void pop(){
            if(!isEmpty()){
                Node<T> * temp = head;
                head = head ->next;
                delete temp;
            }
        }

        void display(){
            Node<T> *temp = head;

            while(temp!=NULL){
                cout << temp->data << "";
                temp = temp->next;
            }
        }

};