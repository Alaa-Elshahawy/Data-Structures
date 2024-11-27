#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

class Queue {
private:
    int *items;
    int size;
    int front;
    int rear;
    int count;

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == size;
    }

public:
    Queue(int size = 5) {
        this->size = size;
        items = new int[size];
        front = 0;
        rear = -1;
        count = 0;
    }

    bool enQueue(int data) {
        if (isFull()) {
            return false;
        }
        rear = (rear + 1) % size;
        items[rear] = data;
        count++;
        return true;
    }

    bool deQueue(int &data) {
        if (isEmpty()) {
            return false;
        }
        data = items[front];
        front = (front + 1) % size;
        count--;
        return true;
    }

    bool GetFront(int &data) {
        if (isEmpty()) {
            return false;
        }
        data = items[front];
        return true;
    }

    bool GetRear(int &data) {
        if (isEmpty()) {
            return false;
        }
        data = items[rear];
        return true;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        int index = front;
        for (int i = 0; i < count; i++) {
            cout << items[index] << " ";
            index = (index + 1) % size;
        }
        cout << endl;
    }

    ~Queue() {
        delete[] items;
    }
};

#endif // QUEUE_H
