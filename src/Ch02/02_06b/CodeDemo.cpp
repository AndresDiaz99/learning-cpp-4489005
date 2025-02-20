// Learning C++ 
// Exercise 02_06 MODIFIED BY ANDRES
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream> //<> means the preprocessor will look for the file in a predefined location
#include <string>
#include <cstdint> //provides fix lenght definitions for int types so you dont have to depend
            // on the implementation of primitive types like "int" or "char"

#define CAPACITY 5000
#define DEBUG //If commented the ifdef DEBUG part will not be executed

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG
    std::cout << "About to perform the addition" << std::endl;
#endif
    large += small;//large = large + small;
    std::cout << "the large interger is " << large << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
