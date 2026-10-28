// Complete Guide to C++ Programming Foundations
// Exercise 04_04
// Using Objects with Pointers, by Eduardo Corpeño 

// the point of this is to free up memory, using pointers for dynmaic memory management. 

#include <iostream>
#include <string>
#include <chrono>

// Type aliases for chrono classes
using Clock = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<Clock>; //angle bracket notation is part of generic programming implemented by templates which will be covered later
using Duration = std::chrono::duration<double>;

int main(){
    TimePoint *start, *end; //start and end are pointers, no memory allocated yet so need to do that later
    Duration *elapsed_seconds = new Duration(); //allocate memory directly using new
    std::string input;

    start = new TimePoint(Clock::now()); //using scope resolution operator :: instead of dot operator because it's a static member function- no object of the system Clock class is required. new allocates memory to it, and it needs to know it's of the timepoint variety

    std::cout << "Type 'start' as quickly as you can and hit ENTER: " << std::flush; //flush makes user see the message
    std::cin >> input; //user can put in anything, not checking it's correct (simple version).

    end = new TimePoint(Clock::now()); 
    *elapsed_seconds = *end - *start; //subtraction specific to class. Get object that pointer is pointing to using the *

    std::cout << "Reaction time: " << elapsed_seconds->count() << "s" << std::endl; //the arrow part is the equivalent of using brackets to make it direct to pointer first, so could also be written (*elapsed_seconds).count(). 
    
    delete start;
    delete end;
    delete elapsed_seconds; //delete is opposite of new, and deletes memory allocation to pointers (good practice free memory and avoid memory leakage)

    std::cout << std::endl << std::endl;
    return 0;
}
