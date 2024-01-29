#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>

template<typename T>
class LinkedList {
public:
    LinkedList();
    ~LinkedList();

    void insert(const T& data);
    void remove(const T& data);
    bool search(const T& data) const;
    void display() const;
    bool isEmpty() const;

private:
    Node<T>* head;
};

template<typename T>
LinkedList<T>::LinkedList() : head(nullptr) {}

template<typename T>
void LinkedList<T>::display() const {
    Node<T>* current = head;
    if(current != nullptr){
        std::cout << "#";
    }
    while (current != nullptr) {
        std::cout << current->getData() << " ";
        current = current->getNext();
    }
    std::cout << "#" << std::endl;
}

//you finish remaining functions

#endif
