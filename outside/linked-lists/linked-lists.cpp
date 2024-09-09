#include <iostream>
#include <cstdlib>


struct Node {
    int value;
    Node* next;
};


Node* insert(Node *prev, int val){
    Node* ptr = (Node*) malloc(sizeof(Node));
 
    if(&prev -> value != NULL){
       prev -> value = ptr -> value;
    }

    ptr -> value = val;
    ptr -> next = NULL;

    return ptr;
}


int main(){
    Node* head = insert(NULL, 5);

    std::cout << head -> value << std::endl;

    return 0;
}

