#include <iostream>
#include <memory>
#pragma once

struct Node{
    int Value;
    Node* Next;

    Node(int Value, Node* Next);

};

class Stack{
    Node* Head;

    public:
    Stack();
    void push(int value);
    void pop();
    void top();
    void isEmpty();
    int size();
};
