// Learning C++ 
// Challenge 01_03 MODIFICADO POR ANDRES
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>
//using namespace std;

int main(){
    std::string str;
    std::cout << "Nombre?\n" << std::flush; //flush to wait for the whole message to be displayed before accepting the input
    std::cin >> str; //Only works for single words without spaces
    std::cout << "Hola, " << str << ", qué cuentas?" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
