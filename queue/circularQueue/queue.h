#include<iostream>
using namespace std;

template<typename T>
class Queue{
    T * arr;
    
    int current_size;
    int max_size;
    
    int rear;
    int front;

    public:
        Queue(int default_size = 5){
            max_size = default_size;

            arr = new T[max_size]{};
            current_size = front = 0;
            rear = max_size -1;

        }

        bool full(){
            return current_size == max_size;
        }

        bool empty(){
            return current_size == 0;
        }

        void push(T data){
            if(!full()){
                // take the rear to the next index
                rear = (rear + 1)%max_size;
                arr[rear] = data;
                current_size++;
            }
        }

        void pop(){
            if(!empty()){
                front = (front + 1) %max_size;
                current_size --;
            }
        }

        T frontEle(){
            return arr[rear];
        }

        void display(){
            for(int i=0; i<current_size; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }

};