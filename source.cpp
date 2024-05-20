#include <iostream>
#include "header.h"

using namespace std;

DoubleLinkedList::DoubleLinkedList() : head(0), tail(0) {}

DoubleLinkedList::~DoubleLinkedList() {
    clear();
}

void DoubleLinkedList::append(int data) {
    Node* newNode = new Node{data, 0, 0};
    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void DoubleLinkedList::prepend(int data) {
    Node* newNode = new Node{data, 0, 0};
    if (!head) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void DoubleLinkedList::deleteFront() {
    if (!head) return; // List is empty
    Node* temp = head;
    head = head->next;
    if (head) {
        head->prev = 0;
    } else {
        tail = 0;
    }
    delete temp;
}

void DoubleLinkedList::deleteBack() {
    if (!tail) return; // List is empty
    Node* temp = tail;
    tail = tail->prev;
    if (tail) {
        tail->next = 0;
    } else {
        head = 0;
    }
    delete temp;
}

void DoubleLinkedList::display() {
    if (!head) {
        cout << "List is empty." << endl;
        return;
    }

    Node* current = head;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void DoubleLinkedList::displayFromTail() {
    if (!tail) {
        cout << "List is empty." << endl;
        return;
    }

    Node* current = tail;
    while (current) {
        cout << current->data << " ";
        current = current->prev;
    }
    cout << endl;
}

void DoubleLinkedList::clear() {
    Node* current = head;
    while (current) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = tail = 0;
}

int DoubleLinkedList::countNodes() {
    int count = 0;
    Node* current = head;
    while (current) {
        count++;
        current = current->next;
    }
    return count;
}

