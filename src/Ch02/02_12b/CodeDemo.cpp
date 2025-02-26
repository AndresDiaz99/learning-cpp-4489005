// Learning C++ 
// Exercise 02_12 MODIFICADO POR ANDRES
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

#define CLNG
#define CPP

// enum cow_purpose {dairy, meat, hide, pet};
// enum grocery_section {canned, frozen, meat, laundry, dairy, bakery}; --> this is an error
/*A bad solution would be to change the names for meat and dairy*/

//is better to do strong typed enums
enum class cow_purpose {dairy, meat, hide, pet};
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery};

int main(){
#ifdef CLNG
    cow_purpose a;
    int meat = 8; //this will overwrite the 'enum' value and set a = 8

    // a = cow_purpose::meat; --> throws an error if 'a' is of type 'int', it needs to be of type cow_purpose
    a = cow_purpose::meat;

    // std::cout << "a = " << a << std::endl; --> error, 'cout' is not defined for the specific class
    std::cout << "a = " << (int) a << std::endl;
#endif

#ifdef CPP
    // commented section is using C enum
#endif

    std::cout << std::endl << std::endl;
    return (0);
}
