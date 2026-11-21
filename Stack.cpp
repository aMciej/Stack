#include <iostream>
#include <memory>
#include "Stack.h"

Node::Node(int Value, Node* Next){
    Value = Value;
    Next = Next;
}

Stack::Stack(){
    Head = nullptr;
}

void Stack::push(int value){
    Node *newNode = new Node(value, Head);
    Head = newNode;
}

void Stack::pop(){
    if (Head == nullptr){
        std::cout << "Stack is empty" << std::endl;
    }else{
        Node* temp = Head;
        Head = Head->Next;
        delete temp;
    }
}

void Stack::top(){
    if (Head == nullptr){
        std::cout << "Stack is empty" << std::endl;
    }else{
        std::cout << Head->Value << std::endl;    
    }
}

void Stack::isEmpty(){
    if (Head == nullptr){
        std::cout << "Stack is empty" << std::endl;
    }else{
        std::cout<< "Stack is not empty" <<std::endl;
    }
}

int Stack::size(){
    if(Head == nullptr){
        std::cout << "Stack size: 0" << std::endl;
        return 0;
    }else{
        int count = 0;
        Node *temp = Head;
        while(temp != nullptr){
            temp = temp->Next;
            count +=1;
        }
        return count;
    }
}