#ifndef NODE_H
#define NODE_H

template<typename T>
class Node {
public:
    Node(const T& data);
    T getData() const;
    Node<T>* getNext() const;
    void setNext(Node<T>* next);

private:
    T data;
    Node<T>* next;
};

// you write implementations

#endif
