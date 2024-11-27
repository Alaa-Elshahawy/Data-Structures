#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue q(5);
    q.enQueue(10) ? cout << "Data Entered\n" : cout << "Queue Full\n";
    q.enQueue(20) ? cout << "Data Entered\n" : cout << "Queue Full\n";
    q.enQueue(30) ? cout << "Data Entered\n" : cout << "Queue Full\n";
    q.enQueue(40) ? cout << "Data Entered\n" : cout << "Queue Full\n";
    q.enQueue(50) ? cout << "Data Entered\n" : cout << "Queue Full\n";
    q.enQueue(60) ? cout << "Data Entered\n" : cout << "Queue Full\n";

    int data = 0;

    q.display();

    q.deQueue(data) ? cout << "Dequeued: " << data << endl : cout << "Queue Empty\n";
    q.deQueue(data) ? cout << "Dequeued: " << data << endl : cout << "Queue Empty\n";

    q.display();

    q.GetFront(data) ? cout << "Front: " << data << endl : cout << "Queue Empty\n";
    q.GetRear(data) ? cout << "Rear: " << data << endl : cout << "Queue Empty\n";

    return 0;
}
