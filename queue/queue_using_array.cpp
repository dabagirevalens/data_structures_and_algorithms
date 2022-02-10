#include<iostream>
using namespace std;

struct Queue{
    int rear, front, capacity;

    int * queue;

    Queue(int c){
        rear = front = 0;
        capacity = c;
        
        queue = new int;
    }

    void enqueue(int data){
        if(rear == capacity){
            cout << "the queue is full" << endl;
            return;
        }

        queue[rear] = data;
        rear++;
    }

    void dequeue(){
        if(front == rear){
            cout << "queue is empty" << endl;
            return;
        }

        //shift all elements from index 2 till rear to left by one
        for(int i=0; i<rear-1; i++){
            queue[i] = queue[i+1];
            rear--;
        }

        return;
    }
   
    void display(){
        if(front == rear){
            cout << "queue is empty" << endl;
            return;
        }

        //shift all elements from index 2 till rear to left by one
        for(int i=front; i<rear-1; i++){
           cout << queue[i] << "  ";
        }
        cout << endl;
        cout << endl;

        return;
    }

    int frontEle(){
        if(front == rear){
            cout << "queue is empty" << endl;
            return 0;
        }

        return queue[front];
    }
};

int main(){

    int n = 5;
    Queue myQueue(n);

    // display elements before add
    cout << "Before inserting elements" <<endl;
    myQueue.display();
    cout << "Front element :"<< myQueue.frontEle() << endl;

    //add element into queue
    while(n--){
        myQueue.enqueue(n);
    }

    //print queue elements
    cout << "After inserting elements" <<endl;
    myQueue.display();

    //remove some elements
    myQueue.dequeue();
    myQueue.dequeue();

    cout << "After deleting 2 elements" <<endl;
    myQueue.display();

    // frontEle element
    cout << "Front element :"<< myQueue.frontEle() << endl;

    return 0;
}