#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
using namespace std;
class LinkedList
{
    private:
        Node * head;
        Node * tail;
    Node * getNodeUsingData(int data){
        Node *current=head;
        while(current != NULL){
            if(current->Data==data){
                return current;
            }
            //Jump
            current=current->Next;
        }
        return NULL;

    }


    public:
        LinkedList() {
            head=tail=NULL;
        }
        void add(int data){
            //Create Node
            Node * node = new Node(data); //Create Object Node , Data=data , next,prev=null

                if(head == NULL){//First Node
                    head=tail=node;
                    //node->Next=node->prev=NULL;
                }
                else{//Not First Node
                    tail->Next =node; //Old->Next=NewNode
                    node->Prev=tail; //newNode->prev=old(Node)
                    tail=node;//tail=node;
                }
        }
        void display(){
            Node * current =head;//NULL
            if(current == NULL){
                cout<<"Linked List is Empty \n";
                return ;
            }
            while(current != NULL){
                //Display
                cout<<current->Data<<"\t";
                //Increment Jump Node
                current=current->Next;
            }
            cout<<endl;
        }


    void removeNode(int data){
        //Search Linked List
        Node * node = getNodeUsingData(data);
        if(node == NULL){
            cout<<"Element Not Found , Can't Remove \n";
            return;
        }
        else{
            //Remove First
            if(node == head){
                if(node == tail){
                    tail=head=NULL;
                }
                else{
                    head=node->Next;
                    head->Prev=NULL;
                }

            }
            else if (node == tail){ //Remove Last
                tail=node->Prev;
                tail->Next=NULL;
            }
            else{//Remove Mid
                Node * A=node->Prev;
                Node * B=node->Next;
                A->Next=B;
                B->Prev=A;
            }

            delete(node);

        }

    }

    int search_using_data(int data){
        Node * node = getNodeUsingData(data);
        if(node == NULL){
            return 0;
        }
        else{
            return 1;
        }
    }
    ///********************InsertAfter****************
    void InsertAfter(int data, int afterData) {
    Node* current = getNodeUsingData(afterData);
    if (current == NULL) {
        cout << "Element " << afterData << " not found. Cannot insert after it.\n";
        return;
    }

    Node* newNode = new Node(data);
    newNode->Prev = current;
    newNode->Next = current->Next;

    if (current->Next != NULL) {
        current->Next->Prev = newNode;
    } else {
        tail = newNode;
    }

    current->Next = newNode;
}
    ///**********************InsertBefore******************
    void InsertBefore(int data, int beforeData) {
        Node* current = getNodeUsingData(beforeData);
        if (current == NULL) {
            cout << "Element " << beforeData << " not found. Cannot insert before it.\n";
            return;
        }

        Node* newNode = new Node(data);
        newNode->Next = current;
        newNode->Prev = current->Prev;

        if (current->Prev != NULL) {
            current->Prev->Next = newNode;
        } else {                        // If the current node is the head
            head = newNode;
        }

        current->Prev = newNode;
    }
    ///*****************GetCount*******************
    int GetCount() {
        int count = 0;
        Node* current = head;

        while (current != NULL) {
            count++;
            current = current->Next;
        }

        return count;
    }
    ///********************GetDataByIndex****************
    int GetDataByIndex(int index) {
        if (index < 0) {
            cout << "Invalid index. Index cannot be negative.\n";
            return -1;
        }

        int currentIndex = 0;
        Node* current = head;

        while (current != NULL) {
            if (currentIndex == index) {
                return current->Data;
            }
            currentIndex++;
            current = current->Next;
        }

        cout << "Index " << index << " out of range.\n";
        return -1;
    }

    protected:

};

#endif // LINKEDLIST_H
