#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    Queue q(5);

    //Fill the queue to capacity
    cout << "Enqueuing elements...\n";
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    q.display(); //1 2 3 4 5

    //Dequeue two elements
    int data = 0;
    q.deQueue(data);
    cout << "Dequeued: " << data << endl; // 1
    q.deQueue(data);
    cout << "Dequeued: " << data << endl; // 2
    q.display(); // Expected: 3 4 5

    //test circular behavior
    q.enQueue(6);
    q.enQueue(7);
    q.display(); //3 4 5 6 7

    cout << "Dequeuing all elements:\n";
    while (q.deQueue(data)) {
        cout << data << " ";
    }
    cout << endl; //3 4 5 6 7

    // Final check
    q.display(); //empty

    return 0;
}
