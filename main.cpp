#include <cstdio>
#include "Animal.h"

int main()
{
    Animal animal1;
    animal1.print();

    const Animal animal2 = {"Billy", "beeeeh", "goat"};
    animal2.print();

    const Animal animal3 = animal2;
    animal3.print();

    animal1 = animal3;
    animal1.print();

    return 0;
}