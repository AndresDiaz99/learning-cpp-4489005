// Learning C++ 
// Exercise 02_09 MODIFICADO POR ANDRES
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring> //to include part of the C standard library

int main(){
//two char arrays as in C
    const size_t LENGTH = 25;
    char array_str1[LENGTH] = "Hey guys! "; //this constant string means a sequence of ASCII characters terminated by 0
    char array_str2[]= "What's up?";

//two string objects as in C++
    std::string std_str1 = "Hi everybody! ";
    std::string std_str2 = "How's it going?";

//for the char variables the <cstring> provides the strcat family of functions
    strncat (array_str1, array_str2, LENGTH); //this modifies the first string
    //strncat (destination_string, second array to concatenate, max length to produce)
    std::cout << array_str1 << std::endl;
// for the <string> class
    std::cout << std_str1 + std_str2 << std::endl; //non of the operants is modified

    std::cout << std::endl << std::endl;
    return (0);
}
/*Not usual to resort to the <cstring> class, is generally better to use <string> class
Usually the <cstring> class is used when the code needs to be compatible with existing C code*/