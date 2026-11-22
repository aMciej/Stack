#include <iostream>
#include <memory>
#pragma once

struct Node{
    int Value;
    std::unique_ptr<Node> Next;

    Node(int Value, std::unique_ptr<Node> Next);

};

class Stack{
    std::unique_ptr<Node> Head;

    public:
    Stack();
    void push(int value);
    void pop();
    void top();
    void isEmpty();
    int size();
};
