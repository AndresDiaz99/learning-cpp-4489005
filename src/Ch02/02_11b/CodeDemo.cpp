// Learning C++ 
// Exercise 02_11 MODIFICADO POR ANDRES
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit =100;
    int celsius;

    celsius = (5/9)*(fahrenheit -32); //the result is 0
    // this is because 5/9 is a division of ints so it returns the int part = 0
    std::cout <<  "Fahrenheit: "<<fahrenheit << std::endl;
    std::cout << "Celsius: "<<celsius << std::endl;

    celsius = ((float)5/9.0)*(fahrenheit -32); //Converting one to float and other to double
    //this returns the correct result
    std::cout <<  "Fahrenheit: "<<fahrenheit << std::endl;
    std::cout << "Celsius: "<<celsius << std::endl;

    //2nd Example
    double  weight = 10.99;
    std::cout << std::endl;

    std::cout <<"Float          : " << weight <<std::endl; //Float part (all the number)
    std::cout <<"Integer part   : " << (int)weight <<std::endl; //Int part (10), just cast it to int
    std::cout <<"Fractional part: " << (int)((weight - (int)weight) * 10000) <<std::endl;
    // (10.99 - 10) * (10^number of wanted decimal extracted) -> cast everything to an 'int'
    // the result is 9899, this is a limitation of the floating point numbers, is an aproximation
    //there may be more precision with 'doubles'
    
    std::cout << std::endl << std::endl;
    return (0);
}
