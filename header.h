#ifndef HEADER_H
#define HEADER_H

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoubleLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoubleLinkedList();
    ~DoubleLinkedList();
    void append(int data);
    void prepend(int data);
    void deleteFront();
    void deleteBack();
    void display();
    void displayFromTail();
    void clear();
    int countNodes();
};

#endif
