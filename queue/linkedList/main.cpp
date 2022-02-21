#include "queue.h"

using namespace std;

int main() {
    Queue<char> q;
    q.enqueue('d');
    q.enqueue('a');
    q.enqueue('b');
    q.enqueue('a');
    q.enqueue('g');
    q.enqueue('i');
    q.enqueue('r');
    q.enqueue('e');
    q.deQueue();

    q.display();

    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();

    q.display();
    return 0;
}
