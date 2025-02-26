// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public: // without this the class will protect the data and will be innaccesible from other parts of the code
    /*Constructor
    The constructor of a class is called when an object is created.
    Always implemented.
    Simply creates the object that allocates the memory for the data members*/
    cow(std::string name_i, int age_i, cow_purpose purpose_i){
        name = name_i;
        age= age_i;
        purpose = purpose_i;
        /*Additional versions of the constructor can be written by taking a custom set of parameters
        AKA "overloading a function" -> Defining a function with the same name as an already defined function but with different set of parameters*/
    }
    std::string get_name() const{ //FUNCTION. specify it as const is a BEST PRACTICE
        return name;
    }
    int get_age() const{ // getters does not modify anything of the object they get data from
        return age; //only return
    }
    cow_purpose get_purpose() const{
        return purpose;
    }
private:
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy;
    std::cout << my_cow.name << " is a type-" << (int)my_cow.purpose << " cow." << std::endl;
    std::cout << my_cow.name << " is " << my_cow.age << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
