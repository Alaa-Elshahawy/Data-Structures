#ifndef NODE_H
#define NODE_H

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

#endif // NODE_H
