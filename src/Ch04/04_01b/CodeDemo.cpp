// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define LEVEL_COUNT 4 //macro could be used to define global variable but using const int or const size_t within function also works..

int main(){
    const size_t LEVEL_COUNT = 4; //int also works but size_t is more appropriate for using as size of array.
    int enemies[LEVEL_COUNT]; //4 is capacity, index from 0 to 3
    float levelDifficulty[] = {1.0, 3.5, 6.0, 10.5}; //don't need capacity because being initialised at declaration. NB: can't use auto type. This will store the doubles we've listed as floats.

    enemies[0] = 10;
    enemies[1] = 15;
    enemies[2] = 20;
    enemies[3] = 25;

    std::cout << "The game has " << LEVEL_COUNT << " levels:" << std::endl;
    std::cout << "Level 1: " << enemies[0] << " enemies" << std::endl;
    std::cout << "Level 2: " << enemies[1] << " enemies" << std::endl;
    std::cout << "Level 3: " << enemies[2] << " enemies" << std::endl;
    std::cout << "Level 4: " << enemies[3] << " enemies" << std::endl;

        std::cout << "The level difficulties are as follows:" << std::endl;
    std::cout << "Level 1: " << levelDifficulty[0] << std::endl;
    std::cout << "Level 2: " << levelDifficulty[1] << std::endl;
    std::cout << "Level 3: " << levelDifficulty[2] << std::endl;
    std::cout << "Level 4: " << levelDifficulty[3] << std::endl;


    std::cout << std::endl << std::endl;
    return 0;
}
