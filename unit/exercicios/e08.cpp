#include <iostream>

// Adicionar itemm no array

int main(){
    int array[5];
    for (const auto& e : array) {
        std::cout << e << std::endl;
    }

    array[4] = 5;
    for (const auto& e : array) {
        std::cout << e << std::endl;
    }
}
