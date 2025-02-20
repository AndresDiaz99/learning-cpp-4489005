// Learning C++ 
// Exercise 02_08 MODIFICADO POR ANDRES
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define AGE_LENGTH 4

int main(){
    const size_t AGE_LENGTH = 4; //size_t is a more apropriate type for sizes idkw~
    int age[AGE_LENGTH]; //Definition of arrays
    float temperature[] = {31.5, 32.7,  38.9}; //not specify array lenght if will assign a list with constant lenght      // the values dont have an "f" at the end, but in some cases C++ can convert it.
                //read about implicit conversions
    
    //auto doesnt work for arrays

    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 32;

    //print - usually done with loops
    std::cout << "Age[0] = " << age[0] << std::endl;
    std::cout << "Age[1] = " << age[1] << std::endl;
    std::cout << "Age[2] = " << age[2] << std::endl;
    std::cout << "Age[3] = " << age[3] << std::endl;

    std::cout << std::endl << std::endl;

    std::cout << "temp[0] = " << temperature[0] << std::endl;
    std::cout << "temp[1] = " << temperature[1] << std::endl;
    std::cout << "temp[2] = " << temperature[2] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
