// Learning C++ 
// Exercise 03_03
// Using Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i){ //Constructor
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
    std::string get_name() const{ //getter
        return name;
    }
    int get_age() const{ //getter
        return age;
    }
    cow_purpose get_purpose() const{ //getter
        return purpose;
    }
    void set_age(int new_age){ //SETTER. Only modify one value of an already existing object
        age = new_age;
    }
    void set_name(std::string new_name){
        name = new_name;
    }
    void set_purpose(cow_purpose new_purpose){
        purpose = new_purpose;
    }
private:
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow("Hildy", 7, cow_purpose::pet); //calls the constructor

    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    
    std::string name_given;
    std::cout << "Name your cow!";
    std::cin >> name_given; std::cout << std::endl;

    my_cow.set_name(name_given); //Setter's call
    /*Sets a new name, age and purpose to 'my_cow' of class 'cow' */
    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
