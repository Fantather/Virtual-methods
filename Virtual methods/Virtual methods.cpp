#include <iostream>
#include "Pet.h"
#include "Dog.h"
#include "Humster.h"
#include "Parrot.h"
#include "Cat.h"

int main()
{
    Humster a1;
    a1.Show();
    a1.Type();
    a1.Sound();
    std::cout << "\n";

    Dog a2;
    a2.Show();
    a2.Type();
    a2.Sound();
    std::cout << "\n";

    Parrot a3;
    a3.Show();
    a3.Type();
    a3.Sound();
    std::cout << "\n";

    Cat a4;
    a4.Show();
    a4.Type();
    a4.Sound();
}
