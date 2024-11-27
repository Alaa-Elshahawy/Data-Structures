#ifndef STACK_H
#define STACK_H

#include "Node.h"
#include <iostream>
using namespace std;

class Stack {
private:
    Node* top;

    bool isEmpty() {
        return top == NULL;
    }

public:
    Stack() {
        top = NULL;
    }

    int push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
        return 1;
    }

    int pop(int& data) {
        if (isEmpty()) {
            return 0;
        }
        Node* temp = top;
        data = top->data;
        top = top->next;
        delete temp;
        return 1;
    }

    int peek(int& data) {
        if (isEmpty()) {
            return 0;
        }
        data = top->data;
        return 1;
    }

    void display() {
        Node* current = top;
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        while (current != NULL) {
            cout << current->data << "\t";
            current = current->next;
        }
        cout << endl;
    }

    ~Stack() {
        int temp;
        while (pop(temp)) {} // Clear the stack
    }
};

#endif // STACK_H
