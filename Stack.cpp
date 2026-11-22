#include <iostream>
#include <memory>
#include "Stack.h"

Node::Node(int Value, std::unique_ptr<Node> Next)
    : Value(Value), Next(std::move(Next)){
    }


Stack::Stack(){
    Head = nullptr;
}

void Stack::push(int value){
    auto newNode = std::make_unique<Node>(value, std::move(Head));
    Head = std::move(newNode);
}

void Stack::pop(){
    if (Head == nullptr){
        std::cout << "Stack is empty" << std::endl;
    }else{
        Head = std::move(Head->Next);
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
        int count = 0;
        Node* temp = Head.get();
        while(temp != nullptr){
            count +=1;
            temp = temp->Next.get();
        }
        return count;
}