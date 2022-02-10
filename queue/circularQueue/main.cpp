#include"queue.h"

int main(){

    Queue<int> q();

    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);

    q.pop();

    q.display();

    return 0;
}