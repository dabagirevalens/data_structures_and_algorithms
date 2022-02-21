#include<iostream>
using namespace std;


template<typename T>
class Queue;

template<typename T>
class Node{
    public:
        T data;
        Node<T> * next;

        Node(T d){
            data =d;
            next = NULL;
        }
};

template<typename T>
class Queue{
    Node<T> * front;
    Node<T> * rear;

    public:
        Queue(){
            front = rear = NULL;
        }

        bool isEmpty(){
            return front == NULL;
        }


        void enqueue(T data){
            Node<T> *n = new Node<T>(data);
            if(isEmpty()){
                front = rear = n;
            }

            rear->next = n;
            rear = n;
        }


        T frontEle(){
            return front->data;
        }

        T rearEle(){
            return rear->data;
        }

        void deQueue(){
            if(!isEmpty()){
                Node<T> * temp = front;
                front = front ->next;
                if(front == NULL){
                    rear == NULL;
                }

                delete temp;
            }else{
                cout << "Your queue is empty" <<endl;
            }
        }

        void display(){
            Node<T> *temp = front;

            while(temp!=NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }

            cout << endl;
        }

};