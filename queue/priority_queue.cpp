#include <iostream>
#include <queue>

using namespace  std;

int main(){

    priority_queue<int> pq;

    int n = 9;
    while(n>0){
        pq.push(n);
        n--;
    }

    pq.push(10);


    while (!pq.empty()){
        cout <<pq.top() << endl;
        pq.pop();
    }


    return 0;
}