#include <iostream>

// Colocar item no começo do array

int main(){
    int array[5] = {1, 2, 3, 4};
    int arraySize = sizeof(array) / sizeof(int);

    for (const auto& e : array) {
        std::cout << e << std::endl;
    }

    for (int c=arraySize-1; c > 0; c--) {
        array[c] =  array[c-1];
    }
    array[0] = 42;

    for (const auto& e : array) {
        std::cout << e << std::endl;
    }

    return 0;
}
