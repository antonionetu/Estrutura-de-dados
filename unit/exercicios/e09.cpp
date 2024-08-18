#include <iostream>

// remover item do array

int main(){
    int array[5] = {1, 2, 3, 4, 5};
    for (const auto& e : array) {
        std::cout << e << std::endl;
    }

    array[4] = 0;
    for (const auto& e : array) {
        std::cout << e << std::endl;
    }
}
