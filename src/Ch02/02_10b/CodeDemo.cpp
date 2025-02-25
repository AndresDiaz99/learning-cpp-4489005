// Learning C++ 
// Exercise 02_10 MODIFICADO POR ANDRES
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66; //Implicit casting. No 'f' characher at the end so it is a 'double' constant
    sgn = flt; //double or float to int32_t gets truncated
    unsgn = sgn; //the 32 bits version of the 2's complement of 7 -> (2^32) - 7

    std::cout << "float " << flt << std::endl;
    std::cout << "int32_t " << sgn << std::endl;
    std::cout << "unint32_t "<< unsgn << std::endl;
    std::cout << "unint32_t "<< (int32_t) unsgn << std::endl; //Explicit cast

    std::cout << std::endl << std::endl;
    return (0);
}
