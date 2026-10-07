// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float target_x;
    int32_t sprite_x; //signed 32-bit integer
    uint32_t player_x; //unsigned 32-bit integer

    target_x = -123.45; //double constant assigned to float so will be converted to float
    sprite_x = target_x; //will now be converted to int32_t
    player_x = sprite_x; //and now to uint32_t which return 2^32 -123
    
    std::cout << "Target X (float): " << target_x << std::endl;
    std::cout << "Sprite X (int32_t): " << sprite_x << std::endl;
    std::cout << "Player X (uint32_t): " << static_cast<int32_t>(player_x) << std::endl; //this line now included type casting to show unsigned integer as signed integer

    std::cout << std::endl << std::endl;
    return 0;
}
