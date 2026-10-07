// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    celsius = (static_cast<float>(5)/9.0) * (fahrenheit-32);

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    float weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;
    std::cout << "Integer part   : " << static_cast<int>(weight) << std::endl;
    std::cout << "Fractional part: " << static_cast<int>((weight-static_cast<int>(weight)) * 10000) << std::endl; //here in the example he used (int)weight instead of static_cast<int> but before said static_cast is advised so I'm trying to be consistent with that. Number of decimal places evaluated depends on how much you multiply by. Because 4 dp, the it guesses based on float. If you use double weight = 10.99 earlier instead of float, then you get 9900 for fractional part as it's more precise (double precision). 

    std::cout << std::endl << std::endl;
    return 0;
}
