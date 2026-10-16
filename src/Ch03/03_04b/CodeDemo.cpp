// Complete Guide to C++ Programming Foundations
// Exercise 03_04
// Increment and Decrement Operators, by Eduardo Corpeño 

#include <iostream>

int main(){
    int player_score = 10;
    int player_lives = 3;

    std::cout << "Initial Score: " << player_score << std::endl;
    std::cout << "Initial Lives: " << player_lives << std::endl;

    // Postfix increment
    std::cout << "Score using postfix increment: " << player_score++ << std::endl; //increases score by 1 after printing

    // Prefix increment
    std::cout << "Score using prefix increment: " << ++player_score << std::endl; //increases score by 1 before printing

    // Postfix decrement
    std::cout << "Lives using postfix decrement: " << player_lives-- << std::endl; //decreases score by 1 after printing

    // Prefix decrement
    std::cout << "Lives using prefix decrement: " << --player_lives << std::endl; //decreases score by 1 before printing

    std::cout << std::endl << std::endl;
    return 0;
}