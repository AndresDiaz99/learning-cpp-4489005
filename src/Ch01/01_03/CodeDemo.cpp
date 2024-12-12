// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>
//using namespace std;

int main(){
    std::string str;
    std::cout << "Nombre?\n" << std::flush; //flush to wait for the whole message to be displayed before accepting the input
    std::cin >> str;
    std::cout << "Hola, " << str << ", qué cuentas?" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
