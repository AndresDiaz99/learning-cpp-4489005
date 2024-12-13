// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a,b=5; /*at the same level of indentation as int main() so this are GLOBAL VARIABLES. Accessible to all parts of the code
Managed statically by the complier
Allocated in the DATA segment of memory
Global Variables are not generally recommended
*/

int main(){
    /*Local Variables to the scope
    inside functions or loops, only accessible within the scope
    aka: Automatic variables, because are managed by the compiler
    allocated in the stack segment of memory - Temporary */
    bool my_flag;
    a = 7;
    my_flag = false;

    std::cout << "a= " << a << std::endl;
    std::cout << "b= " << b << std::endl;
    std::cout << "flag= " << my_flag << std::endl;
    my_flag = true;
    std::cout << "flag= " << my_flag << std::endl;
    std::cout << "a + b= " << a +b << std::endl;
    std::cout << "b - a= " << b - a << std::endl;

    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unisgned)= " << positive << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
