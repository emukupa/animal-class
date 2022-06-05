// #include <string>
#include "Animal.h"

const std::string unk = "unknown";
const std::string clone_prefix = "clone-";

// default constructor
Animal::Animal() : animal_name(unk), animal_sound(unk), animal_type(unk)
{
    puts("Default constructor");
}

Animal::Animal(const std::string &name, const std::string &sound, const std::string &type)
    : animal_name(name), animal_sound(sound), animal_type(type)
{
    puts("Constructor with arguments");
}

// copy constructor
Animal::Animal(const Animal &animal)
{
    puts("Copy constructor");
    animal_name = clone_prefix + animal.animal_name;
    animal_sound = clone_prefix + animal.animal_sound;
    animal_type = clone_prefix + animal.animal_type;
}

// destructor
Animal::~Animal()
{
    printf("Destructor: %s the %s/n", animal_name.c_str(), animal_type.c_str());
    animal_name = "";
    animal_sound = "";
    animal_type = "";
}

// copy operator
Animal &Animal::operator=(const Animal &op)
{
    puts("Assignment operator");
    if (this != &op)
    {
        animal_name = clone_prefix + op.animal_name;
        animal_sound = clone_prefix + op.animal_sound;
        animal_type = clone_prefix + op.animal_type;
    }
    return *this;
}

void Animal::print() const
{
    printf("%s the %s says %s\n", animal_name.c_str(), animal_type.c_str(), animal_sound.c_str());
}