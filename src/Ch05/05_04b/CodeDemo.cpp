// Complete Guide to C++ Programming Foundations
// Exercise 05_04
// While Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> playerScores = {12, 25, 31, 47, 58};
    
    //first while loop 

    std::vector<int>::iterator scorePtr = playerScores.begin();//iterate through player scores starting from the beginning of the vector. Could also use auto scorePtr = playerScores.begin() becuase type of all of the values is int. 

    while (scorePtr != playerScores.end()){
       std::cout << *scorePtr << " ";
       scorePtr = next(scorePtr, 1); //move one ahead in the vector 
    }
    std::cout << std::endl;


    //second while loop (a do...while loop). This runs the first iteration before checking condition

    int i = 0;
    do{
        std::cout << playerScores[i] << " ";
        i++;
    }while(i < playerScores.size());
    std::cout << std::endl;

    //here we have written two different types of while loop to do the same thing


    std::cout << std::endl << std::endl;
    return (0);
}
