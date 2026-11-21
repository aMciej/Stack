#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
    Stack *s1 = new Stack();
    s1->push(1);
    s1->push(2);
    s1->pop();
    s1->top();
    s1->isEmpty();
    s1->size();
}