#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
    auto s1 = std::make_unique<Stack>();
    s1->push(1);
    s1->push(2);
    s1->pop();
    s1->top();
    s1->isEmpty();
    std::cout << s1->size() << std::endl;

    return 0;
}