#include <iostream>
#include "Node.h"
using namespace std;

/***********Q3(Bubble Sort for Doubly Linked List (Swap Data))****/
Node* createLinkedList(int* items, int size) {
    if (size == 0) return NULL;
    Node* head = new Node(items[0]);
    Node* current = head;
    for (int i = 1; i < size; i++) {
        Node* newNode = new Node(items[i]);
        current->Next = newNode;
        newNode->Prev = current;
        current = newNode;
    }
    return head;
}
void bubbleSort(Node* head) {
    if (!head) return;

    bool swapped;
    Node* current;
    Node* tail = NULL;

    do {
        swapped = false;
        current = head;

        while (current->Next != tail) {
            if (current->Data > current->Next->Data) {
                // Swap data
                int temp = current->Data;
                current->Data = current->Next->Data;
                current->Next->Data = temp;
                swapped = true;
            }
            current = current->Next;
        }
        tail = current; //Mov tail bk
    } while (swapped);
}

/***********BONUS ((Swap NODES))***********/

void swapNodes(Node*& head, Node* node1, Node* node2) {
    if (!node1 || !node2 || node1 == node2) return;

    Node* prev1 = node1->Prev;
    Node* next1 = node1->Next;

    Node* prev2 = node2->Prev;
    Node* next2 = node2->Next;

    // Adj prev and next ptr for node1
    if (prev1) prev1->Next = node2;
    else head = node2;

    if (next1) next1->Prev = node2;

    // Adj prev and next ptr for node2
    if (prev2) prev2->Next = node1;
    else head = node1; // node2 was the head

    if (next2) next2->Prev = node1;

    // Swap prev and next ptrs of node1 and node2
    node1->Prev = prev2;
    node1->Next = next2;

    node2->Prev = prev1;
    node2->Next = next1;
}


void displayLinkedList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->Data << " ";
        current = current->Next;
    }
    cout << endl;
}

int main() {

    int arr[] = {5, 3, 7, 2, 8};
    Node* head = createLinkedList(arr, 5);

    cout << "Original List: ";
    displayLinkedList(head);

    bubbleSort(head);

    cout << "Sorted List: ";
    displayLinkedList(head);


    /*********Q4**********/
        // Swap the first and last nodes
    Node* first = head;
    Node* last = head;
    while (last->Next) {
        last = last->Next;
    }
    cout << "Swapping First and Last Nodes..." << endl;
    swapNodes(head, first, last);

    cout << "After Swap: ";
    displayLinkedList(head);

    return 0;
}
