// Complete Guide to C++ Programming Foundations
// Exercise 04_03
// How Arrays and Pointers are Related, by Eduardo Corpeño 

#include <iostream>

int main(){
    int highScores[] = {850, 745, 1220, 990};  // High scores in various game stages
    int* scorePtr = highScores;   // Pointer initialized to the address of the array, and will point to the first element. Equivalent would be &highScores[0], or you could point to any other position in the array this way. But can access later elements in array as we'll see below

    std::cout << "Initial high score: " << *scorePtr << std::endl;  // Display the first high score using pointer
    
    std::cout << "Second high score using pointer: " << *(scorePtr + 1) << std::endl;  

    std::cout << "Second high score using array notation: " << scorePtr[2] << std::endl;  //acts as if pointer is array itself. Note that arrays are not mutable but pointers are.

    std::cout << std::endl << std::endl;
    return 0;
}
