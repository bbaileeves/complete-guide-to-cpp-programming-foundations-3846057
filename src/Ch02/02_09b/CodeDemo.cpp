// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc};

struct game_character{
    std::string name;
    int level;
    character_role role; //has to be one of the roles in enum class character_role

};

int main(){
    game_character buddy;
    buddy.name = "Emma";
    buddy.level = 5;
    buddy.role = character_role::sidekick; //does not need to be string becuase sidekick is a member of enum class character_role

    std::cout << buddy.name << " has character role type " << (int) buddy.role << " with level " << buddy.level << std::endl; //int buddy role shows enumerated version of character_role which is 2, not sidekick. This is how it has been introduced so far and hopefully I will learn how to print it as a string later. 

    std::cout << std::endl << std::endl;
    return 0;
}
