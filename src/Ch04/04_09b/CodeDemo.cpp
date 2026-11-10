// Complete Guide to C++ Programming Foundations
// Exercise 04_09
// C Strings, by Eduardo Corpeño 

#include <iostream>
#include <cstring>

int main(){
    const size_t LENGTH = 50;
    char racer1[] = "Speedy";
    char racer2[LENGTH];
    char raceResult[LENGTH * 2];

    strncpy(racer2, "Lightning", sizeof(racer2) -1); //string copy gives racer2 a value (the string lightning). -1 is becuase one null character (\0) is needed to terminate string. 

    racer2[sizeof(racer2)-1] = '\0'; //here we explicitly assign the null character to the end of the string

    strncpy(raceResult, "And the winner is ", sizeof(raceResult)-1);
    raceResult[sizeof(raceResult)-1] = '\0';

    strncat(raceResult, racer1, sizeof(raceResult) - strlen(raceResult)-1); //size is of characters left in the destination string -1

    std::cout << raceResult << std::endl;


    std::cout << "Racer 1: " << racer1 << std::endl;
    std::cout << "Racer 2: " << racer2 << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
