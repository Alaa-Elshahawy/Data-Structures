#ifndef NODE_H
#define NODE_H

class Node {
public:
    Node* Prev;
    Node* Next;
    int Data;
    Node(int data) {
        Data = data;
        Prev = Next = NULL;
    }
};

#endif // NODE_H
