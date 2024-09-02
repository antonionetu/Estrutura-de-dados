#include <iostream>

int stack[10], top;


void push(int val){
    if (top == sizeof(stack)/sizeof(int)){
        std::cout << "Stack Overflow" << std::endl;
        return;
    }

    if (val == 0){
        return;
    }

    stack[top] = val;
    top += 1;
}

void pop(){
    if (top == 0){
        std::cout << "Stack is already empty" << std::endl;
    }

    stack[top - 1] = 0;
    top -= 1;
}


int main(){
    push(4);
    push(6);
    push(55);
    push(9);
    pop();

    for (int i=0; i < sizeof(stack)/sizeof(int); i++){
        std::cout << stack[i] << std::endl;
    }

    return 0;
}

