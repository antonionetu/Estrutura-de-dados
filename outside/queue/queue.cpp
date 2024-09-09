#include<iostream>

const int size = 10;
int queue[size], last_index;


void enqueue(int val){
    if (last_index == size){
        std::cout << "It is a QueueUnderflow lol" << std::endl;
        return;
    }

    queue[last_index] = val;
    last_index++;
}


void dequeue(){
    if (last_index == 0){
        std::cout << "Queue is already empty" << std::endl;
        return;
    }

    last_index--;

    for(int c=0; c < last_index; c++){
        queue[c] = queue[c+1];
    }
}


int main(){
    enqueue(4);
    enqueue(2);
    dequeue();
    enqueue(24);

    for(int c=0; c < size; c++){ std::cout << queue[c] << std::endl; }
    return 0;
}


