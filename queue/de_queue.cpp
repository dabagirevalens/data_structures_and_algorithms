#include<iostream>
using namespace std;

// Maximum size of array or Dequeue
#define MAX 100

// A structure to represent a Deque
class Deque
{
    int  arr[MAX];
    int  front;
    int  rear;
    int  size;
public :
    Deque(int size)
    {
        front = -1;
        rear = 0;
        this->size = size;
    }

    // Operations on Deque:
    void  insertfront(int key);
    void  insertrear(int key);
    void  deletefront();
    void  deleterear();
    void displayFront();
    void displayRear();
    void display();
    bool  isFull();
    bool  isEmpty();
    int  getFront();
    int  getRear();
};

// Checks whether Deque is full or not.
bool Deque::isFull()
{
    return ((front == 0 && rear == size-1)||
            front == rear+1);
}

// Checks whether Deque is empty or not.
bool Deque::isEmpty ()
{
    return (front == -1);
}

// Inserts an element at front
void Deque::insertfront(int key)
{
    // check whether Deque if  full or not
    if (isFull())
    {
        cout << "Overflow\n" << endl;
        return;
    }

    // If queue is initially empty
    if (isEmpty())
    {
        front = 0;
        rear = 0;
    }

        // front is at first position of queue
    else if (front == 0)
        front = size - 1 ;

    else // decrement front end by '1'
        front = front-1;

    // insert current element into Deque
    arr[front] = key ;
}

// function to inset element at rear end
// of Deque.
void Deque ::insertrear(int key)
{
    if (isFull())
    {
        cout << " Overflow\n " << endl;
        return;
    }

    // If queue is initially empty
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }

        // rear is at last position of queue
    else if (rear == size-1)
        rear = 0;

        // increment rear end by '1'
    else
        rear = rear+1;

    // insert current element into Deque
    arr[rear] = key ;
}

void  Deque::displayFront() {
    if(isEmpty()){
        cout << "Underflow " << endl;
    }

    if(front == rear){
        cout << arr[front];
    }else{
        cout << arr[0] << endl;
        for(int i=size-1; i>=front; i--){
            cout << arr[i] <<endl;
        }
    }
}

void Deque::displayRear() {
    if(isEmpty()){
        cout << "Underflow " << endl;
    }

    if(front == rear){
        cout << arr[rear];
    }else{
        for(int i=0; i<=rear; i++){
            cout << arr[i] <<endl;
        }
    }
}

void Deque::display(){
    if(isEmpty()){
        cout << "Underflow" << endl;
        return;
    }
    
    if(front>rear){
        for (int i = front; i <= size-1; i++) {
            cout << arr[i] << endl;
        }
        
        for (int j = 0; j < rear; j++) {
            cout << arr[j] << endl;
        }
    }else{
        for (int k = front; k <= rear-1; k++) {
            cout << arr[k] << endl;
        }
    }
}

// Deletes element at front end of Deque
void Deque ::deletefront()
{
    // check whether Deque is empty or not
    if (isEmpty())
    {
        cout << "Queue Underflow\n" << endl;
        return ;
    }

    // Deque has only one element
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
        // back to initial position
    if (front == size -1)
        front = 0;

    else // increment front by '1' to remove current
        // front value from Deque
        front = front+1;
}

// Delete element at rear end of Deque
void Deque::deleterear()
{
    if (isEmpty())
    {
        cout << " Underflow\n" << endl ;
        return ;
    }

    // Deque has only one element
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
        rear = size-1;
    else
        rear = rear-1;
}

// Returns front element of Deque
int Deque::getFront()
{
    // check whether Deque is empty or not
    if (isEmpty())
    {
        cout << " Underflow\n" << endl;
        return -1 ;
    }
    return arr[front];
}

// function return rear element of Deque
int Deque::getRear()
{
    // check whether Deque is empty or not
    if(isEmpty() || rear < 0)
    {
        cout << " Underflow\n" << endl;
        return -1 ;
    }
    return arr[rear];
}

// Driver program to test above function
int main()
{
    Deque dq(5);
    cout << "insert at front" << endl;
    dq.insertfront(1);
    dq.displayFront();
//    cout << "insert at rear" << endl;
//    dq.insertrear(2);
//    dq.displayFront();
    cout << "insert at front" << endl;
    dq.insertfront(3);
    dq.displayFront();
//    cout << "insert at rear" << endl;
//    dq.insertrear(4 );
//    dq.displayFront();
    return 0;
}