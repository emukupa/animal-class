#ifndef ANIMAL_INTERFACE
#define ANIMAL_INTERFACE
#include <string>

class Animal
{
    std::string animal_name = "";
    std::string animal_sound = "";
    std::string animal_type = "";

public:
    Animal(); // default constructor
    Animal(const std::string &name, const std::string &sound, const std::string &type);
    Animal(const Animal &);            // copy constructor
    ~Animal();                         // destructor
    Animal &operator=(const Animal &); // copy operator
    void print() const;
}
#endif // !ANIMAL_INTERFACE